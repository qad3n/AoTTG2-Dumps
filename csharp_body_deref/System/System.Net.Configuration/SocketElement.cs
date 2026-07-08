using System.Configuration;
using System.Net.Sockets;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003A0")]
public sealed class SocketElement : ConfigurationElement
{
	[Token(Token = "0x17000580")]
	public bool AlwaysUseCompletionPortsForAccept
	{
		[Token(Token = "0x6001821")]
		[Address(RVA = "0x45CFF90", Offset = "0x45CFF90", VA = "0x45CFF90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001822")]
		[Address(RVA = "0x45CFFC0", Offset = "0x45CFFC0", VA = "0x45CFFC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000581")]
	public bool AlwaysUseCompletionPortsForConnect
	{
		[Token(Token = "0x6001823")]
		[Address(RVA = "0x45CFFF0", Offset = "0x45CFFF0", VA = "0x45CFFF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001824")]
		[Address(RVA = "0x45D0020", Offset = "0x45D0020", VA = "0x45D0020")]
		set
		{
		}
	}

	[Token(Token = "0x17000582")]
	public IPProtectionLevel IPProtectionLevel
	{
		[Token(Token = "0x6001825")]
		[Address(RVA = "0x45D0050", Offset = "0x45D0050", VA = "0x45D0050")]
		get
		{
			return default(IPProtectionLevel);
		}
		[Token(Token = "0x6001826")]
		[Address(RVA = "0x45D0080", Offset = "0x45D0080", VA = "0x45D0080")]
		set
		{
		}
	}

	[Token(Token = "0x17000583")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001827")]
		[Address(RVA = "0x45D00B0", Offset = "0x45D00B0", VA = "0x45D00B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001820")]
	[Address(RVA = "0x45CFF60", Offset = "0x45CFF60", VA = "0x45CFF60")]
	public SocketElement()
	{
	}

	[Token(Token = "0x6001828")]
	[Address(RVA = "0x45D00E0", Offset = "0x45D00E0", VA = "0x45D00E0", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
