// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.quaternion
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200004E")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct quaternion : IEquatable<quaternion>, IFormattable
{
	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0x0")]
	public float4 value;

	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x0")]
	public static readonly quaternion identity;

	[Token(Token = "0x6001E61")]
	[Address(RVA = "0x29E19B0", Offset = "0x29DFFB0", VA = "0x1829E19B0")]
	public static implicit operator Quaternion(quaternion q)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6001E62")]
	[Address(RVA = "0x29E19B0", Offset = "0x29DFFB0", VA = "0x1829E19B0")]
	public static implicit operator quaternion(Quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E63")]
	[Address(RVA = "0x298BAD0", Offset = "0x298A0D0", VA = "0x18298BAD0")]
	public quaternion(float x, float y, float z, float w)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E64")]
	[Address(RVA = "0xBDB210", Offset = "0xBD9810", VA = "0x180BDB210")]
	public quaternion(float4 value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E65")]
	[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
	public static implicit operator quaternion(float4 v)
	{
		return default(quaternion);
	}

	[Token(Token = "0x6001E66")]
	[Address(RVA = "0x2AB4600", Offset = "0x2AB2C00", VA = "0x182AB4600")]
	public quaternion(float3x3 m)
	{
	}

	[Token(Token = "0x6001E67")]
	[Address(RVA = "0x2AB4880", Offset = "0x2AB2E80", VA = "0x182AB4880")]
	public quaternion(float4x4 m)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E68")]
	[Address(RVA = "0x2AB3380", Offset = "0x2AB1980", VA = "0x182AB3380")]
	public static quaternion AxisAngle(float3 axis, float angle)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E69")]
	[Address(RVA = "0x2AA9830", Offset = "0x2AA7E30", VA = "0x182AA9830")]
	public static quaternion EulerXYZ(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6A")]
	[Address(RVA = "0x2AA99A0", Offset = "0x2AA7FA0", VA = "0x182AA99A0")]
	public static quaternion EulerXZY(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6B")]
	[Address(RVA = "0x2AA9B10", Offset = "0x2AA8110", VA = "0x182AA9B10")]
	public static quaternion EulerYXZ(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6C")]
	[Address(RVA = "0x2AA9C80", Offset = "0x2AA8280", VA = "0x182AA9C80")]
	public static quaternion EulerYZX(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6D")]
	[Address(RVA = "0x2AA9DF0", Offset = "0x2AA83F0", VA = "0x182AA9DF0")]
	public static quaternion EulerZXY(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6E")]
	[Address(RVA = "0x2AA9F60", Offset = "0x2AA8560", VA = "0x182AA9F60")]
	public static quaternion EulerZYX(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6F")]
	[Address(RVA = "0x2AB3520", Offset = "0x2AB1B20", VA = "0x182AB3520")]
	public static quaternion EulerXYZ(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E70")]
	[Address(RVA = "0x2AB3560", Offset = "0x2AB1B60", VA = "0x182AB3560")]
	public static quaternion EulerXZY(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E71")]
	[Address(RVA = "0x2AB35A0", Offset = "0x2AB1BA0", VA = "0x182AB35A0")]
	public static quaternion EulerYXZ(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E72")]
	[Address(RVA = "0x2AB35E0", Offset = "0x2AB1BE0", VA = "0x182AB35E0")]
	public static quaternion EulerYZX(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E73")]
	[Address(RVA = "0x2AB3620", Offset = "0x2AB1C20", VA = "0x182AB3620")]
	public static quaternion EulerZXY(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E74")]
	[Address(RVA = "0x2AB3660", Offset = "0x2AB1C60", VA = "0x182AB3660")]
	public static quaternion EulerZYX(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E75")]
	[Address(RVA = "0x2AB3840", Offset = "0x2AB1E40", VA = "0x182AB3840")]
	public static quaternion Euler(float3 xyz, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E76")]
	[Address(RVA = "0x2AB36A0", Offset = "0x2AB1CA0", VA = "0x182AB36A0")]
	public static quaternion Euler(float x, float y, float z, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E77")]
	[Address(RVA = "0x2AB3F40", Offset = "0x2AB2540", VA = "0x182AB3F40")]
	public static quaternion RotateX(float angle)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E78")]
	[Address(RVA = "0x2AB4010", Offset = "0x2AB2610", VA = "0x182AB4010")]
	public static quaternion RotateY(float angle)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E79")]
	[Address(RVA = "0x2AB40E0", Offset = "0x2AB26E0", VA = "0x182AB40E0")]
	public static quaternion RotateZ(float angle)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7A")]
	[Address(RVA = "0x2AB3D90", Offset = "0x2AB2390", VA = "0x182AB3D90")]
	public static quaternion LookRotation(float3 forward, float3 up)
	{
		return default(quaternion);
	}

	[Token(Token = "0x6001E7B")]
	[Address(RVA = "0x2AB39F0", Offset = "0x2AB1FF0", VA = "0x182AB39F0")]
	public static quaternion LookRotationSafe(float3 forward, float3 up)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7C")]
	[Address(RVA = "0x25B49C0", Offset = "0x25B2FC0", VA = "0x1825B49C0", Slot = "4")]
	public bool Equals(quaternion x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7D")]
	[Address(RVA = "0x2AB3470", Offset = "0x2AB1A70", VA = "0x182AB3470", Slot = "0")]
	public override bool Equals(object x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7E")]
	[Address(RVA = "0x29E5680", Offset = "0x29E3C80", VA = "0x1829E5680", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7F")]
	[Address(RVA = "0x2AB41B0", Offset = "0x2AB27B0", VA = "0x182AB41B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E80")]
	[Address(RVA = "0x2AB43C0", Offset = "0x2AB29C0", VA = "0x182AB43C0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
