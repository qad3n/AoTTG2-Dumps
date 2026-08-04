// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.WarningException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Serializable]
[Token(Token = "0x20002E2")]
public class WarningException : SystemException
{
	[Token(Token = "0x17000431")]
	public string HelpUrl
	{
		[Token(Token = "0x60012C1")]
		[Address(RVA = "0x48AC8A0", Offset = "0x48AC8A0", VA = "0x48AC8A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000432")]
	public string HelpTopic
	{
		[Token(Token = "0x60012C2")]
		[Address(RVA = "0x48AC8B0", Offset = "0x48AC8B0", VA = "0x48AC8B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x48AC5F0", Offset = "0x48AC5F0", VA = "0x48AC5F0")]
	public WarningException()
	{
	}

	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x48AC690", Offset = "0x48AC690", VA = "0x48AC690")]
	public WarningException(string message)
	{
	}

	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x48AC6E0", Offset = "0x48AC6E0", VA = "0x48AC6E0")]
	public WarningException(string message, string helpUrl)
	{
	}

	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x48AC730", Offset = "0x48AC730", VA = "0x48AC730")]
	public WarningException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x48AC640", Offset = "0x48AC640", VA = "0x48AC640")]
	public WarningException(string message, string helpUrl, string helpTopic)
	{
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x48AC740", Offset = "0x48AC740", VA = "0x48AC740")]
	protected WarningException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x48AC8C0", Offset = "0x48AC8C0", VA = "0x48AC8C0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
