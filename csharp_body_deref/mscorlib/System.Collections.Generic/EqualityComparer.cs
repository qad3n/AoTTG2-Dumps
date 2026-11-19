// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.EqualityComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000620")]
[System.Runtime.CompilerServices.TypeDependency("System.Collections.Generic.ObjectEqualityComparer`1")]
public abstract class EqualityComparer<T> : IEqualityComparer, IEqualityComparer<T>
{
	[Token(Token = "0x40018D9")]
	[FieldOffset(Offset = "0x0")]
	private static EqualityComparer<T> defaultComparer;

	[Token(Token = "0x170007D9")]
	public static EqualityComparer<T> Default
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002FFD")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002FFE")]
	private static EqualityComparer<T> CreateComparer()
	{
		return null;
	}

	[Token(Token = "0x6002FFF")]
	public abstract bool Equals(T x, T y);

	[Token(Token = "0x6003000")]
	public abstract int GetHashCode(T obj);

	[Token(Token = "0x6003001")]
	internal virtual int IndexOf(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003002")]
	internal virtual int LastIndexOf(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003003")]
	private int System_002ECollections_002EIEqualityComparer_002EGetHashCode(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6003004")]
	private bool System_002ECollections_002EIEqualityComparer_002EEquals(object x, object y)
	{
		return default(bool);
	}

	[Token(Token = "0x6003005")]
	protected EqualityComparer()
	{
	}
}
