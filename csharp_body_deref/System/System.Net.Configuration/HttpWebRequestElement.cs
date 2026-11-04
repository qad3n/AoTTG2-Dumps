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

[Token(Token = "0x20003F0")]
public sealed class HttpWebRequestElement : ConfigurationElement
{
	[Token(Token = "0x170005AF")]
	public int MaximumErrorResponseLength
	{
		[Token(Token = "0x6001A5C")]
		[Address(RVA = "0x282B0E0", Offset = "0x28296E0", VA = "0x18282B0E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001A5D")]
		[Address(RVA = "0x282B1D0", Offset = "0x28297D0", VA = "0x18282B1D0")]
		set
		{
		}
	}

	[Token(Token = "0x170005B0")]
	public int MaximumResponseHeadersLength
	{
		[Token(Token = "0x6001A5E")]
		[Address(RVA = "0x282B110", Offset = "0x2829710", VA = "0x18282B110")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001A5F")]
		[Address(RVA = "0x282B200", Offset = "0x2829800", VA = "0x18282B200")]
		set
		{
		}
	}

	[Token(Token = "0x170005B1")]
	public int MaximumUnauthorizedUploadLength
	{
		[Token(Token = "0x6001A60")]
		[Address(RVA = "0x282B140", Offset = "0x2829740", VA = "0x18282B140")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001A61")]
		[Address(RVA = "0x282B230", Offset = "0x2829830", VA = "0x18282B230")]
		set
		{
		}
	}

	[Token(Token = "0x170005B2")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001A62")]
		[Address(RVA = "0x282B170", Offset = "0x2829770", VA = "0x18282B170", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005B3")]
	public bool UseUnsafeHeaderParsing
	{
		[Token(Token = "0x6001A63")]
		[Address(RVA = "0x282B1A0", Offset = "0x28297A0", VA = "0x18282B1A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A64")]
		[Address(RVA = "0x282B260", Offset = "0x2829860", VA = "0x18282B260")]
		set
		{
		}
	}

	[Token(Token = "0x6001A5B")]
	[Address(RVA = "0x282B0B0", Offset = "0x28296B0", VA = "0x18282B0B0")]
	public HttpWebRequestElement()
	{
	}

	[Token(Token = "0x6001A65")]
	[Address(RVA = "0x282B080", Offset = "0x2829680", VA = "0x18282B080", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
