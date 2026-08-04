// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.WebProxyScriptElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003A1")]
public sealed class WebProxyScriptElement : ConfigurationElement
{
	[Token(Token = "0x17000584")]
	public int AutoConfigUrlRetryInterval
	{
		[Token(Token = "0x600182A")]
		[Address(RVA = "0x48F5240", Offset = "0x48F5240", VA = "0x48F5240")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600182B")]
		[Address(RVA = "0x48F5270", Offset = "0x48F5270", VA = "0x48F5270")]
		set
		{
		}
	}

	[Token(Token = "0x17000585")]
	public TimeSpan DownloadTimeout
	{
		[Token(Token = "0x600182C")]
		[Address(RVA = "0x48F52A0", Offset = "0x48F52A0", VA = "0x48F52A0")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x600182D")]
		[Address(RVA = "0x48F52D0", Offset = "0x48F52D0", VA = "0x48F52D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000586")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600182E")]
		[Address(RVA = "0x48F5300", Offset = "0x48F5300", VA = "0x48F5300", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001829")]
	[Address(RVA = "0x48F5210", Offset = "0x48F5210", VA = "0x48F5210")]
	public WebProxyScriptElement()
	{
	}

	[Token(Token = "0x600182F")]
	[Address(RVA = "0x48F5330", Offset = "0x48F5330", VA = "0x48F5330", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
