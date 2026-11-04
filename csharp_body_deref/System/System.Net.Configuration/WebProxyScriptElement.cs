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

[Token(Token = "0x20003FC")]
public sealed class WebProxyScriptElement : ConfigurationElement
{
	[Token(Token = "0x170005EE")]
	public int AutoConfigUrlRetryInterval
	{
		[Token(Token = "0x6001ACE")]
		[Address(RVA = "0x282C9D0", Offset = "0x282AFD0", VA = "0x18282C9D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001ACF")]
		[Address(RVA = "0x282CA60", Offset = "0x282B060", VA = "0x18282CA60")]
		set
		{
		}
	}

	[Token(Token = "0x170005EF")]
	public TimeSpan DownloadTimeout
	{
		[Token(Token = "0x6001AD0")]
		[Address(RVA = "0x282CA00", Offset = "0x282B000", VA = "0x18282CA00")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001AD1")]
		[Address(RVA = "0x282CA90", Offset = "0x282B090", VA = "0x18282CA90")]
		set
		{
		}
	}

	[Token(Token = "0x170005F0")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001AD2")]
		[Address(RVA = "0x282CA30", Offset = "0x282B030", VA = "0x18282CA30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001ACD")]
	[Address(RVA = "0x282C9A0", Offset = "0x282AFA0", VA = "0x18282C9A0")]
	public WebProxyScriptElement()
	{
	}

	[Token(Token = "0x6001AD3")]
	[Address(RVA = "0x282C970", Offset = "0x282AF70", VA = "0x18282C970", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
