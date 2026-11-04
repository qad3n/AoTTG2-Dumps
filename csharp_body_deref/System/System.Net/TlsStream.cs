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

[Token(Token = "0x20002A1")]
internal class TlsStream : NetworkStream
{
	[Token(Token = "0x4000942")]
	[FieldOffset(Offset = "0x48")]
	private SslStream _sslStream;

	[Token(Token = "0x4000943")]
	[FieldOffset(Offset = "0x50")]
	private string _host;

	[Token(Token = "0x4000944")]
	[FieldOffset(Offset = "0x58")]
	private X509CertificateCollection _clientCertificates;

	[Token(Token = "0x600126C")]
	[Address(RVA = "0x29059C0", Offset = "0x2903FC0", VA = "0x1829059C0")]
	public TlsStream(NetworkStream stream, Socket socket, string host, X509CertificateCollection clientCertificates)
	{
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x29055F0", Offset = "0x2903BF0", VA = "0x1829055F0")]
	public void AuthenticateAsClient()
	{
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x2905700", Offset = "0x2903D00", VA = "0x182905700")]
	public IAsyncResult BeginAuthenticateAsClient(AsyncCallback asyncCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x600126F")]
	[Address(RVA = "0x29058D0", Offset = "0x2903ED0", VA = "0x1829058D0")]
	public void EndAuthenticateAsClient(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001270")]
	[Address(RVA = "0x2905860", Offset = "0x2903E60", VA = "0x182905860", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001271")]
	[Address(RVA = "0x2905930", Offset = "0x2903F30", VA = "0x182905930", Slot = "27")]
	public override void EndWrite(IAsyncResult result)
	{
	}

	[Token(Token = "0x6001272")]
	[Address(RVA = "0x2905990", Offset = "0x2903F90", VA = "0x182905990", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001273")]
	[Address(RVA = "0x2905960", Offset = "0x2903F60", VA = "0x182905960", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x6001274")]
	[Address(RVA = "0x2905830", Offset = "0x2903E30", VA = "0x182905830", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001275")]
	[Address(RVA = "0x2905900", Offset = "0x2903F00", VA = "0x182905900", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6001276")]
	[Address(RVA = "0x2905890", Offset = "0x2903E90", VA = "0x182905890", Slot = "18")]
	public override void Close()
	{
	}
}
