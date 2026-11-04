// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.WebUtilityElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003FD")]
public sealed class WebUtilityElement : ConfigurationElement
{
	[Token(Token = "0x170005F1")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001AD5")]
		[Address(RVA = "0x282CFD0", Offset = "0x282B5D0", VA = "0x18282CFD0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F2")]
	public UnicodeDecodingConformance UnicodeDecodingConformance
	{
		[Token(Token = "0x6001AD6")]
		[Address(RVA = "0x282D000", Offset = "0x282B600", VA = "0x18282D000")]
		get
		{
			return default(UnicodeDecodingConformance);
		}
		[Token(Token = "0x6001AD7")]
		[Address(RVA = "0x282D060", Offset = "0x282B660", VA = "0x18282D060")]
		set
		{
		}
	}

	[Token(Token = "0x170005F3")]
	public UnicodeEncodingConformance UnicodeEncodingConformance
	{
		[Token(Token = "0x6001AD8")]
		[Address(RVA = "0x282D030", Offset = "0x282B630", VA = "0x18282D030")]
		get
		{
			return default(UnicodeEncodingConformance);
		}
		[Token(Token = "0x6001AD9")]
		[Address(RVA = "0x282D090", Offset = "0x282B690", VA = "0x18282D090")]
		set
		{
		}
	}

	[Token(Token = "0x6001AD4")]
	[Address(RVA = "0x282CFA0", Offset = "0x282B5A0", VA = "0x18282CFA0")]
	public WebUtilityElement()
	{
	}
}
