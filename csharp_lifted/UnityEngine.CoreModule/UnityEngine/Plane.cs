// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Plane
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000BB")]
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

	[Token(Token = "0x1700008D")]
	public readonly Vector3 normal
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x68CA870", Offset = "0x68C9870", VA = "0x68CA870")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700008E")]
	public readonly float distance
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x68CA880", Offset = "0x68C9880", VA = "0x68CA880")]
		get
		{
			return default(float);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x68CA890", Offset = "0x68C9890", VA = "0x68CA890")]
	public Plane(Vector3 inNormal, Vector3 inPoint)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x68CA9E0", Offset = "0x68C99E0", VA = "0x68CA9E0")]
	public Plane(Vector3 inNormal, float d)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x68CAAF0", Offset = "0x68C9AF0", VA = "0x68CAAF0")]
	public readonly float GetDistanceToPoint(Vector3 point)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x68CAB20", Offset = "0x68C9B20", VA = "0x68CAB20")]
	public readonly bool Raycast(Ray ray, out float enter)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x68CAC30", Offset = "0x68C9C30", VA = "0x68CAC30")]
	public static bool operator ==(Plane lhs, Plane rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x68CAC70", Offset = "0x68C9C70", VA = "0x68CAC70", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x68CAD20", Offset = "0x68C9D20", VA = "0x68CAD20", Slot = "4")]
	public readonly bool Equals(Plane other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x68CAD70", Offset = "0x68C9D70", VA = "0x68CAD70")]
	public readonly bool Equals(in Plane other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x68CADC0", Offset = "0x68C9DC0", VA = "0x68CADC0", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x68CAE20", Offset = "0x68C9E20", VA = "0x68CAE20", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x68CAE30", Offset = "0x68C9E30", VA = "0x68CAE30", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
