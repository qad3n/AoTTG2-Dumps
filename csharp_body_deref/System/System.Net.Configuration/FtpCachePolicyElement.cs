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

[Token(Token = "0x20003EC")]
public sealed class FtpCachePolicyElement : ConfigurationElement
{
	[Token(Token = "0x1700059E")]
	public RequestCacheLevel PolicyLevel
	{
		[Token(Token = "0x6001A3E")]
		[Address(RVA = "0x282AB70", Offset = "0x2829170", VA = "0x18282AB70")]
		get
		{
			return default(RequestCacheLevel);
		}
		[Token(Token = "0x6001A3F")]
		[Address(RVA = "0x282ABD0", Offset = "0x28291D0", VA = "0x18282ABD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700059F")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001A40")]
		[Address(RVA = "0x282ABA0", Offset = "0x28291A0", VA = "0x18282ABA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001A3D")]
	[Address(RVA = "0x282AB40", Offset = "0x2829140", VA = "0x18282AB40")]
	public FtpCachePolicyElement()
	{
	}

	[Token(Token = "0x6001A41")]
	[Address(RVA = "0x282AAE0", Offset = "0x28290E0", VA = "0x18282AAE0", Slot = "5")]
	protected override void DeserializeElement(XmlReader reader, bool serializeCollectionKey)
	{
	}

	[Token(Token = "0x6001A42")]
	[Address(RVA = "0x282AB10", Offset = "0x2829110", VA = "0x18282AB10", Slot = "9")]
	protected override void Reset(ConfigurationElement parentElement)
	{
	}
}
