// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.NullableComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000643")]
internal class NullableComparer<T> : Comparer<T?> where T : struct, IComparable<T>
{
	[Token(Token = "0x6003016")]
	public override int Compare(T? x, T? y)
	{
		return default(int);
	}

	[Token(Token = "0x6003017")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6003018")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6003019")]
	public NullableComparer()
	{
	}
}
