using System.Net.Security;
using System.Net.Sockets;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000119")]
internal class TlsStream : NetworkStream
{
	[Token(Token = "0x400052C")]
	[FieldOffset(Offset = "0x48")]
	private SslStream _sslStream;

	[Token(Token = "0x400052D")]
	[FieldOffset(Offset = "0x50")]
	private string _host;

	[Token(Token = "0x400052E")]
	[FieldOffset(Offset = "0x58")]
	private X509CertificateCollection _clientCertificates;

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x4623C60", Offset = "0x4623C60", VA = "0x4623C60")]
	public TlsStream(NetworkStream stream, Socket socket, string host, X509CertificateCollection clientCertificates)
	{
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x4623D40", Offset = "0x4623D40", VA = "0x4623D40")]
	public void AuthenticateAsClient()
	{
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x4623E90", Offset = "0x4623E90", VA = "0x4623E90")]
	public IAsyncResult BeginAuthenticateAsClient(AsyncCallback asyncCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x4624000", Offset = "0x4624000", VA = "0x4624000")]
	public void EndAuthenticateAsClient(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x4624030", Offset = "0x4624030", VA = "0x4624030", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x4624060", Offset = "0x4624060", VA = "0x4624060", Slot = "27")]
	public override void EndWrite(IAsyncResult result)
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x4624090", Offset = "0x4624090", VA = "0x4624090", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x46240C0", Offset = "0x46240C0", VA = "0x46240C0", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x46240F0", Offset = "0x46240F0", VA = "0x46240F0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x4624120", Offset = "0x4624120", VA = "0x4624120", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x4624150", Offset = "0x4624150", VA = "0x4624150", Slot = "18")]
	public override void Close()
	{
	}
}
