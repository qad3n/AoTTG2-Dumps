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
		[Address(RVA = "0x469FA90", Offset = "0x469FA90", VA = "0x469FA90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000305")]
	internal List<string> RequestedSubProtocols
	{
		[Token(Token = "0x6000D74")]
		[Address(RVA = "0x469FAA0", Offset = "0x469FAA0", VA = "0x469FAA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000306")]
	public IWebProxy Proxy
	{
		[Token(Token = "0x6000D75")]
		[Address(RVA = "0x469E730", Offset = "0x469E730", VA = "0x469E730")]
		set
		{
		}
	}

	[Token(Token = "0x17000307")]
	public X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x6000D76")]
		[Address(RVA = "0x469FB00", Offset = "0x469FB00", VA = "0x469FB00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000308")]
	public CookieContainer Cookies
	{
		[Token(Token = "0x6000D77")]
		[Address(RVA = "0x469FB80", Offset = "0x469FB80", VA = "0x469FB80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000309")]
	public TimeSpan KeepAliveInterval
	{
		[Token(Token = "0x6000D79")]
		[Address(RVA = "0x469FE40", Offset = "0x469FE40", VA = "0x469FE40")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x1700030A")]
	internal int ReceiveBufferSize
	{
		[Token(Token = "0x6000D7A")]
		[Address(RVA = "0x469FE50", Offset = "0x469FE50", VA = "0x469FE50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700030B")]
	internal int SendBufferSize
	{
		[Token(Token = "0x6000D7B")]
		[Address(RVA = "0x469FE60", Offset = "0x469FE60", VA = "0x469FE60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700030C")]
	internal ArraySegment<byte>? Buffer
	{
		[Token(Token = "0x6000D7C")]
		[Address(RVA = "0x469FE70", Offset = "0x469FE70", VA = "0x469FE70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x469E5F0", Offset = "0x469E5F0", VA = "0x469E5F0")]
	internal ClientWebSocketOptions()
	{
	}

	[Token(Token = "0x6000D78")]
	[Address(RVA = "0x469FB90", Offset = "0x469FB90", VA = "0x469FB90")]
	public void AddSubProtocol(string subProtocol)
	{
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x469EB90", Offset = "0x469EB90", VA = "0x469EB90")]
	internal void SetToReadOnly()
	{
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x469FAB0", Offset = "0x469FAB0", VA = "0x469FAB0")]
	private void ThrowIfReadOnly()
	{
	}
}
