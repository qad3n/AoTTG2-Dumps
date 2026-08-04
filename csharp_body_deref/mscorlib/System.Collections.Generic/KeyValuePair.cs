// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.KeyValuePair
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000653")]
public static class KeyValuePair
{
	[Token(Token = "0x6003214")]
	[Address(RVA = "0x3C8EB20", Offset = "0x3C8EB20", VA = "0x3C8EB20")]
	internal static string PairToString(object key, object value)
	{
		return null;
	}
}
[Serializable]
[Token(Token = "0x2000654")]
public readonly struct KeyValuePair<TKey, TValue>
{
	[Token(Token = "0x4001B31")]
	[FieldOffset(Offset = "0x0")]
	private readonly TKey key;

	[Token(Token = "0x4001B32")]
	[FieldOffset(Offset = "0x0")]
	private readonly TValue value;

	[Token(Token = "0x17000826")]
	public TKey Key
	{
		[Token(Token = "0x6003216")]
		get
		{
			return (TKey)null;
		}
	}

	[Token(Token = "0x17000827")]
	public TValue Value
	{
		[Token(Token = "0x6003217")]
		get
		{
			return (TValue)null;
		}
	}

	[Token(Token = "0x6003215")]
	public KeyValuePair(TKey key, TValue value)
	{
	}

	[Token(Token = "0x6003218")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6003219")]
	public void Deconstruct(out TKey key, out TValue value)
	{
	}
}
