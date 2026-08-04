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

[Token(Token = "0x2000395")]
public sealed class HttpWebRequestElement : ConfigurationElement
{
	[Token(Token = "0x17000545")]
	public int MaximumErrorResponseLength
	{
		[Token(Token = "0x60017B8")]
		[Address(RVA = "0x48F3CE0", Offset = "0x48F3CE0", VA = "0x48F3CE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60017B9")]
		[Address(RVA = "0x48F3D10", Offset = "0x48F3D10", VA = "0x48F3D10")]
		set
		{
		}
	}

	[Token(Token = "0x17000546")]
	public int MaximumResponseHeadersLength
	{
		[Token(Token = "0x60017BA")]
		[Address(RVA = "0x48F3D40", Offset = "0x48F3D40", VA = "0x48F3D40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60017BB")]
		[Address(RVA = "0x48F3D70", Offset = "0x48F3D70", VA = "0x48F3D70")]
		set
		{
		}
	}

	[Token(Token = "0x17000547")]
	public int MaximumUnauthorizedUploadLength
	{
		[Token(Token = "0x60017BC")]
		[Address(RVA = "0x48F3DA0", Offset = "0x48F3DA0", VA = "0x48F3DA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60017BD")]
		[Address(RVA = "0x48F3DD0", Offset = "0x48F3DD0", VA = "0x48F3DD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000548")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017BE")]
		[Address(RVA = "0x48F3E00", Offset = "0x48F3E00", VA = "0x48F3E00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000549")]
	public bool UseUnsafeHeaderParsing
	{
		[Token(Token = "0x60017BF")]
		[Address(RVA = "0x48F3E30", Offset = "0x48F3E30", VA = "0x48F3E30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60017C0")]
		[Address(RVA = "0x48F3E60", Offset = "0x48F3E60", VA = "0x48F3E60")]
		set
		{
		}
	}

	[Token(Token = "0x60017B7")]
	[Address(RVA = "0x48F3CB0", Offset = "0x48F3CB0", VA = "0x48F3CB0")]
	public HttpWebRequestElement()
	{
	}

	[Token(Token = "0x60017C1")]
	[Address(RVA = "0x48F3E90", Offset = "0x48F3E90", VA = "0x48F3E90", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
