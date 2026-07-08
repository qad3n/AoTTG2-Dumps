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
		[Address(RVA = "0x45CEA60", Offset = "0x45CEA60", VA = "0x45CEA60")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x1700053F")]
	public TimeSpan EntityBody
	{
		[Token(Token = "0x60017B1")]
		[Address(RVA = "0x45CEA90", Offset = "0x45CEA90", VA = "0x45CEA90")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000540")]
	public TimeSpan HeaderWait
	{
		[Token(Token = "0x60017B2")]
		[Address(RVA = "0x45CEAC0", Offset = "0x45CEAC0", VA = "0x45CEAC0")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000541")]
	public TimeSpan IdleConnection
	{
		[Token(Token = "0x60017B3")]
		[Address(RVA = "0x45CEAF0", Offset = "0x45CEAF0", VA = "0x45CEAF0")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000542")]
	public long MinSendBytesPerSecond
	{
		[Token(Token = "0x60017B4")]
		[Address(RVA = "0x45CEB20", Offset = "0x45CEB20", VA = "0x45CEB20")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000543")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017B5")]
		[Address(RVA = "0x45CEB50", Offset = "0x45CEB50", VA = "0x45CEB50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000544")]
	public TimeSpan RequestQueue
	{
		[Token(Token = "0x60017B6")]
		[Address(RVA = "0x45CEB80", Offset = "0x45CEB80", VA = "0x45CEB80")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x60017AF")]
	[Address(RVA = "0x45CEA30", Offset = "0x45CEA30", VA = "0x45CEA30")]
	public HttpListenerTimeoutsElement()
	{
	}
}
