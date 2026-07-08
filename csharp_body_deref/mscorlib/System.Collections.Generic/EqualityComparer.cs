using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000671")]
[System.Runtime.CompilerServices.TypeDependency("System.Collections.Generic.ObjectEqualityComparer`1")]
public abstract class EqualityComparer<T> : IEqualityComparer, IEqualityComparer<T>
{
	[Token(Token = "0x4001B70")]
	[FieldOffset(Offset = "0x0")]
	private static EqualityComparer<T> defaultComparer;

	[Token(Token = "0x1700084B")]
	public static EqualityComparer<T> Default
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6003304")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003305")]
	private static EqualityComparer<T> CreateComparer()
	{
		return null;
	}

	[Token(Token = "0x6003306")]
	public abstract bool Equals(T x, T y);

	[Token(Token = "0x6003307")]
	public abstract int GetHashCode(T obj);

	[Token(Token = "0x6003308")]
	internal virtual int IndexOf(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003309")]
	internal virtual int LastIndexOf(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600330A")]
	private int System_002ECollections_002EIEqualityComparer_002EGetHashCode(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x600330B")]
	private bool System_002ECollections_002EIEqualityComparer_002EEquals(object x, object y)
	{
		return default(bool);
	}

	[Token(Token = "0x600330C")]
	protected EqualityComparer()
	{
	}
}
