using System.Configuration;
using System.Net.Cache;
using System.Xml;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000392")]
public sealed class HttpCachePolicyElement : ConfigurationElement
{
	[Token(Token = "0x17000536")]
	public TimeSpan MaximumAge
	{
		[Token(Token = "0x60017A0")]
		[Address(RVA = "0x45CE760", Offset = "0x45CE760", VA = "0x45CE760")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x60017A1")]
		[Address(RVA = "0x45CE790", Offset = "0x45CE790", VA = "0x45CE790")]
		set
		{
		}
	}

	[Token(Token = "0x17000537")]
	public TimeSpan MaximumStale
	{
		[Token(Token = "0x60017A2")]
		[Address(RVA = "0x45CE7C0", Offset = "0x45CE7C0", VA = "0x45CE7C0")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x60017A3")]
		[Address(RVA = "0x45CE7F0", Offset = "0x45CE7F0", VA = "0x45CE7F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000538")]
	public TimeSpan MinimumFresh
	{
		[Token(Token = "0x60017A4")]
		[Address(RVA = "0x45CE820", Offset = "0x45CE820", VA = "0x45CE820")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x60017A5")]
		[Address(RVA = "0x45CE850", Offset = "0x45CE850", VA = "0x45CE850")]
		set
		{
		}
	}

	[Token(Token = "0x17000539")]
	public HttpRequestCacheLevel PolicyLevel
	{
		[Token(Token = "0x60017A6")]
		[Address(RVA = "0x45CE880", Offset = "0x45CE880", VA = "0x45CE880")]
		get
		{
			return default(HttpRequestCacheLevel);
		}
		[Token(Token = "0x60017A7")]
		[Address(RVA = "0x45CE8B0", Offset = "0x45CE8B0", VA = "0x45CE8B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700053A")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017A8")]
		[Address(RVA = "0x45CE8E0", Offset = "0x45CE8E0", VA = "0x45CE8E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600179F")]
	[Address(RVA = "0x45CE730", Offset = "0x45CE730", VA = "0x45CE730")]
	public HttpCachePolicyElement()
	{
	}

	[Token(Token = "0x60017A9")]
	[Address(RVA = "0x45CE910", Offset = "0x45CE910", VA = "0x45CE910", Slot = "5")]
	protected override void DeserializeElement(XmlReader reader, bool serializeCollectionKey)
	{
	}

	[Token(Token = "0x60017AA")]
	[Address(RVA = "0x45CE940", Offset = "0x45CE940", VA = "0x45CE940", Slot = "9")]
	protected override void Reset(ConfigurationElement parentElement)
	{
	}
}
