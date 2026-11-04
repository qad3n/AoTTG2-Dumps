// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebRequestPrefixElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002CE")]
internal class WebRequestPrefixElement
{
	[Token(Token = "0x4000AA7")]
	[FieldOffset(Offset = "0x10")]
	public string Prefix;

	[Token(Token = "0x4000AA8")]
	[FieldOffset(Offset = "0x18")]
	internal IWebRequestCreate creator;

	[Token(Token = "0x4000AA9")]
	[FieldOffset(Offset = "0x20")]
	internal Type creatorType;

	[Token(Token = "0x1700040F")]
	public IWebRequestCreate Creator
	{
		[Token(Token = "0x600139C")]
		[Address(RVA = "0x27D9920", Offset = "0x27D7F20", VA = "0x1827D9920")]
		get
		{
			return null;
		}
		[Token(Token = "0x600139D")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x600139E")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	public WebRequestPrefixElement(string P, IWebRequestCreate C)
	{
	}
}
