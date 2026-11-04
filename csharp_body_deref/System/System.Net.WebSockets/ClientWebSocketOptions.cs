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

[Token(Token = "0x20003C0")]
public sealed class ClientWebSocketOptions
{
	[Token(Token = "0x4001096")]
	[FieldOffset(Offset = "0x10")]
	private bool _isReadOnly;

	[Token(Token = "0x4001097")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<string> _requestedSubProtocols;

	[Token(Token = "0x4001098")]
	[FieldOffset(Offset = "0x20")]
	private readonly WebHeaderCollection _requestHeaders;

	[Token(Token = "0x4001099")]
	[FieldOffset(Offset = "0x28")]
	private TimeSpan _keepAliveInterval;

	[Token(Token = "0x400109A")]
	[FieldOffset(Offset = "0x30")]
	private IWebProxy _proxy;

	[Token(Token = "0x400109B")]
	[FieldOffset(Offset = "0x38")]
	private X509CertificateCollection _clientCertificates;

	[Token(Token = "0x400109C")]
	[FieldOffset(Offset = "0x40")]
	private CookieContainer _cookies;

	[Token(Token = "0x400109D")]
	[FieldOffset(Offset = "0x48")]
	private int _receiveBufferSize;

	[Token(Token = "0x400109E")]
	[FieldOffset(Offset = "0x4C")]
	private int _sendBufferSize;

	[Token(Token = "0x400109F")]
	[FieldOffset(Offset = "0x50")]
	private ArraySegment<byte>? _buffer;

	[Token(Token = "0x1700055D")]
	internal WebHeaderCollection RequestHeaders
	{
		[Token(Token = "0x6001975")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055E")]
	internal List<string> RequestedSubProtocols
	{
		[Token(Token = "0x6001976")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055F")]
	public IWebProxy Proxy
	{
		[Token(Token = "0x6001977")]
		[Address(RVA = "0x28111D0", Offset = "0x280F7D0", VA = "0x1828111D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000560")]
	public X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x6001978")]
		[Address(RVA = "0x2811160", Offset = "0x280F760", VA = "0x182811160")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000561")]
	public CookieContainer Cookies
	{
		[Token(Token = "0x6001979")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000562")]
	public TimeSpan KeepAliveInterval
	{
		[Token(Token = "0x600197B")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000563")]
	internal int ReceiveBufferSize
	{
		[Token(Token = "0x600197C")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000564")]
	internal int SendBufferSize
	{
		[Token(Token = "0x600197D")]
		[Address(RVA = "0x58A610", Offset = "0x588C10", VA = "0x18058A610")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000565")]
	internal ArraySegment<byte>? Buffer
	{
		[Token(Token = "0x600197E")]
		[Address(RVA = "0xD736B0", Offset = "0xD71CB0", VA = "0x180D736B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001974")]
	[Address(RVA = "0x2811060", Offset = "0x280F660", VA = "0x182811060")]
	internal ClientWebSocketOptions()
	{
	}

	[Token(Token = "0x600197A")]
	[Address(RVA = "0x2810D50", Offset = "0x280F350", VA = "0x182810D50")]
	public void AddSubProtocol(string subProtocol)
	{
	}

	[Token(Token = "0x600197F")]
	[Address(RVA = "0xB3C020", Offset = "0xB3A620", VA = "0x180B3C020")]
	internal void SetToReadOnly()
	{
	}

	[Token(Token = "0x6001980")]
	[Address(RVA = "0x2810FF0", Offset = "0x280F5F0", VA = "0x182810FF0")]
	private void ThrowIfReadOnly()
	{
	}
}
