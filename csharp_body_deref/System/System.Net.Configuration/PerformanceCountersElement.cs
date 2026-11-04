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

[Token(Token = "0x20003F9")]
public sealed class PerformanceCountersElement : ConfigurationElement
{
	[Token(Token = "0x170005E0")]
	public bool Enabled
	{
		[Token(Token = "0x6001AB0")]
		[Address(RVA = "0x282B650", Offset = "0x2829C50", VA = "0x18282B650")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001AB1")]
		[Address(RVA = "0x282B6B0", Offset = "0x2829CB0", VA = "0x18282B6B0")]
		set
		{
		}
	}

	[Token(Token = "0x170005E1")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001AB2")]
		[Address(RVA = "0x282B680", Offset = "0x2829C80", VA = "0x18282B680", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AAF")]
	[Address(RVA = "0x282B620", Offset = "0x2829C20", VA = "0x18282B620")]
	public PerformanceCountersElement()
	{
	}
}
