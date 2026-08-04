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

[Token(Token = "0x2000394")]
public sealed class HttpListenerTimeoutsElement : ConfigurationElement
{
	[Token(Token = "0x1700053E")]
	public TimeSpan DrainEntityBody
	{
		[Token(Token = "0x60017B0")]
		[Address(RVA = "0x48F3B60", Offset = "0x48F3B60", VA = "0x48F3B60")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x1700053F")]
	public TimeSpan EntityBody
	{
		[Token(Token = "0x60017B1")]
		[Address(RVA = "0x48F3B90", Offset = "0x48F3B90", VA = "0x48F3B90")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000540")]
	public TimeSpan HeaderWait
	{
		[Token(Token = "0x60017B2")]
		[Address(RVA = "0x48F3BC0", Offset = "0x48F3BC0", VA = "0x48F3BC0")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000541")]
	public TimeSpan IdleConnection
	{
		[Token(Token = "0x60017B3")]
		[Address(RVA = "0x48F3BF0", Offset = "0x48F3BF0", VA = "0x48F3BF0")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000542")]
	public long MinSendBytesPerSecond
	{
		[Token(Token = "0x60017B4")]
		[Address(RVA = "0x48F3C20", Offset = "0x48F3C20", VA = "0x48F3C20")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000543")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017B5")]
		[Address(RVA = "0x48F3C50", Offset = "0x48F3C50", VA = "0x48F3C50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000544")]
	public TimeSpan RequestQueue
	{
		[Token(Token = "0x60017B6")]
		[Address(RVA = "0x48F3C80", Offset = "0x48F3C80", VA = "0x48F3C80")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x60017AF")]
	[Address(RVA = "0x48F3B30", Offset = "0x48F3B30", VA = "0x48F3B30")]
	public HttpListenerTimeoutsElement()
	{
	}
}
