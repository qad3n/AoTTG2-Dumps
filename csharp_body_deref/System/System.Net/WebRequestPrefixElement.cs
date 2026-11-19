// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebRequestPrefixElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200028F")]
internal class WebRequestPrefixElement
{
	[Token(Token = "0x40009D8")]
	[FieldOffset(Offset = "0x10")]
	public string Prefix;

	[Token(Token = "0x40009D9")]
	[FieldOffset(Offset = "0x18")]
	internal IWebRequestCreate creator;

	[Token(Token = "0x40009DA")]
	[FieldOffset(Offset = "0x20")]
	internal Type creatorType;

	[Token(Token = "0x170003E0")]
	public IWebRequestCreate Creator
	{
		[Token(Token = "0x60011DE")]
		[Address(RVA = "0x62A68E0", Offset = "0x62A58E0", VA = "0x62A68E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60011DF")]
		[Address(RVA = "0x62A6AC0", Offset = "0x62A5AC0", VA = "0x62A6AC0")]
		set
		{
		}
	}

	[Token(Token = "0x60011E0")]
	[Address(RVA = "0x62A6AD0", Offset = "0x62A5AD0", VA = "0x62A6AD0")]
	public WebRequestPrefixElement(string P, IWebRequestCreate C)
	{
	}
}
