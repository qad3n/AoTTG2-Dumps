// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.ClientWebSocketOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x2000221")]
public sealed class ClientWebSocketOptions
{
	[Token(Token = "0x4000C0C")]
	[FieldOffset(Offset = "0x10")]
	private bool _isReadOnly;

	[Token(Token = "0x4000C0D")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<string> _requestedSubProtocols;

	[Token(Token = "0x4000C0E")]
	[FieldOffset(Offset = "0x20")]
	private readonly WebHeaderCollection _requestHeaders;

	[Token(Token = "0x4000C0F")]
	[FieldOffset(Offset = "0x28")]
	private TimeSpan _keepAliveInterval;

	[Token(Token = "0x4000C10")]
	[FieldOffset(Offset = "0x30")]
	private IWebProxy _proxy;

	[Token(Token = "0x4000C11")]
	[FieldOffset(Offset = "0x38")]
	private X509CertificateCollection _clientCertificates;

	[Token(Token = "0x4000C12")]
	[FieldOffset(Offset = "0x40")]
	private CookieContainer _cookies;

	[Token(Token = "0x4000C13")]
	[FieldOffset(Offset = "0x48")]
	private int _receiveBufferSize;

	[Token(Token = "0x4000C14")]
	[FieldOffset(Offset = "0x4C")]
	private int _sendBufferSize;

	[Token(Token = "0x4000C15")]
	[FieldOffset(Offset = "0x50")]
	private ArraySegment<byte>? _buffer;

	[Token(Token = "0x17000304")]
	internal WebHeaderCollection RequestHeaders
	{
		[Token(Token = "0x6000D73")]
		[Address(RVA = "0x49C4B90", Offset = "0x49C4B90", VA = "0x49C4B90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000305")]
	internal List<string> RequestedSubProtocols
	{
		[Token(Token = "0x6000D74")]
		[Address(RVA = "0x49C4BA0", Offset = "0x49C4BA0", VA = "0x49C4BA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000306")]
	public IWebProxy Proxy
	{
		[Token(Token = "0x6000D75")]
		[Address(RVA = "0x49C3830", Offset = "0x49C3830", VA = "0x49C3830")]
		set
		{
		}
	}

	[Token(Token = "0x17000307")]
	public X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x6000D76")]
		[Address(RVA = "0x49C4C00", Offset = "0x49C4C00", VA = "0x49C4C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000308")]
	public CookieContainer Cookies
	{
		[Token(Token = "0x6000D77")]
		[Address(RVA = "0x49C4C80", Offset = "0x49C4C80", VA = "0x49C4C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000309")]
	public TimeSpan KeepAliveInterval
	{
		[Token(Token = "0x6000D79")]
		[Address(RVA = "0x49C4F40", Offset = "0x49C4F40", VA = "0x49C4F40")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x1700030A")]
	internal int ReceiveBufferSize
	{
		[Token(Token = "0x6000D7A")]
		[Address(RVA = "0x49C4F50", Offset = "0x49C4F50", VA = "0x49C4F50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700030B")]
	internal int SendBufferSize
	{
		[Token(Token = "0x6000D7B")]
		[Address(RVA = "0x49C4F60", Offset = "0x49C4F60", VA = "0x49C4F60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700030C")]
	internal ArraySegment<byte>? Buffer
	{
		[Token(Token = "0x6000D7C")]
		[Address(RVA = "0x49C4F70", Offset = "0x49C4F70", VA = "0x49C4F70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x49C36F0", Offset = "0x49C36F0", VA = "0x49C36F0")]
	internal ClientWebSocketOptions()
	{
	}

	[Token(Token = "0x6000D78")]
	[Address(RVA = "0x49C4C90", Offset = "0x49C4C90", VA = "0x49C4C90")]
	public void AddSubProtocol(string subProtocol)
	{
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x49C3C90", Offset = "0x49C3C90", VA = "0x49C3C90")]
	internal void SetToReadOnly()
	{
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x49C4BB0", Offset = "0x49C4BB0", VA = "0x49C4BB0")]
	private void ThrowIfReadOnly()
	{
	}
}
