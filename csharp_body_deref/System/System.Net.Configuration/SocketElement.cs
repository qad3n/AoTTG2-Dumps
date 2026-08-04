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

[Token(Token = "0x20003A0")]
public sealed class SocketElement : ConfigurationElement
{
	[Token(Token = "0x17000580")]
	public bool AlwaysUseCompletionPortsForAccept
	{
		[Token(Token = "0x6001821")]
		[Address(RVA = "0x48F5090", Offset = "0x48F5090", VA = "0x48F5090")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001822")]
		[Address(RVA = "0x48F50C0", Offset = "0x48F50C0", VA = "0x48F50C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000581")]
	public bool AlwaysUseCompletionPortsForConnect
	{
		[Token(Token = "0x6001823")]
		[Address(RVA = "0x48F50F0", Offset = "0x48F50F0", VA = "0x48F50F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001824")]
		[Address(RVA = "0x48F5120", Offset = "0x48F5120", VA = "0x48F5120")]
		set
		{
		}
	}

	[Token(Token = "0x17000582")]
	public IPProtectionLevel IPProtectionLevel
	{
		[Token(Token = "0x6001825")]
		[Address(RVA = "0x48F5150", Offset = "0x48F5150", VA = "0x48F5150")]
		get
		{
			return default(IPProtectionLevel);
		}
		[Token(Token = "0x6001826")]
		[Address(RVA = "0x48F5180", Offset = "0x48F5180", VA = "0x48F5180")]
		set
		{
		}
	}

	[Token(Token = "0x17000583")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001827")]
		[Address(RVA = "0x48F51B0", Offset = "0x48F51B0", VA = "0x48F51B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001820")]
	[Address(RVA = "0x48F5060", Offset = "0x48F5060", VA = "0x48F5060")]
	public SocketElement()
	{
	}

	[Token(Token = "0x6001828")]
	[Address(RVA = "0x48F51E0", Offset = "0x48F51E0", VA = "0x48F51E0", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
