// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.DictionaryEntry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x20005A5")]
public struct DictionaryEntry
{
	[Token(Token = "0x40017CD")]
	[FieldOffset(Offset = "0x0")]
	private object _key;

	[Token(Token = "0x40017CE")]
	[FieldOffset(Offset = "0x8")]
	private object _value;

	[Token(Token = "0x170006AA")]
	public object Key
	{
		[Token(Token = "0x6002B99")]
		[Address(RVA = "0x5450510", Offset = "0x544F510", VA = "0x5450510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AB")]
	public object Value
	{
		[Token(Token = "0x6002B9A")]
		[Address(RVA = "0x5450520", Offset = "0x544F520", VA = "0x5450520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002B98")]
	[Address(RVA = "0x54504E0", Offset = "0x544F4E0", VA = "0x54504E0")]
	public DictionaryEntry(object key, object value)
	{
	}
}
