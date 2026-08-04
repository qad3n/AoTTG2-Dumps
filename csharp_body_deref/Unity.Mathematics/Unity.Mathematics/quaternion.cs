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
[Token(Token = "0x200004D")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct quaternion : IEquatable<quaternion>, IFormattable
{
	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x0")]
	public float4 value;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly quaternion identity;

	[Token(Token = "0x6001DEE")]
	[Address(RVA = "0x4AFF450", Offset = "0x4AFF450", VA = "0x4AFF450")]
	public static implicit operator Quaternion(quaternion q)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6001DEF")]
	[Address(RVA = "0x4AFF460", Offset = "0x4AFF460", VA = "0x4AFF460")]
	public static implicit operator quaternion(Quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF0")]
	[Address(RVA = "0x4AFF470", Offset = "0x4AFF470", VA = "0x4AFF470")]
	public quaternion(float x, float y, float z, float w)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF1")]
	[Address(RVA = "0x4AFF490", Offset = "0x4AFF490", VA = "0x4AFF490")]
	public quaternion(float4 value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF2")]
	[Address(RVA = "0x4AFF4A0", Offset = "0x4AFF4A0", VA = "0x4AFF4A0")]
	public static implicit operator quaternion(float4 v)
	{
		return default(quaternion);
	}

	[Token(Token = "0x6001DF3")]
	[Address(RVA = "0x4AFF4B0", Offset = "0x4AFF4B0", VA = "0x4AFF4B0")]
	public quaternion(float3x3 m)
	{
	}

	[Token(Token = "0x6001DF4")]
	[Address(RVA = "0x4AFF730", Offset = "0x4AFF730", VA = "0x4AFF730")]
	public quaternion(float4x4 m)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF5")]
	[Address(RVA = "0x4AFF9B0", Offset = "0x4AFF9B0", VA = "0x4AFF9B0")]
	public static quaternion AxisAngle(float3 axis, float angle)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF6")]
	[Address(RVA = "0x4AFFAA0", Offset = "0x4AFFAA0", VA = "0x4AFFAA0")]
	public static quaternion EulerXYZ(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF7")]
	[Address(RVA = "0x4AFFB80", Offset = "0x4AFFB80", VA = "0x4AFFB80")]
	public static quaternion EulerXZY(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF8")]
	[Address(RVA = "0x4AFFC50", Offset = "0x4AFFC50", VA = "0x4AFFC50")]
	public static quaternion EulerYXZ(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF9")]
	[Address(RVA = "0x4AFFD30", Offset = "0x4AFFD30", VA = "0x4AFFD30")]
	public static quaternion EulerYZX(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFA")]
	[Address(RVA = "0x4AFFDF0", Offset = "0x4AFFDF0", VA = "0x4AFFDF0")]
	public static quaternion EulerZXY(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFB")]
	[Address(RVA = "0x4AFFED0", Offset = "0x4AFFED0", VA = "0x4AFFED0")]
	public static quaternion EulerZYX(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFC")]
	[Address(RVA = "0x4AFFFA0", Offset = "0x4AFFFA0", VA = "0x4AFFFA0")]
	public static quaternion EulerXYZ(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFD")]
	[Address(RVA = "0x4B00080", Offset = "0x4B00080", VA = "0x4B00080")]
	public static quaternion EulerXZY(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFE")]
	[Address(RVA = "0x4B00150", Offset = "0x4B00150", VA = "0x4B00150")]
	public static quaternion EulerYXZ(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFF")]
	[Address(RVA = "0x4B00230", Offset = "0x4B00230", VA = "0x4B00230")]
	public static quaternion EulerYZX(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E00")]
	[Address(RVA = "0x4B00300", Offset = "0x4B00300", VA = "0x4B00300")]
	public static quaternion EulerZXY(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E01")]
	[Address(RVA = "0x4B003E0", Offset = "0x4B003E0", VA = "0x4B003E0")]
	public static quaternion EulerZYX(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E02")]
	[Address(RVA = "0x4B004C0", Offset = "0x4B004C0", VA = "0x4B004C0")]
	public static quaternion Euler(float3 xyz, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E03")]
	[Address(RVA = "0x4B00A30", Offset = "0x4B00A30", VA = "0x4B00A30")]
	public static quaternion Euler(float x, float y, float z, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E04")]
	[Address(RVA = "0x4B00A40", Offset = "0x4B00A40", VA = "0x4B00A40")]
	public static quaternion RotateX(float angle)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E05")]
	[Address(RVA = "0x4B00B20", Offset = "0x4B00B20", VA = "0x4B00B20")]
	public static quaternion RotateY(float angle)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E06")]
	[Address(RVA = "0x4B00BF0", Offset = "0x4B00BF0", VA = "0x4B00BF0")]
	public static quaternion RotateZ(float angle)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E07")]
	[Address(RVA = "0x4B00CC0", Offset = "0x4B00CC0", VA = "0x4B00CC0")]
	public static quaternion LookRotation(float3 forward, float3 up)
	{
		return default(quaternion);
	}

	[Token(Token = "0x6001E08")]
	[Address(RVA = "0x4B00ED0", Offset = "0x4B00ED0", VA = "0x4B00ED0")]
	public static quaternion LookRotationSafe(float3 forward, float3 up)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E09")]
	[Address(RVA = "0x4B01410", Offset = "0x4B01410", VA = "0x4B01410", Slot = "4")]
	public bool Equals(quaternion x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0A")]
	[Address(RVA = "0x4B01450", Offset = "0x4B01450", VA = "0x4B01450", Slot = "0")]
	public override bool Equals(object x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0B")]
	[Address(RVA = "0x4B014F0", Offset = "0x4B014F0", VA = "0x4B014F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0C")]
	[Address(RVA = "0x4B01550", Offset = "0x4B01550", VA = "0x4B01550", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0D")]
	[Address(RVA = "0x4B01720", Offset = "0x4B01720", VA = "0x4B01720", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
