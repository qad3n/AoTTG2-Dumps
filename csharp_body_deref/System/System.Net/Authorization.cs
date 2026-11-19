// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Authorization
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000280")]
public class Authorization
{
	[Token(Token = "0x400097A")]
	[FieldOffset(Offset = "0x10")]
	private string m_Message;

	[Token(Token = "0x400097B")]
	[FieldOffset(Offset = "0x18")]
	private bool m_Complete;

	[Token(Token = "0x400097C")]
	[FieldOffset(Offset = "0x20")]
	internal string ModuleAuthenticationType;

	[Token(Token = "0x170003D0")]
	public string Message
	{
		[Token(Token = "0x60011B9")]
		[Address(RVA = "0x62A58C0", Offset = "0x62A48C0", VA = "0x62A58C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D1")]
	public bool Complete
	{
		[Token(Token = "0x60011BA")]
		[Address(RVA = "0x62A58D0", Offset = "0x62A48D0", VA = "0x62A58D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011B7")]
	[Address(RVA = "0x62A57B0", Offset = "0x62A47B0", VA = "0x62A57B0")]
	public Authorization(string token)
	{
	}

	[Token(Token = "0x60011B8")]
	[Address(RVA = "0x62A5840", Offset = "0x62A4840", VA = "0x62A5840")]
	public Authorization(string token, bool finished)
	{
	}
}
