// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.WindowsAuthenticationElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003FE")]
public sealed class WindowsAuthenticationElement : ConfigurationElement
{
	[Token(Token = "0x170005F4")]
	public int DefaultCredentialsHandleCacheSize
	{
		[Token(Token = "0x6001ADB")]
		[Address(RVA = "0x282D0F0", Offset = "0x282B6F0", VA = "0x18282D0F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001ADC")]
		[Address(RVA = "0x282D150", Offset = "0x282B750", VA = "0x18282D150")]
		set
		{
		}
	}

	[Token(Token = "0x170005F5")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001ADD")]
		[Address(RVA = "0x282D120", Offset = "0x282B720", VA = "0x18282D120", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001ADA")]
	[Address(RVA = "0x282D0C0", Offset = "0x282B6C0", VA = "0x18282D0C0")]
	public WindowsAuthenticationElement()
	{
	}
}
