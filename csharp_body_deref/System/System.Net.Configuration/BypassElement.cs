// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.BypassElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000386")]
public sealed class BypassElement : ConfigurationElement
{
	[Token(Token = "0x1700051C")]
	public string Address
	{
		[Token(Token = "0x6001756")]
		[Address(RVA = "0x48F2A80", Offset = "0x48F2A80", VA = "0x48F2A80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001757")]
		[Address(RVA = "0x48F2AB0", Offset = "0x48F2AB0", VA = "0x48F2AB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700051D")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001758")]
		[Address(RVA = "0x48F2AE0", Offset = "0x48F2AE0", VA = "0x48F2AE0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001754")]
	[Address(RVA = "0x48F2A20", Offset = "0x48F2A20", VA = "0x48F2A20")]
	public BypassElement()
	{
	}

	[Token(Token = "0x6001755")]
	[Address(RVA = "0x48F2A50", Offset = "0x48F2A50", VA = "0x48F2A50")]
	public BypassElement(string address)
	{
	}
}
