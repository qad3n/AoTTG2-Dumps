using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Numerics;

[Token(Token = "0x2000534")]
[System.Runtime.CompilerServices.Intrinsic]
public struct Vector<T> : IEquatable<Vector<T>>, IFormattable where T : struct
{
	[Token(Token = "0x2000535")]
	private struct VectorSizeHelper
	{
		[Token(Token = "0x40015AF")]
		[FieldOffset(Offset = "0x0")]
		internal Vector<T> _placeholder;

		[Token(Token = "0x40015B0")]
		[FieldOffset(Offset = "0x0")]
		internal byte _byte;
	}

	[Token(Token = "0x40015AA")]
	[FieldOffset(Offset = "0x0")]
	private System.Numerics.Register register;

	[Token(Token = "0x40015AB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int s_count;

	[Token(Token = "0x40015AC")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector<T> s_zero;

	[Token(Token = "0x40015AD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector<T> s_one;

	[Token(Token = "0x40015AE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector<T> s_allOnes;

	[Token(Token = "0x170005C5")]
	public static int Count
	{
		[Token(Token = "0x60027CC")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170005C6")]
	public static Vector<T> Zero
	{
		[Token(Token = "0x60027CD")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return default(Vector<T>);
		}
	}

	[Token(Token = "0x170005C7")]
	public T this[int index]
	{
		[Token(Token = "0x60027D3")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x60027CE")]
	private static int InitializeCount()
	{
		return default(int);
	}

	[Token(Token = "0x60027CF")]
	[System.Runtime.CompilerServices.Intrinsic]
	public Vector(T value)
	{
	}

	[Token(Token = "0x60027D0")]
	internal unsafe Vector(void* dataPointer)
	{
	}

	[Token(Token = "0x60027D1")]
	internal unsafe Vector(void* dataPointer, int offset)
	{
	}

	[Token(Token = "0x60027D2")]
	private Vector(ref System.Numerics.Register existingRegister)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60027D4")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60027D5")]
	[System.Runtime.CompilerServices.Intrinsic]
	public bool Equals(Vector<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x60027D6")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60027D7")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60027D8")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60027D9")]
	public static bool operator ==(Vector<T> left, Vector<T> right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60027DA")]
	public static bool operator !=(Vector<T> left, Vector<T> right)
	{
		return default(bool);
	}

	[Token(Token = "0x60027DB")]
	[System.Runtime.CompilerServices.Intrinsic]
	[CLSCompliant(false)]
	public static explicit operator Vector<ulong>(Vector<T> value)
	{
		return default(Vector<ulong>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60027DC")]
	[System.Runtime.CompilerServices.Intrinsic]
	internal static Vector<T> Equals(Vector<T> left, Vector<T> right)
	{
		return default(Vector<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60027DD")]
	private static bool ScalarEquals(T left, T right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60027DE")]
	private static T GetOneValue()
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60027DF")]
	private static T GetAllBitsSetValue()
	{
		return (T)null;
	}
}
[Token(Token = "0x2000536")]
[System.Runtime.CompilerServices.Intrinsic]
public static class Vector
{
	[Token(Token = "0x170005C8")]
	public static bool IsHardwareAccelerated
	{
		[Token(Token = "0x60027E2")]
		[Address(RVA = "0x4F041E0", Offset = "0x4F041E0", VA = "0x4F041E0")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60027E1")]
	public static Vector<T> Equals<T>(Vector<T> left, Vector<T> right) where T : struct
	{
		return default(Vector<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60027E3")]
	[CLSCompliant(false)]
	public static Vector<ulong> AsVectorUInt64<T>(Vector<T> value) where T : struct
	{
		return default(Vector<ulong>);
	}
}
