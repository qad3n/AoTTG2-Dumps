// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.GenericComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x200066E")]
internal class GenericComparer<T> : Comparer<T> where T : IComparable<T>
{
	[Token(Token = "0x60032F8")]
	public override int Compare(T x, T y)
	{
		return default(int);
	}

	[Token(Token = "0x60032F9")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60032FA")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60032FB")]
	public GenericComparer()
	{
	}
}
