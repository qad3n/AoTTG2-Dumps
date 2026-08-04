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

[Token(Token = "0x2000392")]
public sealed class HttpCachePolicyElement : ConfigurationElement
{
	[Token(Token = "0x17000536")]
	public TimeSpan MaximumAge
	{
		[Token(Token = "0x60017A0")]
		[Address(RVA = "0x48F3860", Offset = "0x48F3860", VA = "0x48F3860")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x60017A1")]
		[Address(RVA = "0x48F3890", Offset = "0x48F3890", VA = "0x48F3890")]
		set
		{
		}
	}

	[Token(Token = "0x17000537")]
	public TimeSpan MaximumStale
	{
		[Token(Token = "0x60017A2")]
		[Address(RVA = "0x48F38C0", Offset = "0x48F38C0", VA = "0x48F38C0")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x60017A3")]
		[Address(RVA = "0x48F38F0", Offset = "0x48F38F0", VA = "0x48F38F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000538")]
	public TimeSpan MinimumFresh
	{
		[Token(Token = "0x60017A4")]
		[Address(RVA = "0x48F3920", Offset = "0x48F3920", VA = "0x48F3920")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x60017A5")]
		[Address(RVA = "0x48F3950", Offset = "0x48F3950", VA = "0x48F3950")]
		set
		{
		}
	}

	[Token(Token = "0x17000539")]
	public HttpRequestCacheLevel PolicyLevel
	{
		[Token(Token = "0x60017A6")]
		[Address(RVA = "0x48F3980", Offset = "0x48F3980", VA = "0x48F3980")]
		get
		{
			return default(HttpRequestCacheLevel);
		}
		[Token(Token = "0x60017A7")]
		[Address(RVA = "0x48F39B0", Offset = "0x48F39B0", VA = "0x48F39B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700053A")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017A8")]
		[Address(RVA = "0x48F39E0", Offset = "0x48F39E0", VA = "0x48F39E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600179F")]
	[Address(RVA = "0x48F3830", Offset = "0x48F3830", VA = "0x48F3830")]
	public HttpCachePolicyElement()
	{
	}

	[Token(Token = "0x60017A9")]
	[Address(RVA = "0x48F3A10", Offset = "0x48F3A10", VA = "0x48F3A10", Slot = "5")]
	protected override void DeserializeElement(XmlReader reader, bool serializeCollectionKey)
	{
	}

	[Token(Token = "0x60017AA")]
	[Address(RVA = "0x48F3A40", Offset = "0x48F3A40", VA = "0x48F3A40", Slot = "9")]
	protected override void Reset(ConfigurationElement parentElement)
	{
	}
}
