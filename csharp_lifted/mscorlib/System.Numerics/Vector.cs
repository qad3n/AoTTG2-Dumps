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

[Token(Token = "0x200053D")]
[System.Runtime.CompilerServices.Intrinsic]
public struct Vector<T> : IEquatable<Vector<T>>, IFormattable where T : struct
{
	[Token(Token = "0x200053E")]
	private struct VectorSizeHelper
	{
		[Token(Token = "0x400150E")]
		[FieldOffset(Offset = "0x0")]
		internal Vector<T> _placeholder;

		[Token(Token = "0x400150F")]
		[FieldOffset(Offset = "0x0")]
		internal byte _byte;
	}

	[Token(Token = "0x4001509")]
	[FieldOffset(Offset = "0x0")]
	private System.Numerics.Register register;

	[Token(Token = "0x400150A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int s_count;

	[Token(Token = "0x400150B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector<T> s_zero;

	[Token(Token = "0x400150C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector<T> s_one;

	[Token(Token = "0x400150D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector<T> s_allOnes;

	[Token(Token = "0x170005C7")]
	public static int Count
	{
		[Token(Token = "0x600281D")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170005C8")]
	public static Vector<T> Zero
	{
		[Token(Token = "0x600281E")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return default(Vector<T>);
		}
	}

	[Token(Token = "0x170005C9")]
	public T this[int index]
	{
		[Token(Token = "0x6002824")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x600281F")]
	private static int InitializeCount()
	{
		return default(int);
	}

	[Token(Token = "0x6002820")]
	[System.Runtime.CompilerServices.Intrinsic]
	public Vector(T value)
	{
	}

	[Token(Token = "0x6002821")]
	internal unsafe Vector(void* dataPointer)
	{
	}

	[Token(Token = "0x6002822")]
	internal unsafe Vector(void* dataPointer, int offset)
	{
	}

	[Token(Token = "0x6002823")]
	private Vector(ref System.Numerics.Register existingRegister)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002825")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002826")]
	[System.Runtime.CompilerServices.Intrinsic]
	public bool Equals(Vector<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002827")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002828")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002829")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600282A")]
	public static bool operator ==(Vector<T> left, Vector<T> right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600282B")]
	public static bool operator !=(Vector<T> left, Vector<T> right)
	{
		return default(bool);
	}

	[Token(Token = "0x600282C")]
	[System.Runtime.CompilerServices.Intrinsic]
	[CLSCompliant(false)]
	public static explicit operator Vector<ulong>(Vector<T> value)
	{
		return default(Vector<ulong>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600282D")]
	[System.Runtime.CompilerServices.Intrinsic]
	internal static Vector<T> Equals(Vector<T> left, Vector<T> right)
	{
		return default(Vector<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600282E")]
	private static bool ScalarEquals(T left, T right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600282F")]
	private static T GetOneValue()
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002830")]
	private static T GetAllBitsSetValue()
	{
		return (T)null;
	}
}
[Token(Token = "0x200053F")]
[System.Runtime.CompilerServices.Intrinsic]
public static class Vector
{
	[Token(Token = "0x170005CA")]
	public static bool IsHardwareAccelerated
	{
		[Token(Token = "0x6002833")]
		[Address(RVA = "0x53F0920", Offset = "0x53EF920", VA = "0x53F0920")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002832")]
	public static Vector<T> Equals<T>(Vector<T> left, Vector<T> right) where T : struct
	{
		return default(Vector<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002834")]
	[CLSCompliant(false)]
	public static Vector<ulong> AsVectorUInt64<T>(Vector<T> value) where T : struct
	{
		return default(Vector<ulong>);
	}
}
