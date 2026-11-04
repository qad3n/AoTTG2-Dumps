// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.HttpListenerElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003EE")]
public sealed class HttpListenerElement : ConfigurationElement
{
	[Token(Token = "0x170005A5")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001A50")]
		[Address(RVA = "0x282AE70", Offset = "0x2829470", VA = "0x18282AE70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005A6")]
	public HttpListenerTimeoutsElement Timeouts
	{
		[Token(Token = "0x6001A51")]
		[Address(RVA = "0x282AEA0", Offset = "0x28294A0", VA = "0x18282AEA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005A7")]
	public bool UnescapeRequestUrl
	{
		[Token(Token = "0x6001A52")]
		[Address(RVA = "0x282AED0", Offset = "0x28294D0", VA = "0x18282AED0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A4F")]
	[Address(RVA = "0x282AE40", Offset = "0x2829440", VA = "0x18282AE40")]
	public HttpListenerElement()
	{
	}
}
