// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Authorization
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002BF")]
public class Authorization
{
	[Token(Token = "0x4000A49")]
	[FieldOffset(Offset = "0x10")]
	private string m_Message;

	[Token(Token = "0x4000A4A")]
	[FieldOffset(Offset = "0x18")]
	private bool m_Complete;

	[Token(Token = "0x4000A4B")]
	[FieldOffset(Offset = "0x20")]
	internal string ModuleAuthenticationType;

	[Token(Token = "0x170003FF")]
	public string Message
	{
		[Token(Token = "0x6001377")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000400")]
	public bool Complete
	{
		[Token(Token = "0x6001378")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001375")]
	[Address(RVA = "0x27BFFE0", Offset = "0x27BE5E0", VA = "0x1827BFFE0")]
	public Authorization(string token)
	{
	}

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x27C0060", Offset = "0x27BE660", VA = "0x1827C0060")]
	public Authorization(string token, bool finished)
	{
	}
}
