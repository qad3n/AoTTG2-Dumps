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

[Token(Token = "0x20003A3")]
public sealed class WindowsAuthenticationElement : ConfigurationElement
{
	[Token(Token = "0x1700058A")]
	public int DefaultCredentialsHandleCacheSize
	{
		[Token(Token = "0x6001837")]
		[Address(RVA = "0x48F54B0", Offset = "0x48F54B0", VA = "0x48F54B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001838")]
		[Address(RVA = "0x48F54E0", Offset = "0x48F54E0", VA = "0x48F54E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700058B")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001839")]
		[Address(RVA = "0x48F5510", Offset = "0x48F5510", VA = "0x48F5510", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001836")]
	[Address(RVA = "0x48F5480", Offset = "0x48F5480", VA = "0x48F5480")]
	public WindowsAuthenticationElement()
	{
	}
}
