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

[Token(Token = "0x20003BA")]
public sealed class WindowsAuthenticationElement : ConfigurationElement
{
	[Token(Token = "0x170005C6")]
	public int DefaultCredentialsHandleCacheSize
	{
		[Token(Token = "0x6001921")]
		[Address(RVA = "0x61D1FA0", Offset = "0x61D0FA0", VA = "0x61D1FA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001922")]
		[Address(RVA = "0x61D1FD0", Offset = "0x61D0FD0", VA = "0x61D1FD0")]
		set
		{
		}
	}

	[Token(Token = "0x170005C7")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001923")]
		[Address(RVA = "0x61D2000", Offset = "0x61D1000", VA = "0x61D2000", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001920")]
	[Address(RVA = "0x61D1F70", Offset = "0x61D0F70", VA = "0x61D1F70")]
	public WindowsAuthenticationElement()
	{
	}
}
