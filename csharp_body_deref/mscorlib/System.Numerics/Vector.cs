// ==================== AoTTG2 cross-reference ====================
// Type: System.Numerics.Vector
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Numerics;

[Token(Token = "0x2000564")]
[System.Runtime.CompilerServices.Intrinsic]
public struct Vector<T> : IEquatable<Vector<T>>, IFormattable where T : struct
{
	[Token(Token = "0x2000565")]
	private struct VectorSizeHelper
	{
		[Token(Token = "0x40015AE")]
		[FieldOffset(Offset = "0x0")]
		internal Vector<T> _placeholder;

		[Token(Token = "0x40015AF")]
		[FieldOffset(Offset = "0x0")]
		internal byte _byte;
	}

	[Token(Token = "0x40015A9")]
	[FieldOffset(Offset = "0x0")]
	private System.Numerics.Register register;

	[Token(Token = "0x40015AA")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int s_count;

	[Token(Token = "0x40015AB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector<T> s_zero;

	[Token(Token = "0x40015AC")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector<T> s_one;

	[Token(Token = "0x40015AD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector<T> s_allOnes;

	[Token(Token = "0x170005C8")]
	public static int Count
	{
		[Token(Token = "0x600284F")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170005C9")]
	public static Vector<T> Zero
	{
		[Token(Token = "0x6002850")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return default(Vector<T>);
		}
	}

	[Token(Token = "0x170005CA")]
	public T this[int index]
	{
		[Token(Token = "0x6002856")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x6002851")]
	private static int InitializeCount()
	{
		return default(int);
	}

	[Token(Token = "0x6002852")]
	[System.Runtime.CompilerServices.Intrinsic]
	public Vector(T value)
	{
	}

	[Token(Token = "0x6002853")]
	internal unsafe Vector(void* dataPointer)
	{
	}

	[Token(Token = "0x6002854")]
	internal unsafe Vector(void* dataPointer, int offset)
	{
	}

	[Token(Token = "0x6002855")]
	private Vector(ref System.Numerics.Register existingRegister)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002857")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002858")]
	[System.Runtime.CompilerServices.Intrinsic]
	public bool Equals(Vector<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002859")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600285A")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600285B")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600285C")]
	public static bool operator ==(Vector<T> left, Vector<T> right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600285D")]
	public static bool operator !=(Vector<T> left, Vector<T> right)
	{
		return default(bool);
	}

	[Token(Token = "0x600285E")]
	[System.Runtime.CompilerServices.Intrinsic]
	[CLSCompliant(false)]
	public static explicit operator Vector<ulong>(Vector<T> value)
	{
		return default(Vector<ulong>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600285F")]
	[System.Runtime.CompilerServices.Intrinsic]
	internal static Vector<T> Equals(Vector<T> left, Vector<T> right)
	{
		return default(Vector<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002860")]
	private static bool ScalarEquals(T left, T right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002861")]
	private static T GetOneValue()
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002862")]
	private static T GetAllBitsSetValue()
	{
		return (T)null;
	}
}
[Token(Token = "0x2000566")]
[System.Runtime.CompilerServices.Intrinsic]
public static class Vector
{
	[Token(Token = "0x170005CB")]
	public static bool IsHardwareAccelerated
	{
		[Token(Token = "0x6002865")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002864")]
	public static Vector<T> Equals<T>(Vector<T> left, Vector<T> right) where T : struct
	{
		return default(Vector<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002866")]
	[CLSCompliant(false)]
	public static Vector<ulong> AsVectorUInt64<T>(Vector<T> value) where T : struct
	{
		return default(Vector<ulong>);
	}
}
