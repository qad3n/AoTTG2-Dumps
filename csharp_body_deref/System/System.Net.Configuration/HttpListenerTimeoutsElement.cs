// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.HttpListenerTimeoutsElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003EF")]
public sealed class HttpListenerTimeoutsElement : ConfigurationElement
{
	[Token(Token = "0x170005A8")]
	public TimeSpan DrainEntityBody
	{
		[Token(Token = "0x6001A54")]
		[Address(RVA = "0x282AF30", Offset = "0x2829530", VA = "0x18282AF30")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x170005A9")]
	public TimeSpan EntityBody
	{
		[Token(Token = "0x6001A55")]
		[Address(RVA = "0x282AF60", Offset = "0x2829560", VA = "0x18282AF60")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x170005AA")]
	public TimeSpan HeaderWait
	{
		[Token(Token = "0x6001A56")]
		[Address(RVA = "0x282AF90", Offset = "0x2829590", VA = "0x18282AF90")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x170005AB")]
	public TimeSpan IdleConnection
	{
		[Token(Token = "0x6001A57")]
		[Address(RVA = "0x282AFC0", Offset = "0x28295C0", VA = "0x18282AFC0")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x170005AC")]
	public long MinSendBytesPerSecond
	{
		[Token(Token = "0x6001A58")]
		[Address(RVA = "0x282AFF0", Offset = "0x28295F0", VA = "0x18282AFF0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170005AD")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001A59")]
		[Address(RVA = "0x282B020", Offset = "0x2829620", VA = "0x18282B020", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005AE")]
	public TimeSpan RequestQueue
	{
		[Token(Token = "0x6001A5A")]
		[Address(RVA = "0x282B050", Offset = "0x2829650", VA = "0x18282B050")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x6001A53")]
	[Address(RVA = "0x282AF00", Offset = "0x2829500", VA = "0x18282AF00")]
	public HttpListenerTimeoutsElement()
	{
	}
}
