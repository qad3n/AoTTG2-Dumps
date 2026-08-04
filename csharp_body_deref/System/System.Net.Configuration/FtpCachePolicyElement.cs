// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.FtpCachePolicyElement
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

[Token(Token = "0x2000391")]
public sealed class FtpCachePolicyElement : ConfigurationElement
{
	[Token(Token = "0x17000534")]
	public RequestCacheLevel PolicyLevel
	{
		[Token(Token = "0x600179A")]
		[Address(RVA = "0x48F3740", Offset = "0x48F3740", VA = "0x48F3740")]
		get
		{
			return default(RequestCacheLevel);
		}
		[Token(Token = "0x600179B")]
		[Address(RVA = "0x48F3770", Offset = "0x48F3770", VA = "0x48F3770")]
		set
		{
		}
	}

	[Token(Token = "0x17000535")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600179C")]
		[Address(RVA = "0x48F37A0", Offset = "0x48F37A0", VA = "0x48F37A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001799")]
	[Address(RVA = "0x48F3710", Offset = "0x48F3710", VA = "0x48F3710")]
	public FtpCachePolicyElement()
	{
	}

	[Token(Token = "0x600179D")]
	[Address(RVA = "0x48F37D0", Offset = "0x48F37D0", VA = "0x48F37D0", Slot = "5")]
	protected override void DeserializeElement(XmlReader reader, bool serializeCollectionKey)
	{
	}

	[Token(Token = "0x600179E")]
	[Address(RVA = "0x48F3800", Offset = "0x48F3800", VA = "0x48F3800", Slot = "9")]
	protected override void Reset(ConfigurationElement parentElement)
	{
	}
}
