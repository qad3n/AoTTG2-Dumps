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
		[Address(RVA = "0x45877A0", Offset = "0x45877A0", VA = "0x45877A0")]
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
		[Address(RVA = "0x45877B0", Offset = "0x45877B0", VA = "0x45877B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x45874F0", Offset = "0x45874F0", VA = "0x45874F0")]
	public WarningException()
	{
	}

	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x4587590", Offset = "0x4587590", VA = "0x4587590")]
	public WarningException(string message)
	{
	}

	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x45875E0", Offset = "0x45875E0", VA = "0x45875E0")]
	public WarningException(string message, string helpUrl)
	{
	}

	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x4587630", Offset = "0x4587630", VA = "0x4587630")]
	public WarningException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x4587540", Offset = "0x4587540", VA = "0x4587540")]
	public WarningException(string message, string helpUrl, string helpTopic)
	{
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x4587640", Offset = "0x4587640", VA = "0x4587640")]
	protected WarningException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x45877C0", Offset = "0x45877C0", VA = "0x45877C0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
