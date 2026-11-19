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
	[Address(RVA = "0x6494660", Offset = "0x6493660", VA = "0x6494660")]
	public Random(uint seed)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E83")]
	[Address(RVA = "0x6494680", Offset = "0x6493680", VA = "0x6494680")]
	public static Random CreateFromIndex(uint index)
	{
		return default(Random);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E84")]
	[Address(RVA = "0x64946C0", Offset = "0x64936C0", VA = "0x64946C0")]
	internal static uint WangHash(uint n)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E85")]
	[Address(RVA = "0x64946F0", Offset = "0x64936F0", VA = "0x64946F0")]
	public void InitState(uint seed = 1851936439u)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E86")]
	[Address(RVA = "0x6494710", Offset = "0x6493710", VA = "0x6494710")]
	public bool NextBool()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E87")]
	[Address(RVA = "0x6494730", Offset = "0x6493730", VA = "0x6494730")]
	public bool2 NextBool2()
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E88")]
	[Address(RVA = "0x6494760", Offset = "0x6493760", VA = "0x6494760")]
	public bool3 NextBool3()
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E89")]
	[Address(RVA = "0x64947A0", Offset = "0x64937A0", VA = "0x64947A0")]
	public bool4 NextBool4()
	{
		return default(bool4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8A")]
	[Address(RVA = "0x64947E0", Offset = "0x64937E0", VA = "0x64947E0")]
	public int NextInt()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8B")]
	[Address(RVA = "0x6494800", Offset = "0x6493800", VA = "0x6494800")]
	public int2 NextInt2()
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8C")]
	[Address(RVA = "0x6494850", Offset = "0x6493850", VA = "0x6494850")]
	public int3 NextInt3()
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8D")]
	[Address(RVA = "0x64948C0", Offset = "0x64938C0", VA = "0x64948C0")]
	public int4 NextInt4()
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8E")]
	[Address(RVA = "0x6494950", Offset = "0x6493950", VA = "0x6494950")]
	public int NextInt(int max)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8F")]
	[Address(RVA = "0x6494980", Offset = "0x6493980", VA = "0x6494980")]
	public int2 NextInt2(int2 max)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E90")]
	[Address(RVA = "0x64949E0", Offset = "0x64939E0", VA = "0x64949E0")]
	public int3 NextInt3(int3 max)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E91")]
	[Address(RVA = "0x6494A60", Offset = "0x6493A60", VA = "0x6494A60")]
	public int4 NextInt4(int4 max)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E92")]
	[Address(RVA = "0x6494B10", Offset = "0x6493B10", VA = "0x6494B10")]
	public int NextInt(int min, int max)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E93")]
	[Address(RVA = "0x6494B40", Offset = "0x6493B40", VA = "0x6494B40")]
	public int2 NextInt2(int2 min, int2 max)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E94")]
	[Address(RVA = "0x6494BC0", Offset = "0x6493BC0", VA = "0x6494BC0")]
	public int3 NextInt3(int3 min, int3 max)
	{
		return default(int3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E95")]
	[Address(RVA = "0x6494C70", Offset = "0x6493C70", VA = "0x6494C70")]
	public int4 NextInt4(int4 min, int4 max)
	{
		return default(int4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E96")]
	[Address(RVA = "0x6494D50", Offset = "0x6493D50", VA = "0x6494D50")]
	public uint NextUInt()
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E97")]
	[Address(RVA = "0x6494D70", Offset = "0x6493D70", VA = "0x6494D70")]
	public uint2 NextUInt2()
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E98")]
	[Address(RVA = "0x6494DB0", Offset = "0x6493DB0", VA = "0x6494DB0")]
	public uint3 NextUInt3()
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E99")]
	[Address(RVA = "0x6494E10", Offset = "0x6493E10", VA = "0x6494E10")]
	public uint4 NextUInt4()
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9A")]
	[Address(RVA = "0x6494E90", Offset = "0x6493E90", VA = "0x6494E90")]
	public uint NextUInt(uint max)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9B")]
	[Address(RVA = "0x6494EC0", Offset = "0x6493EC0", VA = "0x6494EC0")]
	public uint2 NextUInt2(uint2 max)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9C")]
	[Address(RVA = "0x6494F20", Offset = "0x6493F20", VA = "0x6494F20")]
	public uint3 NextUInt3(uint3 max)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9D")]
	[Address(RVA = "0x6494FA0", Offset = "0x6493FA0", VA = "0x6494FA0")]
	public uint4 NextUInt4(uint4 max)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9E")]
	[Address(RVA = "0x6495050", Offset = "0x6494050", VA = "0x6495050")]
	public uint NextUInt(uint min, uint max)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9F")]
	[Address(RVA = "0x6495080", Offset = "0x6494080", VA = "0x6495080")]
	public uint2 NextUInt2(uint2 min, uint2 max)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA0")]
	[Address(RVA = "0x6495100", Offset = "0x6494100", VA = "0x6495100")]
	public uint3 NextUInt3(uint3 min, uint3 max)
	{
		return default(uint3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA1")]
	[Address(RVA = "0x64951B0", Offset = "0x64941B0", VA = "0x64951B0")]
	public uint4 NextUInt4(uint4 min, uint4 max)
	{
		return default(uint4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA2")]
	[Address(RVA = "0x6495290", Offset = "0x6494290", VA = "0x6495290")]
	public float NextFloat()
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA3")]
	[Address(RVA = "0x64952C0", Offset = "0x64942C0", VA = "0x64952C0")]
	public float2 NextFloat2()
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA4")]
	[Address(RVA = "0x6495320", Offset = "0x6494320", VA = "0x6495320")]
	public float3 NextFloat3()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA5")]
	[Address(RVA = "0x64953B0", Offset = "0x64943B0", VA = "0x64953B0")]
	public float4 NextFloat4()
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA6")]
	[Address(RVA = "0x6495470", Offset = "0x6494470", VA = "0x6495470")]
	public float NextFloat(float max)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA7")]
	[Address(RVA = "0x64954B0", Offset = "0x64944B0", VA = "0x64954B0")]
	public float2 NextFloat2(float2 max)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA8")]
	[Address(RVA = "0x6495510", Offset = "0x6494510", VA = "0x6495510")]
	public float3 NextFloat3(float3 max)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA9")]
	[Address(RVA = "0x64955A0", Offset = "0x64945A0", VA = "0x64955A0")]
	public float4 NextFloat4(float4 max)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAA")]
	[Address(RVA = "0x6495660", Offset = "0x6494660", VA = "0x6495660")]
	public float NextFloat(float min, float max)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAB")]
	[Address(RVA = "0x64956A0", Offset = "0x64946A0", VA = "0x64956A0")]
	public float2 NextFloat2(float2 min, float2 max)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAC")]
	[Address(RVA = "0x6495700", Offset = "0x6494700", VA = "0x6495700")]
	public float3 NextFloat3(float3 min, float3 max)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAD")]
	[Address(RVA = "0x64957A0", Offset = "0x64947A0", VA = "0x64957A0")]
	public float4 NextFloat4(float4 min, float4 max)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAE")]
	[Address(RVA = "0x6495870", Offset = "0x6494870", VA = "0x6495870")]
	public double NextDouble()
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAF")]
	[Address(RVA = "0x64958C0", Offset = "0x64948C0", VA = "0x64958C0")]
	public double2 NextDouble2()
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB0")]
	[Address(RVA = "0x6495960", Offset = "0x6494960", VA = "0x6495960")]
	public double3 NextDouble3()
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB1")]
	[Address(RVA = "0x6495A50", Offset = "0x6494A50", VA = "0x6495A50")]
	public double4 NextDouble4()
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB2")]
	[Address(RVA = "0x6495B90", Offset = "0x6494B90", VA = "0x6495B90")]
	public double NextDouble(double max)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB3")]
	[Address(RVA = "0x6495BF0", Offset = "0x6494BF0", VA = "0x6495BF0")]
	public double2 NextDouble2(double2 max)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB4")]
	[Address(RVA = "0x6495C90", Offset = "0x6494C90", VA = "0x6495C90")]
	public double3 NextDouble3(double3 max)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB5")]
	[Address(RVA = "0x6495DB0", Offset = "0x6494DB0", VA = "0x6495DB0")]
	public double4 NextDouble4(double4 max)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB6")]
	[Address(RVA = "0x6495F10", Offset = "0x6494F10", VA = "0x6495F10")]
	public double NextDouble(double min, double max)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB7")]
	[Address(RVA = "0x6495F70", Offset = "0x6494F70", VA = "0x6495F70")]
	public double2 NextDouble2(double2 min, double2 max)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB8")]
	[Address(RVA = "0x6496030", Offset = "0x6495030", VA = "0x6496030")]
	public double3 NextDouble3(double3 min, double3 max)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB9")]
	[Address(RVA = "0x6496170", Offset = "0x6495170", VA = "0x6496170")]
	public double4 NextDouble4(double4 min, double4 max)
	{
		return default(double4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBA")]
	[Address(RVA = "0x6496300", Offset = "0x6495300", VA = "0x6496300")]
	public float2 NextFloat2Direction()
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBB")]
	[Address(RVA = "0x6496400", Offset = "0x6495400", VA = "0x6496400")]
	public double2 NextDouble2Direction()
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBC")]
	[Address(RVA = "0x6496520", Offset = "0x6495520", VA = "0x6496520")]
	public float3 NextFloat3Direction()
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBD")]
	[Address(RVA = "0x6496730", Offset = "0x6495730", VA = "0x6496730")]
	public double3 NextDouble3Direction()
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBE")]
	[Address(RVA = "0x6496990", Offset = "0x6495990", VA = "0x6496990")]
	public quaternion NextQuaternionRotation()
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBF")]
	[Address(RVA = "0x6496BA0", Offset = "0x6495BA0", VA = "0x6496BA0")]
	private uint NextState()
	{
		return default(uint);
	}

	[Token(Token = "0x6001EC0")]
	[Address(RVA = "0x6496BC0", Offset = "0x6495BC0", VA = "0x6496BC0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckInitState()
	{
	}

	[Token(Token = "0x6001EC1")]
	[Address(RVA = "0x6496BD0", Offset = "0x6495BD0", VA = "0x6496BD0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private static void CheckIndexForHash(uint index)
	{
	}

	[Token(Token = "0x6001EC2")]
	[Address(RVA = "0x6496C20", Offset = "0x6495C20", VA = "0x6496C20")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckState()
	{
	}

	[Token(Token = "0x6001EC3")]
	[Address(RVA = "0x6496C30", Offset = "0x6495C30", VA = "0x6496C30")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckNextIntMax(int max)
	{
	}

	[Token(Token = "0x6001EC4")]
	[Address(RVA = "0x6496C40", Offset = "0x6495C40", VA = "0x6496C40")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckNextIntMinMax(int min, int max)
	{
	}

	[Token(Token = "0x6001EC5")]
	[Address(RVA = "0x6496C50", Offset = "0x6495C50", VA = "0x6496C50")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckNextUIntMinMax(uint min, uint max)
	{
	}
}
