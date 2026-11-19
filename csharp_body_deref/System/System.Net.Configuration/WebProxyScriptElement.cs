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

[Token(Token = "0x20003B8")]
public sealed class WebProxyScriptElement : ConfigurationElement
{
	[Token(Token = "0x170005C0")]
	public int AutoConfigUrlRetryInterval
	{
		[Token(Token = "0x6001914")]
		[Address(RVA = "0x61D1D30", Offset = "0x61D0D30", VA = "0x61D1D30")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001915")]
		[Address(RVA = "0x61D1D60", Offset = "0x61D0D60", VA = "0x61D1D60")]
		set
		{
		}
	}

	[Token(Token = "0x170005C1")]
	public TimeSpan DownloadTimeout
	{
		[Token(Token = "0x6001916")]
		[Address(RVA = "0x61D1D90", Offset = "0x61D0D90", VA = "0x61D1D90")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001917")]
		[Address(RVA = "0x61D1DC0", Offset = "0x61D0DC0", VA = "0x61D1DC0")]
		set
		{
		}
	}

	[Token(Token = "0x170005C2")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001918")]
		[Address(RVA = "0x61D1DF0", Offset = "0x61D0DF0", VA = "0x61D1DF0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001913")]
	[Address(RVA = "0x61D1D00", Offset = "0x61D0D00", VA = "0x61D1D00")]
	public WebProxyScriptElement()
	{
	}

	[Token(Token = "0x6001919")]
	[Address(RVA = "0x61D1E20", Offset = "0x61D0E20", VA = "0x61D1E20", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
