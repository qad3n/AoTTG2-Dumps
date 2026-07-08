using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000121")]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.Scripting.UsedByNativeCode]
[DefaultMember("Item")]
public struct Vector3Int : IEquatable<Vector3Int>, IFormattable
{
	[Token(Token = "0x4000506")]
	[FieldOffset(Offset = "0x0")]
	private int m_X;

	[Token(Token = "0x4000507")]
	[FieldOffset(Offset = "0x4")]
	private int m_Y;

	[Token(Token = "0x4000508")]
	[FieldOffset(Offset = "0x8")]
	private int m_Z;

	[Token(Token = "0x4000509")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector3Int s_Zero;

	[Token(Token = "0x400050A")]
	[FieldOffset(Offset = "0xC")]
	private static readonly Vector3Int s_One;

	[Token(Token = "0x400050B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Vector3Int s_Up;

	[Token(Token = "0x400050C")]
	[FieldOffset(Offset = "0x24")]
	private static readonly Vector3Int s_Down;

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Vector3Int s_Left;

	[Token(Token = "0x400050E")]
	[FieldOffset(Offset = "0x3C")]
	private static readonly Vector3Int s_Right;

	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Vector3Int s_Forward;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x54")]
	private static readonly Vector3Int s_Back;

	[Token(Token = "0x1700019D")]
	public int x
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008C6")]
		[Address(RVA = "0x4AC8520", Offset = "0x4AC8520", VA = "0x4AC8520")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008C7")]
		[Address(RVA = "0x4AC8530", Offset = "0x4AC8530", VA = "0x4AC8530")]
		set
		{
		}
	}

	[Token(Token = "0x1700019E")]
	public int y
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008C8")]
		[Address(RVA = "0x4AC8540", Offset = "0x4AC8540", VA = "0x4AC8540")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008C9")]
		[Address(RVA = "0x4AC8550", Offset = "0x4AC8550", VA = "0x4AC8550")]
		set
		{
		}
	}

	[Token(Token = "0x1700019F")]
	public int z
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008CA")]
		[Address(RVA = "0x4AC8560", Offset = "0x4AC8560", VA = "0x4AC8560")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008CB")]
		[Address(RVA = "0x4AC8570", Offset = "0x4AC8570", VA = "0x4AC8570")]
		set
		{
		}
	}

	[Token(Token = "0x170001A0")]
	public static Vector3Int zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008DB")]
		[Address(RVA = "0x4AC8A10", Offset = "0x4AC8A10", VA = "0x4AC8A10")]
		get
		{
			return default(Vector3Int);
		}
	}

	[Token(Token = "0x170001A1")]
	public static Vector3Int one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008DC")]
		[Address(RVA = "0x4AC8A50", Offset = "0x4AC8A50", VA = "0x4AC8A50")]
		get
		{
			return default(Vector3Int);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x4AC8580", Offset = "0x4AC8580", VA = "0x4AC8580")]
	public Vector3Int(int x, int y, int z)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x4AC8590", Offset = "0x4AC8590", VA = "0x4AC8590")]
	public static Vector3Int Min(Vector3Int lhs, Vector3Int rhs)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x4AC85C0", Offset = "0x4AC85C0", VA = "0x4AC85C0")]
	public static Vector3Int Max(Vector3Int lhs, Vector3Int rhs)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x4AC85F0", Offset = "0x4AC85F0", VA = "0x4AC85F0")]
	public static implicit operator Vector3(Vector3Int v)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x4AC8610", Offset = "0x4AC8610", VA = "0x4AC8610")]
	public static Vector3Int operator +(Vector3Int a, Vector3Int b)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x4AC8640", Offset = "0x4AC8640", VA = "0x4AC8640")]
	public static Vector3Int operator -(Vector3Int a, Vector3Int b)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x4AC8670", Offset = "0x4AC8670", VA = "0x4AC8670")]
	public static Vector3Int operator *(Vector3Int a, int b)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x4AC8690", Offset = "0x4AC8690", VA = "0x4AC8690")]
	public static Vector3Int operator /(Vector3Int a, int b)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x4AC86C0", Offset = "0x4AC86C0", VA = "0x4AC86C0")]
	public static bool operator ==(Vector3Int lhs, Vector3Int rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x4AC86E0", Offset = "0x4AC86E0", VA = "0x4AC86E0")]
	public static bool operator !=(Vector3Int lhs, Vector3Int rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x4AC8700", Offset = "0x4AC8700", VA = "0x4AC8700", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x4AC8780", Offset = "0x4AC8780", VA = "0x4AC8780", Slot = "4")]
	public bool Equals(Vector3Int other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x4AC87A0", Offset = "0x4AC87A0", VA = "0x4AC87A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x4AC8810", Offset = "0x4AC8810", VA = "0x4AC8810", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x4AC8820", Offset = "0x4AC8820", VA = "0x4AC8820", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
