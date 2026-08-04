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

[Token(Token = "0x20003A2")]
public sealed class WebUtilityElement : ConfigurationElement
{
	[Token(Token = "0x17000587")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001831")]
		[Address(RVA = "0x48F5390", Offset = "0x48F5390", VA = "0x48F5390", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000588")]
	public UnicodeDecodingConformance UnicodeDecodingConformance
	{
		[Token(Token = "0x6001832")]
		[Address(RVA = "0x48F53C0", Offset = "0x48F53C0", VA = "0x48F53C0")]
		get
		{
			return default(UnicodeDecodingConformance);
		}
		[Token(Token = "0x6001833")]
		[Address(RVA = "0x48F53F0", Offset = "0x48F53F0", VA = "0x48F53F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000589")]
	public UnicodeEncodingConformance UnicodeEncodingConformance
	{
		[Token(Token = "0x6001834")]
		[Address(RVA = "0x48F5420", Offset = "0x48F5420", VA = "0x48F5420")]
		get
		{
			return default(UnicodeEncodingConformance);
		}
		[Token(Token = "0x6001835")]
		[Address(RVA = "0x48F5450", Offset = "0x48F5450", VA = "0x48F5450")]
		set
		{
		}
	}

	[Token(Token = "0x6001830")]
	[Address(RVA = "0x48F5360", Offset = "0x48F5360", VA = "0x48F5360")]
	public WebUtilityElement()
	{
	}
}
