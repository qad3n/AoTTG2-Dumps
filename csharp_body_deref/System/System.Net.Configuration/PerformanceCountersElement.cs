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

[Token(Token = "0x200039E")]
public sealed class PerformanceCountersElement : ConfigurationElement
{
	[Token(Token = "0x17000576")]
	public bool Enabled
	{
		[Token(Token = "0x600180C")]
		[Address(RVA = "0x48F4CA0", Offset = "0x48F4CA0", VA = "0x48F4CA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600180D")]
		[Address(RVA = "0x48F4CD0", Offset = "0x48F4CD0", VA = "0x48F4CD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000577")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600180E")]
		[Address(RVA = "0x48F4D00", Offset = "0x48F4D00", VA = "0x48F4D00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600180B")]
	[Address(RVA = "0x48F4C70", Offset = "0x48F4C70", VA = "0x48F4C70")]
	public PerformanceCountersElement()
	{
	}
}
