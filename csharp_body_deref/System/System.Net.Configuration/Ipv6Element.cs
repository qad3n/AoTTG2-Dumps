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

[Token(Token = "0x2000396")]
public sealed class Ipv6Element : ConfigurationElement
{
	[Token(Token = "0x1700054A")]
	public bool Enabled
	{
		[Token(Token = "0x60017C3")]
		[Address(RVA = "0x48F3EF0", Offset = "0x48F3EF0", VA = "0x48F3EF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60017C4")]
		[Address(RVA = "0x48F3F20", Offset = "0x48F3F20", VA = "0x48F3F20")]
		set
		{
		}
	}

	[Token(Token = "0x1700054B")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017C5")]
		[Address(RVA = "0x48F3F50", Offset = "0x48F3F50", VA = "0x48F3F50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017C2")]
	[Address(RVA = "0x48F3EC0", Offset = "0x48F3EC0", VA = "0x48F3EC0")]
	public Ipv6Element()
	{
	}
}
