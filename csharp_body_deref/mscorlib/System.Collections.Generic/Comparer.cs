using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x200066D")]
[System.Runtime.CompilerServices.TypeDependency("System.Collections.Generic.ObjectComparer`1")]
public abstract class Comparer<T> : IComparer, IComparer<T>
{
	[Token(Token = "0x4001B6F")]
	[FieldOffset(Offset = "0x0")]
	private static Comparer<T> defaultComparer;

	[Token(Token = "0x1700084A")]
	public static Comparer<T> Default
	{
		[Token(Token = "0x60032F3")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60032F4")]
	private static Comparer<T> CreateComparer()
	{
		return null;
	}

	[Token(Token = "0x60032F5")]
	public abstract int Compare(T x, T y);

	[Token(Token = "0x60032F6")]
	private int System_002ECollections_002EIComparer_002ECompare(object x, object y)
	{
		return default(int);
	}

	[Token(Token = "0x60032F7")]
	protected Comparer()
	{
	}
}
