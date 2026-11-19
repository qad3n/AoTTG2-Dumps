// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.KeyValuePair
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000602")]
public static class KeyValuePair
{
	[Token(Token = "0x6002F04")]
	[Address(RVA = "0x5461940", Offset = "0x5460940", VA = "0x5461940")]
	internal static string PairToString(object key, object value)
	{
		return null;
	}
}
[Serializable]
[Token(Token = "0x2000603")]
public readonly struct KeyValuePair<TKey, TValue>
{
	[Token(Token = "0x400189F")]
	[FieldOffset(Offset = "0x0")]
	private readonly TKey key;

	[Token(Token = "0x40018A0")]
	[FieldOffset(Offset = "0x0")]
	private readonly TValue value;

	[Token(Token = "0x170007B4")]
	public TKey Key
	{
		[Token(Token = "0x6002F06")]
		get
		{
			return (TKey)null;
		}
	}

	[Token(Token = "0x170007B5")]
	public TValue Value
	{
		[Token(Token = "0x6002F07")]
		get
		{
			return (TValue)null;
		}
	}

	[Token(Token = "0x6002F05")]
	public KeyValuePair(TKey key, TValue value)
	{
	}

	[Token(Token = "0x6002F08")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002F09")]
	public void Deconstruct(out TKey key, out TValue value)
	{
	}
}
