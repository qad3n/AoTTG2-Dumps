// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Security.SslStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Security.Authentication;
using System.Security.Cryptography.X509Certificates;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;
using Mono.Net.Security;
using Mono.Security.Interface;

namespace System.Net.Security;

[Token(Token = "0x20003D1")]
public class SslStream : AuthenticatedStream
{
	[Token(Token = "0x40010DD")]
	[FieldOffset(Offset = "0x38")]
	private MobileTlsProvider provider;

	[Token(Token = "0x40010DE")]
	[FieldOffset(Offset = "0x40")]
	private MonoTlsSettings settings;

	[Token(Token = "0x40010DF")]
	[FieldOffset(Offset = "0x48")]
	private RemoteCertificateValidationCallback validationCallback;

	[Token(Token = "0x40010E0")]
	[FieldOffset(Offset = "0x50")]
	private LocalCertificateSelectionCallback selectionCallback;

	[Token(Token = "0x40010E1")]
	[FieldOffset(Offset = "0x58")]
	private MobileAuthenticatedStream impl;

	[Token(Token = "0x40010E2")]
	[FieldOffset(Offset = "0x60")]
	private bool explicitSettings;

	[Token(Token = "0x17000575")]
	internal MobileAuthenticatedStream Impl
	{
		[Token(Token = "0x60019B5")]
		[Address(RVA = "0x281B680", Offset = "0x2819C80", VA = "0x18281B680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000576")]
	internal string InternalTargetHost
	{
		[Token(Token = "0x60019B6")]
		[Address(RVA = "0x281B6F0", Offset = "0x2819CF0", VA = "0x18281B6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000577")]
	public override bool IsAuthenticated
	{
		[Token(Token = "0x60019C3")]
		[Address(RVA = "0x281B760", Offset = "0x2819D60", VA = "0x18281B760", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000578")]
	public virtual X509Certificate LocalCertificate
	{
		[Token(Token = "0x60019C4")]
		[Address(RVA = "0x281B860", Offset = "0x2819E60", VA = "0x18281B860", Slot = "43")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000579")]
	public override bool CanSeek
	{
		[Token(Token = "0x60019C5")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700057A")]
	public override bool CanRead
	{
		[Token(Token = "0x60019C6")]
		[Address(RVA = "0x281B640", Offset = "0x2819C40", VA = "0x18281B640", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700057B")]
	public override bool CanTimeout
	{
		[Token(Token = "0x60019C7")]
		[Address(RVA = "0x2493550", Offset = "0x2491B50", VA = "0x182493550", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700057C")]
	public override bool CanWrite
	{
		[Token(Token = "0x60019C8")]
		[Address(RVA = "0x281B660", Offset = "0x2819C60", VA = "0x18281B660", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700057D")]
	public override int ReadTimeout
	{
		[Token(Token = "0x60019C9")]
		[Address(RVA = "0x281B950", Offset = "0x2819F50", VA = "0x18281B950", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60019CA")]
		[Address(RVA = "0x281BAB0", Offset = "0x281A0B0", VA = "0x18281BAB0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x1700057E")]
	public override int WriteTimeout
	{
		[Token(Token = "0x60019CB")]
		[Address(RVA = "0x281B9D0", Offset = "0x2819FD0", VA = "0x18281B9D0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60019CC")]
		[Address(RVA = "0x281BB30", Offset = "0x281A130", VA = "0x18281BB30", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x1700057F")]
	public override long Length
	{
		[Token(Token = "0x60019CD")]
		[Address(RVA = "0x281B7E0", Offset = "0x2819DE0", VA = "0x18281B7E0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000580")]
	public override long Position
	{
		[Token(Token = "0x60019CE")]
		[Address(RVA = "0x281B8D0", Offset = "0x2819ED0", VA = "0x18281B8D0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60019CF")]
		[Address(RVA = "0x281BA50", Offset = "0x281A050", VA = "0x18281BA50", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x60019B7")]
	[Address(RVA = "0x281ABF0", Offset = "0x28191F0", VA = "0x18281ABF0")]
	private static MobileTlsProvider GetProvider()
	{
		return null;
	}

	[Token(Token = "0x60019B8")]
	[Address(RVA = "0x281B330", Offset = "0x2819930", VA = "0x18281B330")]
	public SslStream(Stream innerStream)
	{
	}

	[Token(Token = "0x60019B9")]
	[Address(RVA = "0x281B3F0", Offset = "0x28199F0", VA = "0x18281B3F0")]
	public SslStream(Stream innerStream, bool leaveInnerStreamOpen)
	{
	}

	[Token(Token = "0x60019BA")]
	[Address(RVA = "0x281B3D0", Offset = "0x28199D0", VA = "0x18281B3D0")]
	public SslStream(Stream innerStream, bool leaveInnerStreamOpen, RemoteCertificateValidationCallback userCertificateValidationCallback)
	{
	}

	[Token(Token = "0x60019BB")]
	[Address(RVA = "0x281B4A0", Offset = "0x2819AA0", VA = "0x18281B4A0")]
	public SslStream(Stream innerStream, bool leaveInnerStreamOpen, RemoteCertificateValidationCallback userCertificateValidationCallback, LocalCertificateSelectionCallback userCertificateSelectionCallback)
	{
	}

	[Token(Token = "0x60019BC")]
	[Address(RVA = "0x281B1E0", Offset = "0x28197E0", VA = "0x18281B1E0")]
	internal SslStream(Stream innerStream, bool leaveInnerStreamOpen, MonoTlsProvider provider, MonoTlsSettings settings)
	{
	}

	[Token(Token = "0x60019BD")]
	[Address(RVA = "0x281AF70", Offset = "0x2819570", VA = "0x18281AF70")]
	private void SetAndVerifyValidationCallback(RemoteCertificateValidationCallback callback)
	{
	}

	[Token(Token = "0x60019BE")]
	[Address(RVA = "0x281ADC0", Offset = "0x28193C0", VA = "0x18281ADC0")]
	private void SetAndVerifySelectionCallback(LocalCertificateSelectionCallback callback)
	{
	}

	[Token(Token = "0x60019BF")]
	[Address(RVA = "0x281A820", Offset = "0x2818E20", VA = "0x18281A820", Slot = "39")]
	public virtual void AuthenticateAsClient(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation)
	{
	}

	[Token(Token = "0x60019C0")]
	[Address(RVA = "0x281A8A0", Offset = "0x2818EA0", VA = "0x18281A8A0", Slot = "40")]
	public virtual IAsyncResult BeginAuthenticateAsClient(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x60019C1")]
	[Address(RVA = "0x198B260", Offset = "0x1989860", VA = "0x18198B260", Slot = "41")]
	public virtual void EndAuthenticateAsClient(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60019C2")]
	[Address(RVA = "0x281A7A0", Offset = "0x2818DA0", VA = "0x18281A7A0", Slot = "42")]
	public virtual Task AuthenticateAsClientAsync(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation)
	{
		return null;
	}

	[Token(Token = "0x60019D0")]
	[Address(RVA = "0x281B060", Offset = "0x2819660", VA = "0x18281B060", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x60019D1")]
	[Address(RVA = "0x281AD60", Offset = "0x2819360", VA = "0x18281AD60", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x60019D2")]
	[Address(RVA = "0x281ABC0", Offset = "0x28191C0", VA = "0x18281ABC0", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60019D3")]
	[Address(RVA = "0x2491AB0", Offset = "0x24900B0", VA = "0x182491AB0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60019D4")]
	[Address(RVA = "0x281AA60", Offset = "0x2819060", VA = "0x18281AA60")]
	private void CheckDisposed()
	{
	}

	[Token(Token = "0x60019D5")]
	[Address(RVA = "0x281AAD0", Offset = "0x28190D0", VA = "0x18281AAD0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60019D6")]
	[Address(RVA = "0x281ACE0", Offset = "0x28192E0", VA = "0x18281ACE0", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60019D7")]
	[Address(RVA = "0x281B160", Offset = "0x2819760", VA = "0x18281B160", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x60019D8")]
	[Address(RVA = "0x281AC60", Offset = "0x2819260", VA = "0x18281AC60", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60019D9")]
	[Address(RVA = "0x281B0E0", Offset = "0x28196E0", VA = "0x18281B0E0", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60019DA")]
	[Address(RVA = "0x281A940", Offset = "0x2818F40", VA = "0x18281A940", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60019DB")]
	[Address(RVA = "0x281AB80", Offset = "0x2819180", VA = "0x18281AB80", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x60019DC")]
	[Address(RVA = "0x281A9D0", Offset = "0x2818FD0", VA = "0x18281A9D0", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60019DD")]
	[Address(RVA = "0x198B260", Offset = "0x1989860", VA = "0x18198B260", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}
}
