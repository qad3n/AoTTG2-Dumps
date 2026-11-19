// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.PerformanceCountersElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003B5")]
public sealed class PerformanceCountersElement : ConfigurationElement
{
	[Token(Token = "0x170005B2")]
	public bool Enabled
	{
		[Token(Token = "0x60018F6")]
		[Address(RVA = "0x61D1790", Offset = "0x61D0790", VA = "0x61D1790")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60018F7")]
		[Address(RVA = "0x61D17C0", Offset = "0x61D07C0", VA = "0x61D17C0")]
		set
		{
		}
	}

	[Token(Token = "0x170005B3")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60018F8")]
		[Address(RVA = "0x61D17F0", Offset = "0x61D07F0", VA = "0x61D17F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60018F5")]
	[Address(RVA = "0x61D1760", Offset = "0x61D0760", VA = "0x61D1760")]
	public PerformanceCountersElement()
	{
	}
}
