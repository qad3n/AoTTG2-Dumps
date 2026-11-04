// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.NullableEqualityComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000647")]
internal class NullableEqualityComparer<T> : EqualityComparer<T?> where T : struct, IEquatable<T>
{
	[Token(Token = "0x600302E")]
	public override bool Equals(T? x, T? y)
	{
		return default(bool);
	}

	[Token(Token = "0x600302F")]
	public override int GetHashCode(T? obj)
	{
		return default(int);
	}

	[Token(Token = "0x6003030")]
	internal override int IndexOf(T?[] array, T? value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003031")]
	internal override int LastIndexOf(T?[] array, T? value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003032")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6003033")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6003034")]
	public NullableEqualityComparer()
	{
	}
}
