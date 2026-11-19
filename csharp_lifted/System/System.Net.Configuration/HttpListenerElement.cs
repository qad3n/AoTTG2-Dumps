// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.HttpListenerElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003AA")]
public sealed class HttpListenerElement : ConfigurationElement
{
	[Token(Token = "0x17000577")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001896")]
		[Address(RVA = "0x61D0590", Offset = "0x61CF590", VA = "0x61D0590", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000578")]
	public HttpListenerTimeoutsElement Timeouts
	{
		[Token(Token = "0x6001897")]
		[Address(RVA = "0x61D05C0", Offset = "0x61CF5C0", VA = "0x61D05C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000579")]
	public bool UnescapeRequestUrl
	{
		[Token(Token = "0x6001898")]
		[Address(RVA = "0x61D05F0", Offset = "0x61CF5F0", VA = "0x61D05F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001895")]
	[Address(RVA = "0x61D0560", Offset = "0x61CF560", VA = "0x61D0560")]
	public HttpListenerElement()
	{
	}
}
