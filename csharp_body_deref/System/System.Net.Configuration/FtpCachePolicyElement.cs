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

[Token(Token = "0x20003A8")]
public sealed class FtpCachePolicyElement : ConfigurationElement
{
	[Token(Token = "0x17000570")]
	public RequestCacheLevel PolicyLevel
	{
		[Token(Token = "0x6001884")]
		[Address(RVA = "0x61D0230", Offset = "0x61CF230", VA = "0x61D0230")]
		get
		{
			return default(RequestCacheLevel);
		}
		[Token(Token = "0x6001885")]
		[Address(RVA = "0x61D0260", Offset = "0x61CF260", VA = "0x61D0260")]
		set
		{
		}
	}

	[Token(Token = "0x17000571")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001886")]
		[Address(RVA = "0x61D0290", Offset = "0x61CF290", VA = "0x61D0290", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001883")]
	[Address(RVA = "0x61D0200", Offset = "0x61CF200", VA = "0x61D0200")]
	public FtpCachePolicyElement()
	{
	}

	[Token(Token = "0x6001887")]
	[Address(RVA = "0x61D02C0", Offset = "0x61CF2C0", VA = "0x61D02C0", Slot = "5")]
	protected override void DeserializeElement(XmlReader reader, bool serializeCollectionKey)
	{
	}

	[Token(Token = "0x6001888")]
	[Address(RVA = "0x61D02F0", Offset = "0x61CF2F0", VA = "0x61D02F0", Slot = "9")]
	protected override void Reset(ConfigurationElement parentElement)
	{
	}
}
