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

[Token(Token = "0x20003FB")]
public sealed class SocketElement : ConfigurationElement
{
	[Token(Token = "0x170005EA")]
	public bool AlwaysUseCompletionPortsForAccept
	{
		[Token(Token = "0x6001AC5")]
		[Address(RVA = "0x282C790", Offset = "0x282AD90", VA = "0x18282C790")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001AC6")]
		[Address(RVA = "0x282C850", Offset = "0x282AE50", VA = "0x18282C850")]
		set
		{
		}
	}

	[Token(Token = "0x170005EB")]
	public bool AlwaysUseCompletionPortsForConnect
	{
		[Token(Token = "0x6001AC7")]
		[Address(RVA = "0x282C7C0", Offset = "0x282ADC0", VA = "0x18282C7C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001AC8")]
		[Address(RVA = "0x282C880", Offset = "0x282AE80", VA = "0x18282C880")]
		set
		{
		}
	}

	[Token(Token = "0x170005EC")]
	public IPProtectionLevel IPProtectionLevel
	{
		[Token(Token = "0x6001AC9")]
		[Address(RVA = "0x282C7F0", Offset = "0x282ADF0", VA = "0x18282C7F0")]
		get
		{
			return default(IPProtectionLevel);
		}
		[Token(Token = "0x6001ACA")]
		[Address(RVA = "0x282C8B0", Offset = "0x282AEB0", VA = "0x18282C8B0")]
		set
		{
		}
	}

	[Token(Token = "0x170005ED")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001ACB")]
		[Address(RVA = "0x282C820", Offset = "0x282AE20", VA = "0x18282C820", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AC4")]
	[Address(RVA = "0x282C760", Offset = "0x282AD60", VA = "0x18282C760")]
	public SocketElement()
	{
	}

	[Token(Token = "0x6001ACC")]
	[Address(RVA = "0x282C730", Offset = "0x282AD30", VA = "0x18282C730", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
