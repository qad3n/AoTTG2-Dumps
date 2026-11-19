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

[Token(Token = "0x2000262")]
internal class TlsStream : NetworkStream
{
	[Token(Token = "0x4000873")]
	[FieldOffset(Offset = "0x48")]
	private SslStream _sslStream;

	[Token(Token = "0x4000874")]
	[FieldOffset(Offset = "0x50")]
	private string _host;

	[Token(Token = "0x4000875")]
	[FieldOffset(Offset = "0x58")]
	private X509CertificateCollection _clientCertificates;

	[Token(Token = "0x60010AE")]
	[Address(RVA = "0x6291E50", Offset = "0x6290E50", VA = "0x6291E50")]
	public TlsStream(NetworkStream stream, Socket socket, string host, X509CertificateCollection clientCertificates)
	{
	}

	[Token(Token = "0x60010AF")]
	[Address(RVA = "0x6291F30", Offset = "0x6290F30", VA = "0x6291F30")]
	public void AuthenticateAsClient()
	{
	}

	[Token(Token = "0x60010B0")]
	[Address(RVA = "0x6292080", Offset = "0x6291080", VA = "0x6292080")]
	public IAsyncResult BeginAuthenticateAsClient(AsyncCallback asyncCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x60010B1")]
	[Address(RVA = "0x62921F0", Offset = "0x62911F0", VA = "0x62921F0")]
	public void EndAuthenticateAsClient(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60010B2")]
	[Address(RVA = "0x6292220", Offset = "0x6291220", VA = "0x6292220", Slot = "27")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x6292250", Offset = "0x6291250", VA = "0x6292250", Slot = "28")]
	public override void EndWrite(IAsyncResult result)
	{
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x6292280", Offset = "0x6291280", VA = "0x6292280", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x62922B0", Offset = "0x62912B0", VA = "0x62922B0", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x62922E0", Offset = "0x62912E0", VA = "0x62922E0", Slot = "23")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x6292310", Offset = "0x6291310", VA = "0x6292310", Slot = "24")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x6292340", Offset = "0x6291340", VA = "0x6292340", Slot = "19")]
	public override void Close()
	{
	}
}
