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

[Token(Token = "0x20003ED")]
public sealed class HttpCachePolicyElement : ConfigurationElement
{
	[Token(Token = "0x170005A0")]
	public TimeSpan MaximumAge
	{
		[Token(Token = "0x6001A44")]
		[Address(RVA = "0x282AC90", Offset = "0x2829290", VA = "0x18282AC90")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001A45")]
		[Address(RVA = "0x282AD80", Offset = "0x2829380", VA = "0x18282AD80")]
		set
		{
		}
	}

	[Token(Token = "0x170005A1")]
	public TimeSpan MaximumStale
	{
		[Token(Token = "0x6001A46")]
		[Address(RVA = "0x282ACC0", Offset = "0x28292C0", VA = "0x18282ACC0")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001A47")]
		[Address(RVA = "0x282ADB0", Offset = "0x28293B0", VA = "0x18282ADB0")]
		set
		{
		}
	}

	[Token(Token = "0x170005A2")]
	public TimeSpan MinimumFresh
	{
		[Token(Token = "0x6001A48")]
		[Address(RVA = "0x282ACF0", Offset = "0x28292F0", VA = "0x18282ACF0")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001A49")]
		[Address(RVA = "0x282ADE0", Offset = "0x28293E0", VA = "0x18282ADE0")]
		set
		{
		}
	}

	[Token(Token = "0x170005A3")]
	public HttpRequestCacheLevel PolicyLevel
	{
		[Token(Token = "0x6001A4A")]
		[Address(RVA = "0x282AD20", Offset = "0x2829320", VA = "0x18282AD20")]
		get
		{
			return default(HttpRequestCacheLevel);
		}
		[Token(Token = "0x6001A4B")]
		[Address(RVA = "0x282AE10", Offset = "0x2829410", VA = "0x18282AE10")]
		set
		{
		}
	}

	[Token(Token = "0x170005A4")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001A4C")]
		[Address(RVA = "0x282AD50", Offset = "0x2829350", VA = "0x18282AD50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001A43")]
	[Address(RVA = "0x282AC60", Offset = "0x2829260", VA = "0x18282AC60")]
	public HttpCachePolicyElement()
	{
	}

	[Token(Token = "0x6001A4D")]
	[Address(RVA = "0x282AC00", Offset = "0x2829200", VA = "0x18282AC00", Slot = "5")]
	protected override void DeserializeElement(XmlReader reader, bool serializeCollectionKey)
	{
	}

	[Token(Token = "0x6001A4E")]
	[Address(RVA = "0x282AC30", Offset = "0x2829230", VA = "0x18282AC30", Slot = "9")]
	protected override void Reset(ConfigurationElement parentElement)
	{
	}
}
