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

[Token(Token = "0x20003AB")]
public sealed class HttpListenerTimeoutsElement : ConfigurationElement
{
	[Token(Token = "0x1700057A")]
	public TimeSpan DrainEntityBody
	{
		[Token(Token = "0x600189A")]
		[Address(RVA = "0x61D0650", Offset = "0x61CF650", VA = "0x61D0650")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x1700057B")]
	public TimeSpan EntityBody
	{
		[Token(Token = "0x600189B")]
		[Address(RVA = "0x61D0680", Offset = "0x61CF680", VA = "0x61D0680")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x1700057C")]
	public TimeSpan HeaderWait
	{
		[Token(Token = "0x600189C")]
		[Address(RVA = "0x61D06B0", Offset = "0x61CF6B0", VA = "0x61D06B0")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x1700057D")]
	public TimeSpan IdleConnection
	{
		[Token(Token = "0x600189D")]
		[Address(RVA = "0x61D06E0", Offset = "0x61CF6E0", VA = "0x61D06E0")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x1700057E")]
	public long MinSendBytesPerSecond
	{
		[Token(Token = "0x600189E")]
		[Address(RVA = "0x61D0710", Offset = "0x61CF710", VA = "0x61D0710")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700057F")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600189F")]
		[Address(RVA = "0x61D0740", Offset = "0x61CF740", VA = "0x61D0740", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000580")]
	public TimeSpan RequestQueue
	{
		[Token(Token = "0x60018A0")]
		[Address(RVA = "0x61D0770", Offset = "0x61CF770", VA = "0x61D0770")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x6001899")]
	[Address(RVA = "0x61D0620", Offset = "0x61CF620", VA = "0x61D0620")]
	public HttpListenerTimeoutsElement()
	{
	}
}
