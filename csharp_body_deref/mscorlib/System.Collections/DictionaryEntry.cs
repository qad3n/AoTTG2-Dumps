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
[Token(Token = "0x20005CA")]
public struct DictionaryEntry
{
	[Token(Token = "0x4001866")]
	[FieldOffset(Offset = "0x0")]
	private object _key;

	[Token(Token = "0x4001867")]
	[FieldOffset(Offset = "0x8")]
	private object _value;

	[Token(Token = "0x170006A9")]
	public object Key
	{
		[Token(Token = "0x6002BBA")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AA")]
	public object Value
	{
		[Token(Token = "0x6002BBB")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002BB9")]
	[Address(RVA = "0xB5D000", Offset = "0xB5B600", VA = "0x180B5D000")]
	public DictionaryEntry(object key, object value)
	{
	}
}
