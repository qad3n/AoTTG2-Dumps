// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.Comparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x200061C")]
[System.Runtime.CompilerServices.TypeDependency("System.Collections.Generic.ObjectComparer`1")]
public abstract class Comparer<T> : IComparer, IComparer<T>
{
	[Token(Token = "0x40018D8")]
	[FieldOffset(Offset = "0x0")]
	private static Comparer<T> defaultComparer;

	[Token(Token = "0x170007D8")]
	public static Comparer<T> Default
	{
		[Token(Token = "0x6002FEC")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002FED")]
	private static Comparer<T> CreateComparer()
	{
		return null;
	}

	[Token(Token = "0x6002FEE")]
	public abstract int Compare(T x, T y);

	[Token(Token = "0x6002FEF")]
	private int System_002ECollections_002EIComparer_002ECompare(object x, object y)
	{
		return default(int);
	}

	[Token(Token = "0x6002FF0")]
	protected Comparer()
	{
	}
}
