// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.SocketElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using System.Net.Sockets;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003B7")]
public sealed class SocketElement : ConfigurationElement
{
	[Token(Token = "0x170005BC")]
	public bool AlwaysUseCompletionPortsForAccept
	{
		[Token(Token = "0x600190B")]
		[Address(RVA = "0x61D1B80", Offset = "0x61D0B80", VA = "0x61D1B80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600190C")]
		[Address(RVA = "0x61D1BB0", Offset = "0x61D0BB0", VA = "0x61D1BB0")]
		set
		{
		}
	}

	[Token(Token = "0x170005BD")]
	public bool AlwaysUseCompletionPortsForConnect
	{
		[Token(Token = "0x600190D")]
		[Address(RVA = "0x61D1BE0", Offset = "0x61D0BE0", VA = "0x61D1BE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600190E")]
		[Address(RVA = "0x61D1C10", Offset = "0x61D0C10", VA = "0x61D1C10")]
		set
		{
		}
	}

	[Token(Token = "0x170005BE")]
	public IPProtectionLevel IPProtectionLevel
	{
		[Token(Token = "0x600190F")]
		[Address(RVA = "0x61D1C40", Offset = "0x61D0C40", VA = "0x61D1C40")]
		get
		{
			return default(IPProtectionLevel);
		}
		[Token(Token = "0x6001910")]
		[Address(RVA = "0x61D1C70", Offset = "0x61D0C70", VA = "0x61D1C70")]
		set
		{
		}
	}

	[Token(Token = "0x170005BF")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001911")]
		[Address(RVA = "0x61D1CA0", Offset = "0x61D0CA0", VA = "0x61D1CA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600190A")]
	[Address(RVA = "0x61D1B50", Offset = "0x61D0B50", VA = "0x61D1B50")]
	public SocketElement()
	{
	}

	[Token(Token = "0x6001912")]
	[Address(RVA = "0x61D1CD0", Offset = "0x61D0CD0", VA = "0x61D1CD0", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
