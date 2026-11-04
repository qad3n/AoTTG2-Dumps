// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.GenericEqualityComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000646")]
internal class GenericEqualityComparer<T> : EqualityComparer<T> where T : IEquatable<T>
{
	[Token(Token = "0x6003027")]
	public override bool Equals(T x, T y)
	{
		return default(bool);
	}

	[Token(Token = "0x6003028")]
	public override int GetHashCode(T obj)
	{
		return default(int);
	}

	[Token(Token = "0x6003029")]
	internal override int IndexOf(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600302A")]
	internal override int LastIndexOf(T[] array, T value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600302B")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600302C")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600302D")]
	public GenericEqualityComparer()
	{
	}
}
