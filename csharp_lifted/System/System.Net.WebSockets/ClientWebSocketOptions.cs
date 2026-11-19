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

[Token(Token = "0x200037C")]
public sealed class ClientWebSocketOptions
{
	[Token(Token = "0x4000FAE")]
	[FieldOffset(Offset = "0x10")]
	private bool _isReadOnly;

	[Token(Token = "0x4000FAF")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<string> _requestedSubProtocols;

	[Token(Token = "0x4000FB0")]
	[FieldOffset(Offset = "0x20")]
	private readonly WebHeaderCollection _requestHeaders;

	[Token(Token = "0x4000FB1")]
	[FieldOffset(Offset = "0x28")]
	private TimeSpan _keepAliveInterval;

	[Token(Token = "0x4000FB2")]
	[FieldOffset(Offset = "0x30")]
	private IWebProxy _proxy;

	[Token(Token = "0x4000FB3")]
	[FieldOffset(Offset = "0x38")]
	private X509CertificateCollection _clientCertificates;

	[Token(Token = "0x4000FB4")]
	[FieldOffset(Offset = "0x40")]
	private CookieContainer _cookies;

	[Token(Token = "0x4000FB5")]
	[FieldOffset(Offset = "0x48")]
	private int _receiveBufferSize;

	[Token(Token = "0x4000FB6")]
	[FieldOffset(Offset = "0x4C")]
	private int _sendBufferSize;

	[Token(Token = "0x4000FB7")]
	[FieldOffset(Offset = "0x50")]
	private ArraySegment<byte>? _buffer;

	[Token(Token = "0x17000530")]
	internal WebHeaderCollection RequestHeaders
	{
		[Token(Token = "0x60017BC")]
		[Address(RVA = "0x61CCF60", Offset = "0x61CBF60", VA = "0x61CCF60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000531")]
	internal List<string> RequestedSubProtocols
	{
		[Token(Token = "0x60017BD")]
		[Address(RVA = "0x61CCF70", Offset = "0x61CBF70", VA = "0x61CCF70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000532")]
	public IWebProxy Proxy
	{
		[Token(Token = "0x60017BE")]
		[Address(RVA = "0x61CC050", Offset = "0x61CB050", VA = "0x61CC050")]
		set
		{
		}
	}

	[Token(Token = "0x17000533")]
	public X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x60017BF")]
		[Address(RVA = "0x61C9610", Offset = "0x61C8610", VA = "0x61C9610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000534")]
	public CookieContainer Cookies
	{
		[Token(Token = "0x60017C0")]
		[Address(RVA = "0x61CCFD0", Offset = "0x61CBFD0", VA = "0x61CCFD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000535")]
	public TimeSpan KeepAliveInterval
	{
		[Token(Token = "0x60017C2")]
		[Address(RVA = "0x61CD270", Offset = "0x61CC270", VA = "0x61CD270")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000536")]
	internal int ReceiveBufferSize
	{
		[Token(Token = "0x60017C3")]
		[Address(RVA = "0x61CD280", Offset = "0x61CC280", VA = "0x61CD280")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000537")]
	internal int SendBufferSize
	{
		[Token(Token = "0x60017C4")]
		[Address(RVA = "0x61CD290", Offset = "0x61CC290", VA = "0x61CD290")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000538")]
	internal ArraySegment<byte>? Buffer
	{
		[Token(Token = "0x60017C5")]
		[Address(RVA = "0x61CD2A0", Offset = "0x61CC2A0", VA = "0x61CD2A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017BB")]
	[Address(RVA = "0x61CBF10", Offset = "0x61CAF10", VA = "0x61CBF10")]
	internal ClientWebSocketOptions()
	{
	}

	[Token(Token = "0x60017C1")]
	[Address(RVA = "0x61CCFE0", Offset = "0x61CBFE0", VA = "0x61CCFE0")]
	public void AddSubProtocol(string subProtocol)
	{
	}

	[Token(Token = "0x60017C6")]
	[Address(RVA = "0x61CC450", Offset = "0x61CB450", VA = "0x61CC450")]
	internal void SetToReadOnly()
	{
	}

	[Token(Token = "0x60017C7")]
	[Address(RVA = "0x61CCF80", Offset = "0x61CBF80", VA = "0x61CCF80")]
	private void ThrowIfReadOnly()
	{
	}
}
