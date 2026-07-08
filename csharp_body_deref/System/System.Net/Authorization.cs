using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000137")]
public class Authorization
{
	[Token(Token = "0x4000633")]
	[FieldOffset(Offset = "0x10")]
	private string m_Message;

	[Token(Token = "0x4000634")]
	[FieldOffset(Offset = "0x18")]
	private bool m_Complete;

	[Token(Token = "0x4000635")]
	[FieldOffset(Offset = "0x20")]
	internal string ModuleAuthenticationType;

	[Token(Token = "0x170001AA")]
	public string Message
	{
		[Token(Token = "0x60007B8")]
		[Address(RVA = "0x4638C80", Offset = "0x4638C80", VA = "0x4638C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AB")]
	public bool Complete
	{
		[Token(Token = "0x60007B9")]
		[Address(RVA = "0x4638C90", Offset = "0x4638C90", VA = "0x4638C90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x4638B60", Offset = "0x4638B60", VA = "0x4638B60")]
	public Authorization(string token)
	{
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x4638C00", Offset = "0x4638C00", VA = "0x4638C00")]
	public Authorization(string token, bool finished)
	{
	}
}
