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

[Token(Token = "0x2000393")]
public sealed class HttpListenerElement : ConfigurationElement
{
	[Token(Token = "0x1700053B")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017AC")]
		[Address(RVA = "0x48F3AA0", Offset = "0x48F3AA0", VA = "0x48F3AA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053C")]
	public HttpListenerTimeoutsElement Timeouts
	{
		[Token(Token = "0x60017AD")]
		[Address(RVA = "0x48F3AD0", Offset = "0x48F3AD0", VA = "0x48F3AD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053D")]
	public bool UnescapeRequestUrl
	{
		[Token(Token = "0x60017AE")]
		[Address(RVA = "0x48F3B00", Offset = "0x48F3B00", VA = "0x48F3B00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60017AB")]
	[Address(RVA = "0x48F3A70", Offset = "0x48F3A70", VA = "0x48F3A70")]
	public HttpListenerElement()
	{
	}
}
