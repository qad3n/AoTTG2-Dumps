// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.KeyValuePair
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000627")]
public static class KeyValuePair
{
	[Token(Token = "0x6002F29")]
	[Address(RVA = "0x1AD5AB0", Offset = "0x1AD40B0", VA = "0x181AD5AB0")]
	internal static string PairToString(object key, object value)
	{
		return null;
	}
}
[Serializable]
[Token(Token = "0x2000628")]
public readonly struct KeyValuePair<TKey, TValue>
{
	[Token(Token = "0x4001938")]
	[FieldOffset(Offset = "0x0")]
	private readonly TKey key;

	[Token(Token = "0x4001939")]
	[FieldOffset(Offset = "0x0")]
	private readonly TValue value;

	[Token(Token = "0x170007B5")]
	public TKey Key
	{
		[Token(Token = "0x6002F2B")]
		get
		{
			return (TKey)null;
		}
	}

	[Token(Token = "0x170007B6")]
	public TValue Value
	{
		[Token(Token = "0x6002F2C")]
		get
		{
			return (TValue)null;
		}
	}

	[Token(Token = "0x6002F2A")]
	public KeyValuePair(TKey key, TValue value)
	{
	}

	[Token(Token = "0x6002F2D")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002F2E")]
	public void Deconstruct(out TKey key, out TValue value)
	{
	}
}
