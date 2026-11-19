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
	[Address(RVA = "0x6491FD0", Offset = "0x6490FD0", VA = "0x6491FD0")]
	public static implicit operator Quaternion(quaternion q)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6001E62")]
	[Address(RVA = "0x6491FE0", Offset = "0x6490FE0", VA = "0x6491FE0")]
	public static implicit operator quaternion(Quaternion q)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E63")]
	[Address(RVA = "0x6491FF0", Offset = "0x6490FF0", VA = "0x6491FF0")]
	public quaternion(float x, float y, float z, float w)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E64")]
	[Address(RVA = "0x6492010", Offset = "0x6491010", VA = "0x6492010")]
	public quaternion(float4 value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E65")]
	[Address(RVA = "0x6492020", Offset = "0x6491020", VA = "0x6492020")]
	public static implicit operator quaternion(float4 v)
	{
		return default(quaternion);
	}

	[Token(Token = "0x6001E66")]
	[Address(RVA = "0x6492030", Offset = "0x6491030", VA = "0x6492030")]
	public quaternion(float3x3 m)
	{
	}

	[Token(Token = "0x6001E67")]
	[Address(RVA = "0x6492250", Offset = "0x6491250", VA = "0x6492250")]
	public quaternion(float4x4 m)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E68")]
	[Address(RVA = "0x6492470", Offset = "0x6491470", VA = "0x6492470")]
	public static quaternion AxisAngle(float3 axis, float angle)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E69")]
	[Address(RVA = "0x6492580", Offset = "0x6491580", VA = "0x6492580")]
	public static quaternion EulerXYZ(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6A")]
	[Address(RVA = "0x6492650", Offset = "0x6491650", VA = "0x6492650")]
	public static quaternion EulerXZY(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6B")]
	[Address(RVA = "0x6492720", Offset = "0x6491720", VA = "0x6492720")]
	public static quaternion EulerYXZ(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6C")]
	[Address(RVA = "0x64927F0", Offset = "0x64917F0", VA = "0x64927F0")]
	public static quaternion EulerYZX(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6D")]
	[Address(RVA = "0x64928C0", Offset = "0x64918C0", VA = "0x64928C0")]
	public static quaternion EulerZXY(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6E")]
	[Address(RVA = "0x6492980", Offset = "0x6491980", VA = "0x6492980")]
	public static quaternion EulerZYX(float3 xyz)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E6F")]
	[Address(RVA = "0x6492A50", Offset = "0x6491A50", VA = "0x6492A50")]
	public static quaternion EulerXYZ(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E70")]
	[Address(RVA = "0x6492B30", Offset = "0x6491B30", VA = "0x6492B30")]
	public static quaternion EulerXZY(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E71")]
	[Address(RVA = "0x6492C00", Offset = "0x6491C00", VA = "0x6492C00")]
	public static quaternion EulerYXZ(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E72")]
	[Address(RVA = "0x6492CD0", Offset = "0x6491CD0", VA = "0x6492CD0")]
	public static quaternion EulerYZX(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E73")]
	[Address(RVA = "0x6492DA0", Offset = "0x6491DA0", VA = "0x6492DA0")]
	public static quaternion EulerZXY(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E74")]
	[Address(RVA = "0x6492E60", Offset = "0x6491E60", VA = "0x6492E60")]
	public static quaternion EulerZYX(float x, float y, float z)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E75")]
	[Address(RVA = "0x6492F30", Offset = "0x6491F30", VA = "0x6492F30")]
	public static quaternion Euler(float3 xyz, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E76")]
	[Address(RVA = "0x64934C0", Offset = "0x64924C0", VA = "0x64934C0")]
	public static quaternion Euler(float x, float y, float z, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E77")]
	[Address(RVA = "0x64934D0", Offset = "0x64924D0", VA = "0x64934D0")]
	public static quaternion RotateX(float angle)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E78")]
	[Address(RVA = "0x64935C0", Offset = "0x64925C0", VA = "0x64935C0")]
	public static quaternion RotateY(float angle)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E79")]
	[Address(RVA = "0x64936B0", Offset = "0x64926B0", VA = "0x64936B0")]
	public static quaternion RotateZ(float angle)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7A")]
	[Address(RVA = "0x6493780", Offset = "0x6492780", VA = "0x6493780")]
	public static quaternion LookRotation(float3 forward, float3 up)
	{
		return default(quaternion);
	}

	[Token(Token = "0x6001E7B")]
	[Address(RVA = "0x6493AC0", Offset = "0x6492AC0", VA = "0x6493AC0")]
	public static quaternion LookRotationSafe(float3 forward, float3 up)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7C")]
	[Address(RVA = "0x6494130", Offset = "0x6493130", VA = "0x6494130", Slot = "4")]
	public bool Equals(quaternion x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7D")]
	[Address(RVA = "0x6494170", Offset = "0x6493170", VA = "0x6494170", Slot = "0")]
	public override bool Equals(object x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7E")]
	[Address(RVA = "0x6494210", Offset = "0x6493210", VA = "0x6494210", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7F")]
	[Address(RVA = "0x6494260", Offset = "0x6493260", VA = "0x6494260", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E80")]
	[Address(RVA = "0x6494450", Offset = "0x6493450", VA = "0x6494450", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
