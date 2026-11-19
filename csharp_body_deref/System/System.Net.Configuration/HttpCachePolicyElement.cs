// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.HttpCachePolicyElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using System.Net.Cache;
using System.Xml;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003A9")]
public sealed class HttpCachePolicyElement : ConfigurationElement
{
	[Token(Token = "0x17000572")]
	public TimeSpan MaximumAge
	{
		[Token(Token = "0x600188A")]
		[Address(RVA = "0x61D0350", Offset = "0x61CF350", VA = "0x61D0350")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x600188B")]
		[Address(RVA = "0x61D0380", Offset = "0x61CF380", VA = "0x61D0380")]
		set
		{
		}
	}

	[Token(Token = "0x17000573")]
	public TimeSpan MaximumStale
	{
		[Token(Token = "0x600188C")]
		[Address(RVA = "0x61D03B0", Offset = "0x61CF3B0", VA = "0x61D03B0")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x600188D")]
		[Address(RVA = "0x61D03E0", Offset = "0x61CF3E0", VA = "0x61D03E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000574")]
	public TimeSpan MinimumFresh
	{
		[Token(Token = "0x600188E")]
		[Address(RVA = "0x61D0410", Offset = "0x61CF410", VA = "0x61D0410")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x600188F")]
		[Address(RVA = "0x61D0440", Offset = "0x61CF440", VA = "0x61D0440")]
		set
		{
		}
	}

	[Token(Token = "0x17000575")]
	public HttpRequestCacheLevel PolicyLevel
	{
		[Token(Token = "0x6001890")]
		[Address(RVA = "0x61D0470", Offset = "0x61CF470", VA = "0x61D0470")]
		get
		{
			return default(HttpRequestCacheLevel);
		}
		[Token(Token = "0x6001891")]
		[Address(RVA = "0x61D04A0", Offset = "0x61CF4A0", VA = "0x61D04A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000576")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001892")]
		[Address(RVA = "0x61D04D0", Offset = "0x61CF4D0", VA = "0x61D04D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001889")]
	[Address(RVA = "0x61D0320", Offset = "0x61CF320", VA = "0x61D0320")]
	public HttpCachePolicyElement()
	{
	}

	[Token(Token = "0x6001893")]
	[Address(RVA = "0x61D0500", Offset = "0x61CF500", VA = "0x61D0500", Slot = "5")]
	protected override void DeserializeElement(XmlReader reader, bool serializeCollectionKey)
	{
	}

	[Token(Token = "0x6001894")]
	[Address(RVA = "0x61D0530", Offset = "0x61CF530", VA = "0x61D0530", Slot = "9")]
	protected override void Reset(ConfigurationElement parentElement)
	{
	}
}
