// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Vector4
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200014B")]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.NativeClass("Vector4f")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/Vector4.h")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
public struct Vector4 : IEquatable<Vector4>, IFormattable
{
	[Token(Token = "0x4000579")]
	public const float kEpsilon = 1E-05f;

	[Token(Token = "0x400057A")]
	[FieldOffset(Offset = "0x0")]
	public float x;

	[Token(Token = "0x400057B")]
	[FieldOffset(Offset = "0x4")]
	public float y;

	[Token(Token = "0x400057C")]
	[FieldOffset(Offset = "0x8")]
	public float z;

	[Token(Token = "0x400057D")]
	[FieldOffset(Offset = "0xC")]
	public float w;

	[Token(Token = "0x400057E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector4 zeroVector;

	[Token(Token = "0x400057F")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector4 oneVector;

	[Token(Token = "0x4000580")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Vector4 positiveInfinityVector;

	[Token(Token = "0x4000581")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Vector4 negativeInfinityVector;

	[Token(Token = "0x17000207")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x2BEC610", Offset = "0x2BEAC10", VA = "0x182BEC610")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x2AECCA0", Offset = "0x2AEB2A0", VA = "0x182AECCA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000208")]
	public readonly Vector4 normalized
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BCD")]
		[Address(RVA = "0x2F2D380", Offset = "0x2F2B980", VA = "0x182F2D380")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x17000209")]
	public readonly float magnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BCF")]
		[Address(RVA = "0x2F2D2D0", Offset = "0x2F2B8D0", VA = "0x182F2D2D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700020A")]
	public readonly float sqrMagnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BD0")]
		[Address(RVA = "0x2F2D480", Offset = "0x2F2BA80", VA = "0x182F2D480")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700020B")]
	public static Vector4 zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BD1")]
		[Address(RVA = "0x2F2D4B0", Offset = "0x2F2BAB0", VA = "0x182F2D4B0")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x1700020C")]
	public static Vector4 one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BD2")]
		[Address(RVA = "0x2F2D430", Offset = "0x2F2BA30", VA = "0x182F2D430")]
		get
		{
			return default(Vector4);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x298BAD0", Offset = "0x298A0D0", VA = "0x18298BAD0")]
	public Vector4(float x, float y, float z, float w)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x2F2D2B0", Offset = "0x2F2B8B0", VA = "0x182F2D2B0")]
	public Vector4(float x, float y, float z)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x2F2D2A0", Offset = "0x2F2B8A0", VA = "0x182F2D2A0")]
	public Vector4(float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x298BAD0", Offset = "0x298A0D0", VA = "0x18298BAD0")]
	public void Set(float newX, float newY, float newZ, float newW)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x2F020D0", Offset = "0x2F006D0", VA = "0x182F020D0")]
	public static Vector4 Lerp(Vector4 a, Vector4 b, float t)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x2F2CF40", Offset = "0x2F2B540", VA = "0x182F2CF40")]
	public void Scale(Vector4 scale)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x2F01E00", Offset = "0x2F00400", VA = "0x182F01E00", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x2F2CDE0", Offset = "0x2F2B3E0", VA = "0x182F2CDE0", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x25B49C0", Offset = "0x25B2FC0", VA = "0x1825B49C0", Slot = "4")]
	public readonly bool Equals(Vector4 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x25B49C0", Offset = "0x25B2FC0", VA = "0x1825B49C0")]
	public readonly bool Equals(in Vector4 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x2F2CE90", Offset = "0x2F2B490", VA = "0x182F2CE90")]
	public static Vector4 Normalize(in Vector4 a)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x29CA660", Offset = "0x29C8C60", VA = "0x1829CA660")]
	public static float Dot(in Vector4 a, in Vector4 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x2CF45C0", Offset = "0x2CF2BC0", VA = "0x182CF45C0")]
	public static Vector4 operator +(Vector4 a, Vector4 b)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x2F02970", Offset = "0x2F00F70", VA = "0x182F02970")]
	public static Vector4 operator -(Vector4 a, Vector4 b)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x2A3A8C0", Offset = "0x2A38EC0", VA = "0x182A3A8C0")]
	public static Vector4 operator -(Vector4 a)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x2F02900", Offset = "0x2F00F00", VA = "0x182F02900")]
	public static Vector4 operator *(Vector4 a, float d)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x2F2D530", Offset = "0x2F2BB30", VA = "0x182F2D530")]
	public static Vector4 operator *(float d, Vector4 a)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x2A77080", Offset = "0x2A75680", VA = "0x182A77080")]
	public static Vector4 operator /(Vector4 a, float d)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x2F02840", Offset = "0x2F00E40", VA = "0x182F02840")]
	public static bool operator ==(Vector4 lhs, Vector4 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x2F028A0", Offset = "0x2F00EA0", VA = "0x182F028A0")]
	public static bool operator !=(Vector4 lhs, Vector4 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x2F2D500", Offset = "0x2F2BB00", VA = "0x182F2D500")]
	public static implicit operator Vector4(Vector3 v)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x29E0200", Offset = "0x29DE800", VA = "0x1829E0200")]
	public static implicit operator Vector3(Vector4 v)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x2F2D520", Offset = "0x2F2BB20", VA = "0x182F2D520")]
	public static implicit operator Vector4(Vector2 v)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x2ED21F0", Offset = "0x2ED07F0", VA = "0x182ED21F0")]
	public static implicit operator Vector2(Vector4 v)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x2F2D1D0", Offset = "0x2F2B7D0", VA = "0x182F2D1D0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x2F2CF50", Offset = "0x2F2B550", VA = "0x182F2CF50", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
