// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Authorization
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x495DD80", Offset = "0x495DD80", VA = "0x495DD80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AB")]
	public bool Complete
	{
		[Token(Token = "0x60007B9")]
		[Address(RVA = "0x495DD90", Offset = "0x495DD90", VA = "0x495DD90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x495DC60", Offset = "0x495DC60", VA = "0x495DC60")]
	public Authorization(string token)
	{
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x495DD00", Offset = "0x495DD00", VA = "0x495DD00")]
	public Authorization(string token, bool finished)
	{
	}
}
