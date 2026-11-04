// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Plane
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000B9")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct Plane : IEquatable<Plane>, IFormattable
{
	[Token(Token = "0x40001F2")]
	internal const int size = 16;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x0")]
	private Vector3 m_Normal;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0xC")]
	private float m_Distance;

	[Token(Token = "0x1700008C")]
	public readonly Vector3 normal
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x180F7A0", Offset = "0x180DDA0", VA = "0x18180F7A0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700008D")]
	public readonly float distance
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600039E")]
		[Address(RVA = "0x562B80", Offset = "0x561180", VA = "0x180562B80")]
		get
		{
			return default(float);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039F")]
	[Address(RVA = "0x2ECDD60", Offset = "0x2ECC360", VA = "0x182ECDD60")]
	public Plane(Vector3 inNormal, Vector3 inPoint)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x2ECDDD0", Offset = "0x2ECC3D0", VA = "0x182ECDDD0")]
	public Plane(Vector3 inNormal, float d)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x2ECDBC0", Offset = "0x2ECC1C0", VA = "0x182ECDBC0")]
	public readonly float GetDistanceToPoint(Vector3 point)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x20B5830", Offset = "0x20B3E30", VA = "0x1820B5830")]
	public readonly bool Raycast(Ray ray, out float enter)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x2ECDB70", Offset = "0x2ECC170", VA = "0x182ECDB70")]
	public static bool operator ==(Plane lhs, Plane rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x2ECDA90", Offset = "0x2ECC090", VA = "0x182ECDA90", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x2ECDB70", Offset = "0x2ECC170", VA = "0x182ECDB70", Slot = "4")]
	public readonly bool Equals(Plane other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x2ECDB70", Offset = "0x2ECC170", VA = "0x182ECDB70")]
	public readonly bool Equals(in Plane other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x2ECDBF0", Offset = "0x2ECC1F0", VA = "0x182ECDBF0", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x2ECDD50", Offset = "0x2ECC350", VA = "0x182ECDD50", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x2ECDC50", Offset = "0x2ECC250", VA = "0x182ECDC50", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
