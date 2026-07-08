using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000050")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct quaternion : IEquatable<quaternion>, IFormattable
{
	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x0")]
	public float4 value;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly quaternion identity;

	[Token(Token = "0x6001E16")]
	[Address(RVA = "0x47FB7A0", Offset = "0x47FB7A0", VA = "0x47FB7A0")]
	public static implicit operator Quaternion(quaternion q)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6001E17")]
	[Address(RVA = "0x47FB7B0", Offset = "0x47FB7B0", VA = "0x47FB7B0")]
	public static implicit operator quaternion(Quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E18")]
	[Address(RVA = "0x47FB7C0", Offset = "0x47FB7C0", VA = "0x47FB7C0")]
	public quaternion(float x, float y, float z, float w)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E19")]
	[Address(RVA = "0x47FB7E0", Offset = "0x47FB7E0", VA = "0x47FB7E0")]
	public quaternion(float4 value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E1A")]
	[Address(RVA = "0x47FB7F0", Offset = "0x47FB7F0", VA = "0x47FB7F0")]
	public static implicit operator quaternion(float4 v)
	{
		return default(quaternion);
	}

	[Token(Token = "0x6001E1B")]
	[Address(RVA = "0x47FB800", Offset = "0x47FB800", VA = "0x47FB800")]
	public quaternion(float3x3 m)
	{
	}

	[Token(Token = "0x6001E1C")]
	[Address(RVA = "0x47FBA80", Offset = "0x47FBA80", VA = "0x47FBA80")]
	public quaternion(float4x4 m)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E1D")]
	[Address(RVA = "0x47FBD00", Offset = "0x47FBD00", VA = "0x47FBD00")]
	public static quaternion AxisAngle(float3 axis, float angle)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E1E")]
	[Address(RVA = "0x47FBDF0", Offset = "0x47FBDF0", VA = "0x47FBDF0")]
	public static quaternion EulerXYZ(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E1F")]
	[Address(RVA = "0x47FBED0", Offset = "0x47FBED0", VA = "0x47FBED0")]
	public static quaternion EulerXZY(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E20")]
	[Address(RVA = "0x47FBFA0", Offset = "0x47FBFA0", VA = "0x47FBFA0")]
	public static quaternion EulerYXZ(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E21")]
	[Address(RVA = "0x47FC080", Offset = "0x47FC080", VA = "0x47FC080")]
	public static quaternion EulerYZX(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E22")]
	[Address(RVA = "0x47FC140", Offset = "0x47FC140", VA = "0x47FC140")]
	public static quaternion EulerZXY(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E23")]
	[Address(RVA = "0x47FC220", Offset = "0x47FC220", VA = "0x47FC220")]
	public static quaternion EulerZYX(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E24")]
	[Address(RVA = "0x47FC2F0", Offset = "0x47FC2F0", VA = "0x47FC2F0")]
	public static quaternion EulerXYZ(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E25")]
	[Address(RVA = "0x47FC3D0", Offset = "0x47FC3D0", VA = "0x47FC3D0")]
	public static quaternion EulerXZY(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E26")]
	[Address(RVA = "0x47FC4A0", Offset = "0x47FC4A0", VA = "0x47FC4A0")]
	public static quaternion EulerYXZ(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E27")]
	[Address(RVA = "0x47FC580", Offset = "0x47FC580", VA = "0x47FC580")]
	public static quaternion EulerYZX(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E28")]
	[Address(RVA = "0x47FC650", Offset = "0x47FC650", VA = "0x47FC650")]
	public static quaternion EulerZXY(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E29")]
	[Address(RVA = "0x47FC730", Offset = "0x47FC730", VA = "0x47FC730")]
	public static quaternion EulerZYX(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2A")]
	[Address(RVA = "0x47FC810", Offset = "0x47FC810", VA = "0x47FC810")]
	public static quaternion Euler(float3 xyz, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2B")]
	[Address(RVA = "0x47FCD80", Offset = "0x47FCD80", VA = "0x47FCD80")]
	public static quaternion Euler(float x, float y, float z, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2C")]
	[Address(RVA = "0x47FCD90", Offset = "0x47FCD90", VA = "0x47FCD90")]
	public static quaternion RotateX(float angle)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2D")]
	[Address(RVA = "0x47FCE70", Offset = "0x47FCE70", VA = "0x47FCE70")]
	public static quaternion RotateY(float angle)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2E")]
	[Address(RVA = "0x47FCF40", Offset = "0x47FCF40", VA = "0x47FCF40")]
	public static quaternion RotateZ(float angle)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2F")]
	[Address(RVA = "0x47FD010", Offset = "0x47FD010", VA = "0x47FD010")]
	public static quaternion LookRotation(float3 forward, float3 up)
	{
		return default(quaternion);
	}

	[Token(Token = "0x6001E30")]
	[Address(RVA = "0x47FD220", Offset = "0x47FD220", VA = "0x47FD220")]
	public static quaternion LookRotationSafe(float3 forward, float3 up)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E31")]
	[Address(RVA = "0x47FD760", Offset = "0x47FD760", VA = "0x47FD760", Slot = "4")]
	public bool Equals(quaternion x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E32")]
	[Address(RVA = "0x47FD7A0", Offset = "0x47FD7A0", VA = "0x47FD7A0", Slot = "0")]
	public override bool Equals(object x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E33")]
	[Address(RVA = "0x47FD840", Offset = "0x47FD840", VA = "0x47FD840", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E34")]
	[Address(RVA = "0x47FD8A0", Offset = "0x47FD8A0", VA = "0x47FD8A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E35")]
	[Address(RVA = "0x47FDA70", Offset = "0x47FDA70", VA = "0x47FDA70", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
