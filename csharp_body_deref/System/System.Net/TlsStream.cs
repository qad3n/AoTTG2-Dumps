// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.TlsStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4948D60", Offset = "0x4948D60", VA = "0x4948D60")]
	public TlsStream(NetworkStream stream, Socket socket, string host, X509CertificateCollection clientCertificates)
	{
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x4948E40", Offset = "0x4948E40", VA = "0x4948E40")]
	public void AuthenticateAsClient()
	{
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x4948F90", Offset = "0x4948F90", VA = "0x4948F90")]
	public IAsyncResult BeginAuthenticateAsClient(AsyncCallback asyncCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x4949100", Offset = "0x4949100", VA = "0x4949100")]
	public void EndAuthenticateAsClient(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x4949130", Offset = "0x4949130", VA = "0x4949130", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x4949160", Offset = "0x4949160", VA = "0x4949160", Slot = "27")]
	public override void EndWrite(IAsyncResult result)
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x4949190", Offset = "0x4949190", VA = "0x4949190", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x49491C0", Offset = "0x49491C0", VA = "0x49491C0", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x49491F0", Offset = "0x49491F0", VA = "0x49491F0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x4949220", Offset = "0x4949220", VA = "0x4949220", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x4949250", Offset = "0x4949250", VA = "0x4949250", Slot = "18")]
	public override void Close()
	{
	}
}
