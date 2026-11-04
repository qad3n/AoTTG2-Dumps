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
[Token(Token = "0x200004F")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct Random
{
	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x0")]
	public uint state;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E82")]
	[Address(RVA = "0x2AAAEE0", Offset = "0x2AA94E0", VA = "0x182AAAEE0")]
	public Random(uint seed)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E83")]
	[Address(RVA = "0x2AAAEA0", Offset = "0x2AA94A0", VA = "0x182AAAEA0")]
	public static Random CreateFromIndex(uint index)
	{
		return default(Random);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E84")]
	[Address(RVA = "0x2AAC9C0", Offset = "0x2AAAFC0", VA = "0x182AAC9C0")]
	internal static uint WangHash(uint n)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E85")]
	[Address(RVA = "0x2AAAEE0", Offset = "0x2AA94E0", VA = "0x182AAAEE0")]
	public void InitState(uint seed = 1851936439u)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E86")]
	[Address(RVA = "0x2AAAFE0", Offset = "0x2AA95E0", VA = "0x182AAAFE0")]
	public bool NextBool()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E87")]
	[Address(RVA = "0x2AAAF00", Offset = "0x2AA9500", VA = "0x182AAAF00")]
	public bool2 NextBool2()
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E88")]
	[Address(RVA = "0x2AAAF40", Offset = "0x2AA9540", VA = "0x182AAAF40")]
	public bool3 NextBool3()
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E89")]
	[Address(RVA = "0x2AAAF90", Offset = "0x2AA9590", VA = "0x182AAAF90")]
	public bool4 NextBool4()
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8A")]
	[Address(RVA = "0x2AAC5E0", Offset = "0x2AAABE0", VA = "0x182AAC5E0")]
	public int NextInt()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8B")]
	[Address(RVA = "0x2AAC080", Offset = "0x2AAA680", VA = "0x182AAC080")]
	public int2 NextInt2()
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8C")]
	[Address(RVA = "0x2AAC210", Offset = "0x2AAA810", VA = "0x182AAC210")]
	public int3 NextInt3()
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8D")]
	[Address(RVA = "0x2AAC4D0", Offset = "0x2AAAAD0", VA = "0x182AAC4D0")]
	public int4 NextInt4()
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8E")]
	[Address(RVA = "0x2AAC5B0", Offset = "0x2AAABB0", VA = "0x182AAC5B0")]
	public int NextInt(int max)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8F")]
	[Address(RVA = "0x2AAC010", Offset = "0x2AAA610", VA = "0x182AAC010")]
	public int2 NextInt2(int2 max)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E90")]
	[Address(RVA = "0x2AAC170", Offset = "0x2AAA770", VA = "0x182AAC170")]
	public int3 NextInt3(int3 max)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E91")]
	[Address(RVA = "0x2AAC410", Offset = "0x2AAAA10", VA = "0x182AAC410")]
	public int4 NextInt4(int4 max)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E92")]
	[Address(RVA = "0x2AAC580", Offset = "0x2AAAB80", VA = "0x182AAC580")]
	public int NextInt(int min, int max)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E93")]
	[Address(RVA = "0x2AAC0E0", Offset = "0x2AAA6E0", VA = "0x182AAC0E0")]
	public int2 NextInt2(int2 min, int2 max)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E94")]
	[Address(RVA = "0x2AAC2A0", Offset = "0x2AAA8A0", VA = "0x182AAC2A0")]
	public int3 NextInt3(int3 min, int3 max)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E95")]
	[Address(RVA = "0x2AAC340", Offset = "0x2AAA940", VA = "0x182AAC340")]
	public int4 NextInt4(int4 min, int4 max)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E96")]
	[Address(RVA = "0x2AAC990", Offset = "0x2AAAF90", VA = "0x182AAC990")]
	public uint NextUInt()
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E97")]
	[Address(RVA = "0x2AAC690", Offset = "0x2AAAC90", VA = "0x182AAC690")]
	public uint2 NextUInt2()
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E98")]
	[Address(RVA = "0x2AAC780", Offset = "0x2AAAD80", VA = "0x182AAC780")]
	public uint3 NextUInt3()
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E99")]
	[Address(RVA = "0x2AAC800", Offset = "0x2AAAE00", VA = "0x182AAC800")]
	public uint4 NextUInt4()
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9A")]
	[Address(RVA = "0x2AAC960", Offset = "0x2AAAF60", VA = "0x182AAC960")]
	public uint NextUInt(uint max)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9B")]
	[Address(RVA = "0x2AAC630", Offset = "0x2AAAC30", VA = "0x182AAC630")]
	public uint2 NextUInt2(uint2 max)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9C")]
	[Address(RVA = "0x2AAC6E0", Offset = "0x2AAACE0", VA = "0x182AAC6E0")]
	public uint3 NextUInt3(uint3 max)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9D")]
	[Address(RVA = "0x2AAC8A0", Offset = "0x2AAAEA0", VA = "0x182AAC8A0")]
	public uint4 NextUInt4(uint4 max)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9E")]
	[Address(RVA = "0x2AAC580", Offset = "0x2AAAB80", VA = "0x182AAC580")]
	public uint NextUInt(uint min, uint max)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9F")]
	[Address(RVA = "0x2AAC0E0", Offset = "0x2AAA6E0", VA = "0x182AAC0E0")]
	public uint2 NextUInt2(uint2 min, uint2 max)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA0")]
	[Address(RVA = "0x2AAC2A0", Offset = "0x2AAA8A0", VA = "0x182AAC2A0")]
	public uint3 NextUInt3(uint3 min, uint3 max)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA1")]
	[Address(RVA = "0x2AAC340", Offset = "0x2AAA940", VA = "0x182AAC340")]
	public uint4 NextUInt4(uint4 min, uint4 max)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA2")]
	[Address(RVA = "0x2AABFD0", Offset = "0x2AAA5D0", VA = "0x182AABFD0")]
	public float NextFloat()
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA3")]
	[Address(RVA = "0x2AAB910", Offset = "0x2AA9F10", VA = "0x182AAB910")]
	public float2 NextFloat2()
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA4")]
	[Address(RVA = "0x2AAB990", Offset = "0x2AA9F90", VA = "0x182AAB990")]
	public float3 NextFloat3()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA5")]
	[Address(RVA = "0x2AABD50", Offset = "0x2AAA350", VA = "0x182AABD50")]
	public float4 NextFloat4()
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA6")]
	[Address(RVA = "0x2AABF40", Offset = "0x2AAA540", VA = "0x182AABF40")]
	public float NextFloat(float max)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA7")]
	[Address(RVA = "0x2AAB880", Offset = "0x2AA9E80", VA = "0x182AAB880")]
	public float2 NextFloat2(float2 max)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA8")]
	[Address(RVA = "0x2AABA50", Offset = "0x2AAA050", VA = "0x182AABA50")]
	public float3 NextFloat3(float3 max)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA9")]
	[Address(RVA = "0x2AABE40", Offset = "0x2AAA440", VA = "0x182AABE40")]
	public float4 NextFloat4(float4 max)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAA")]
	[Address(RVA = "0x2AABF80", Offset = "0x2AAA580", VA = "0x182AABF80")]
	public float NextFloat(float min, float max)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAB")]
	[Address(RVA = "0x2AAB7C0", Offset = "0x2AA9DC0", VA = "0x182AAB7C0")]
	public float2 NextFloat2(float2 min, float2 max)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAC")]
	[Address(RVA = "0x2AABB30", Offset = "0x2AAA130", VA = "0x182AABB30")]
	public float3 NextFloat3(float3 min, float3 max)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAD")]
	[Address(RVA = "0x2AABC20", Offset = "0x2AAA220", VA = "0x182AABC20")]
	public float4 NextFloat4(float4 min, float4 max)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAE")]
	[Address(RVA = "0x2AAB610", Offset = "0x2AA9C10", VA = "0x182AAB610")]
	public double NextDouble()
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAF")]
	[Address(RVA = "0x2AAB200", Offset = "0x2AA9800", VA = "0x182AAB200")]
	public double2 NextDouble2()
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB0")]
	[Address(RVA = "0x2AA6C40", Offset = "0x2AA5240", VA = "0x182AA6C40")]
	public double3 NextDouble3()
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB1")]
	[Address(RVA = "0x2AA6D40", Offset = "0x2AA5340", VA = "0x182AA6D40")]
	public double4 NextDouble4()
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB2")]
	[Address(RVA = "0x2AAB670", Offset = "0x2AA9C70", VA = "0x182AAB670")]
	public double NextDouble(double max)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB3")]
	[Address(RVA = "0x2AAB120", Offset = "0x2AA9720", VA = "0x182AAB120")]
	public double2 NextDouble2(double2 max)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB4")]
	[Address(RVA = "0x2AAB3B0", Offset = "0x2AA99B0", VA = "0x182AAB3B0")]
	public double3 NextDouble3(double3 max)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB5")]
	[Address(RVA = "0x2AAB530", Offset = "0x2AA9B30", VA = "0x182AAB530")]
	public double4 NextDouble4(double4 max)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB6")]
	[Address(RVA = "0x2AAB5A0", Offset = "0x2AA9BA0", VA = "0x182AAB5A0")]
	public double NextDouble(double min, double max)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB7")]
	[Address(RVA = "0x2AAB2C0", Offset = "0x2AA98C0", VA = "0x182AAB2C0")]
	public double2 NextDouble2(double2 min, double2 max)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB8")]
	[Address(RVA = "0x2AAB410", Offset = "0x2AA9A10", VA = "0x182AAB410")]
	public double3 NextDouble3(double3 min, double3 max)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB9")]
	[Address(RVA = "0x2AAB490", Offset = "0x2AA9A90", VA = "0x182AAB490")]
	public double4 NextDouble4(double4 min, double4 max)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBA")]
	[Address(RVA = "0x2AAB6D0", Offset = "0x2AA9CD0", VA = "0x182AAB6D0")]
	public float2 NextFloat2Direction()
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBB")]
	[Address(RVA = "0x2AAB010", Offset = "0x2AA9610", VA = "0x182AAB010")]
	public double2 NextDouble2Direction()
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBC")]
	[Address(RVA = "0x2AA6E90", Offset = "0x2AA5490", VA = "0x182AA6E90")]
	public float3 NextFloat3Direction()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBD")]
	[Address(RVA = "0x2AA6A30", Offset = "0x2AA5030", VA = "0x182AA6A30")]
	public double3 NextDouble3Direction()
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBE")]
	[Address(RVA = "0x2AA7020", Offset = "0x2AA5620", VA = "0x182AA7020")]
	public quaternion NextQuaternionRotation()
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBF")]
	[Address(RVA = "0x2AAC610", Offset = "0x2AAAC10", VA = "0x182AAC610")]
	private uint NextState()
	{
		return default(uint);
	}

	[Token(Token = "0x6001EC0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckInitState()
	{
	}

	[Token(Token = "0x6001EC1")]
	[Address(RVA = "0x2AAAE40", Offset = "0x2AA9440", VA = "0x182AAAE40")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private static void CheckIndexForHash(uint index)
	{
	}

	[Token(Token = "0x6001EC2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckState()
	{
	}

	[Token(Token = "0x6001EC3")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckNextIntMax(int max)
	{
	}

	[Token(Token = "0x6001EC4")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckNextIntMinMax(int min, int max)
	{
	}

	[Token(Token = "0x6001EC5")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckNextUIntMinMax(uint min, uint max)
	{
	}
}
