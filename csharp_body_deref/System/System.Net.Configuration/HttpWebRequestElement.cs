// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.HttpWebRequestElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003AC")]
public sealed class HttpWebRequestElement : ConfigurationElement
{
	[Token(Token = "0x17000581")]
	public int MaximumErrorResponseLength
	{
		[Token(Token = "0x60018A2")]
		[Address(RVA = "0x61D07D0", Offset = "0x61CF7D0", VA = "0x61D07D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60018A3")]
		[Address(RVA = "0x61D0800", Offset = "0x61CF800", VA = "0x61D0800")]
		set
		{
		}
	}

	[Token(Token = "0x17000582")]
	public int MaximumResponseHeadersLength
	{
		[Token(Token = "0x60018A4")]
		[Address(RVA = "0x61D0830", Offset = "0x61CF830", VA = "0x61D0830")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60018A5")]
		[Address(RVA = "0x61D0860", Offset = "0x61CF860", VA = "0x61D0860")]
		set
		{
		}
	}

	[Token(Token = "0x17000583")]
	public int MaximumUnauthorizedUploadLength
	{
		[Token(Token = "0x60018A6")]
		[Address(RVA = "0x61D0890", Offset = "0x61CF890", VA = "0x61D0890")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60018A7")]
		[Address(RVA = "0x61D08C0", Offset = "0x61CF8C0", VA = "0x61D08C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000584")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60018A8")]
		[Address(RVA = "0x61D08F0", Offset = "0x61CF8F0", VA = "0x61D08F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000585")]
	public bool UseUnsafeHeaderParsing
	{
		[Token(Token = "0x60018A9")]
		[Address(RVA = "0x61D0920", Offset = "0x61CF920", VA = "0x61D0920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60018AA")]
		[Address(RVA = "0x61D0950", Offset = "0x61CF950", VA = "0x61D0950")]
		set
		{
		}
	}

	[Token(Token = "0x60018A1")]
	[Address(RVA = "0x61D07A0", Offset = "0x61CF7A0", VA = "0x61D07A0")]
	public HttpWebRequestElement()
	{
	}

	[Token(Token = "0x60018AB")]
	[Address(RVA = "0x61D0980", Offset = "0x61CF980", VA = "0x61D0980", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
