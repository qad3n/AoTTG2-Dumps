// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.Ipv6Element
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003AD")]
public sealed class Ipv6Element : ConfigurationElement
{
	[Token(Token = "0x17000586")]
	public bool Enabled
	{
		[Token(Token = "0x60018AD")]
		[Address(RVA = "0x61D09E0", Offset = "0x61CF9E0", VA = "0x61D09E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60018AE")]
		[Address(RVA = "0x61D0A10", Offset = "0x61CFA10", VA = "0x61D0A10")]
		set
		{
		}
	}

	[Token(Token = "0x17000587")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60018AF")]
		[Address(RVA = "0x61D0A40", Offset = "0x61CFA40", VA = "0x61D0A40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60018AC")]
	[Address(RVA = "0x61D09B0", Offset = "0x61CF9B0", VA = "0x61D09B0")]
	public Ipv6Element()
	{
	}
}
