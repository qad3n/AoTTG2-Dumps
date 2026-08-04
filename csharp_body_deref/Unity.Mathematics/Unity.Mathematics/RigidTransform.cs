// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.RigidTransform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000052")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct RigidTransform
{
	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x0")]
	public quaternion rot;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x10")]
	public float3 pos;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RigidTransform identity;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7B")]
	[Address(RVA = "0x4B20100", Offset = "0x4B20100", VA = "0x4B20100")]
	public RigidTransform(quaternion rotation, float3 translation)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7C")]
	[Address(RVA = "0x4B20110", Offset = "0x4B20110", VA = "0x4B20110")]
	public RigidTransform(float3x3 rotation, float3 translation)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7D")]
	[Address(RVA = "0x4B20180", Offset = "0x4B20180", VA = "0x4B20180")]
	public RigidTransform(float4x4 transform)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7E")]
	[Address(RVA = "0x4B201F0", Offset = "0x4B201F0", VA = "0x4B201F0")]
	public static RigidTransform AxisAngle(float3 axis, float angle)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7F")]
	[Address(RVA = "0x4B20330", Offset = "0x4B20330", VA = "0x4B20330")]
	public static RigidTransform EulerXYZ(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E80")]
	[Address(RVA = "0x4B20460", Offset = "0x4B20460", VA = "0x4B20460")]
	public static RigidTransform EulerXZY(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E81")]
	[Address(RVA = "0x4B20580", Offset = "0x4B20580", VA = "0x4B20580")]
	public static RigidTransform EulerYXZ(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E82")]
	[Address(RVA = "0x4B206B0", Offset = "0x4B206B0", VA = "0x4B206B0")]
	public static RigidTransform EulerYZX(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E83")]
	[Address(RVA = "0x4B207D0", Offset = "0x4B207D0", VA = "0x4B207D0")]
	public static RigidTransform EulerZXY(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E84")]
	[Address(RVA = "0x4B20900", Offset = "0x4B20900", VA = "0x4B20900")]
	public static RigidTransform EulerZYX(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E85")]
	[Address(RVA = "0x4B20A30", Offset = "0x4B20A30", VA = "0x4B20A30")]
	public static RigidTransform EulerXYZ(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E86")]
	[Address(RVA = "0x4B20B70", Offset = "0x4B20B70", VA = "0x4B20B70")]
	public static RigidTransform EulerXZY(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E87")]
	[Address(RVA = "0x4B20CA0", Offset = "0x4B20CA0", VA = "0x4B20CA0")]
	public static RigidTransform EulerYXZ(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E88")]
	[Address(RVA = "0x4B20DE0", Offset = "0x4B20DE0", VA = "0x4B20DE0")]
	public static RigidTransform EulerYZX(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E89")]
	[Address(RVA = "0x4B20F10", Offset = "0x4B20F10", VA = "0x4B20F10")]
	public static RigidTransform EulerZXY(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8A")]
	[Address(RVA = "0x4B21050", Offset = "0x4B21050", VA = "0x4B21050")]
	public static RigidTransform EulerZYX(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8B")]
	[Address(RVA = "0x4B21190", Offset = "0x4B21190", VA = "0x4B21190")]
	public static RigidTransform Euler(float3 xyz, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8C")]
	[Address(RVA = "0x4B21800", Offset = "0x4B21800", VA = "0x4B21800")]
	public static RigidTransform Euler(float x, float y, float z, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8D")]
	[Address(RVA = "0x4B21840", Offset = "0x4B21840", VA = "0x4B21840")]
	public static RigidTransform RotateX(float angle)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8E")]
	[Address(RVA = "0x4B21970", Offset = "0x4B21970", VA = "0x4B21970")]
	public static RigidTransform RotateY(float angle)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8F")]
	[Address(RVA = "0x4B21AA0", Offset = "0x4B21AA0", VA = "0x4B21AA0")]
	public static RigidTransform RotateZ(float angle)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E90")]
	[Address(RVA = "0x4B21BD0", Offset = "0x4B21BD0", VA = "0x4B21BD0")]
	public static RigidTransform Translate(float3 vector)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E91")]
	[Address(RVA = "0x4B21C40", Offset = "0x4B21C40", VA = "0x4B21C40")]
	public bool Equals(RigidTransform x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E92")]
	[Address(RVA = "0x4B21CC0", Offset = "0x4B21CC0", VA = "0x4B21CC0", Slot = "0")]
	public override bool Equals(object x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E93")]
	[Address(RVA = "0x4B21D90", Offset = "0x4B21D90", VA = "0x4B21D90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E94")]
	[Address(RVA = "0x4B21E30", Offset = "0x4B21E30", VA = "0x4B21E30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E95")]
	[Address(RVA = "0x4B22100", Offset = "0x4B22100", VA = "0x4B22100")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
