using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x20005F6")]
public struct DictionaryEntry
{
	[Token(Token = "0x4001A4B")]
	[FieldOffset(Offset = "0x0")]
	private object _key;

	[Token(Token = "0x4001A4C")]
	[FieldOffset(Offset = "0x8")]
	private object _value;

	[Token(Token = "0x1700071C")]
	public object Key
	{
		[Token(Token = "0x6002EAB")]
		[Address(RVA = "0x4F97830", Offset = "0x4F97830", VA = "0x4F97830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700071D")]
	public object Value
	{
		[Token(Token = "0x6002EAC")]
		[Address(RVA = "0x4F97840", Offset = "0x4F97840", VA = "0x4F97840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002EAA")]
	[Address(RVA = "0x4F97800", Offset = "0x4F97800", VA = "0x4F97800")]
	public DictionaryEntry(object key, object value)
	{
	}
}
