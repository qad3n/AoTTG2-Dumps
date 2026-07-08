using System.IO;
using System.Security.Authentication;
using System.Security.Cryptography.X509Certificates;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;
using Mono.Net.Security;
using Mono.Security.Interface;

namespace System.Net.Security;

[Token(Token = "0x2000239")]
public class SslStream : AuthenticatedStream
{
	[Token(Token = "0x4000C8A")]
	[FieldOffset(Offset = "0x38")]
	private MobileTlsProvider provider;

	[Token(Token = "0x4000C8B")]
	[FieldOffset(Offset = "0x40")]
	private MonoTlsSettings settings;

	[Token(Token = "0x4000C8C")]
	[FieldOffset(Offset = "0x48")]
	private RemoteCertificateValidationCallback validationCallback;

	[Token(Token = "0x4000C8D")]
	[FieldOffset(Offset = "0x50")]
	private LocalCertificateSelectionCallback selectionCallback;

	[Token(Token = "0x4000C8E")]
	[FieldOffset(Offset = "0x58")]
	private MobileAuthenticatedStream impl;

	[Token(Token = "0x4000C8F")]
	[FieldOffset(Offset = "0x60")]
	private bool explicitSettings;

	[Token(Token = "0x1700031D")]
	internal MobileAuthenticatedStream Impl
	{
		[Token(Token = "0x6000DD5")]
		[Address(RVA = "0x46A5810", Offset = "0x46A5810", VA = "0x46A5810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031E")]
	internal string InternalTargetHost
	{
		[Token(Token = "0x6000DD6")]
		[Address(RVA = "0x46A58D0", Offset = "0x46A58D0", VA = "0x46A58D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031F")]
	public override bool IsAuthenticated
	{
		[Token(Token = "0x6000DE3")]
		[Address(RVA = "0x46A60E0", Offset = "0x46A60E0", VA = "0x46A60E0", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000320")]
	public virtual X509Certificate LocalCertificate
	{
		[Token(Token = "0x6000DE4")]
		[Address(RVA = "0x46A6150", Offset = "0x46A6150", VA = "0x46A6150", Slot = "43")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000321")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000DE5")]
		[Address(RVA = "0x46A61B0", Offset = "0x46A61B0", VA = "0x46A61B0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000322")]
	public override bool CanRead
	{
		[Token(Token = "0x6000DE6")]
		[Address(RVA = "0x46A61C0", Offset = "0x46A61C0", VA = "0x46A61C0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000323")]
	public override bool CanTimeout
	{
		[Token(Token = "0x6000DE7")]
		[Address(RVA = "0x46A61E0", Offset = "0x46A61E0", VA = "0x46A61E0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000324")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000DE8")]
		[Address(RVA = "0x46A6210", Offset = "0x46A6210", VA = "0x46A6210", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000325")]
	public override int ReadTimeout
	{
		[Token(Token = "0x6000DE9")]
		[Address(RVA = "0x46A6230", Offset = "0x46A6230", VA = "0x46A6230", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DEA")]
		[Address(RVA = "0x46A62A0", Offset = "0x46A62A0", VA = "0x46A62A0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000326")]
	public override int WriteTimeout
	{
		[Token(Token = "0x6000DEB")]
		[Address(RVA = "0x46A6310", Offset = "0x46A6310", VA = "0x46A6310", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DEC")]
		[Address(RVA = "0x46A6380", Offset = "0x46A6380", VA = "0x46A6380", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000327")]
	public override long Length
	{
		[Token(Token = "0x6000DED")]
		[Address(RVA = "0x46A63F0", Offset = "0x46A63F0", VA = "0x46A63F0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000328")]
	public override long Position
	{
		[Token(Token = "0x6000DEE")]
		[Address(RVA = "0x46A6460", Offset = "0x46A6460", VA = "0x46A6460", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000DEF")]
		[Address(RVA = "0x46A64D0", Offset = "0x46A64D0", VA = "0x46A64D0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x46A5930", Offset = "0x46A5930", VA = "0x46A5930")]
	private static MobileTlsProvider GetProvider()
	{
		return null;
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x46A2600", Offset = "0x46A2600", VA = "0x46A2600")]
	public SslStream(Stream innerStream)
	{
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x46A5990", Offset = "0x46A5990", VA = "0x46A5990")]
	public SslStream(Stream innerStream, bool leaveInnerStreamOpen)
	{
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x46A5A70", Offset = "0x46A5A70", VA = "0x46A5A70")]
	public SslStream(Stream innerStream, bool leaveInnerStreamOpen, RemoteCertificateValidationCallback userCertificateValidationCallback)
	{
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x46A5A80", Offset = "0x46A5A80", VA = "0x46A5A80")]
	public SslStream(Stream innerStream, bool leaveInnerStreamOpen, RemoteCertificateValidationCallback userCertificateValidationCallback, LocalCertificateSelectionCallback userCertificateSelectionCallback)
	{
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x46A5E40", Offset = "0x46A5E40", VA = "0x46A5E40")]
	internal SslStream(Stream innerStream, bool leaveInnerStreamOpen, MonoTlsProvider provider, MonoTlsSettings settings)
	{
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x46A5B80", Offset = "0x46A5B80", VA = "0x46A5B80")]
	private void SetAndVerifyValidationCallback(RemoteCertificateValidationCallback callback)
	{
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x46A5C80", Offset = "0x46A5C80", VA = "0x46A5C80")]
	private void SetAndVerifySelectionCallback(LocalCertificateSelectionCallback callback)
	{
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x46A5F90", Offset = "0x46A5F90", VA = "0x46A5F90", Slot = "39")]
	public virtual void AuthenticateAsClient(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation)
	{
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x46A5FF0", Offset = "0x46A5FF0", VA = "0x46A5FF0", Slot = "40")]
	public virtual IAsyncResult BeginAuthenticateAsClient(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x46A6070", Offset = "0x46A6070", VA = "0x46A6070", Slot = "41")]
	public virtual void EndAuthenticateAsClient(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x46A6080", Offset = "0x46A6080", VA = "0x46A6080", Slot = "42")]
	public virtual Task AuthenticateAsClientAsync(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation)
	{
		return null;
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x46A6530", Offset = "0x46A6530", VA = "0x46A6530", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x46A65A0", Offset = "0x46A65A0", VA = "0x46A65A0", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x46A6600", Offset = "0x46A6600", VA = "0x46A6600", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x46A6630", Offset = "0x46A6630", VA = "0x46A6630", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x46A5870", Offset = "0x46A5870", VA = "0x46A5870")]
	private void CheckDisposed()
	{
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x46A6660", Offset = "0x46A6660", VA = "0x46A6660", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x46A6710", Offset = "0x46A6710", VA = "0x46A6710", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x46A6780", Offset = "0x46A6780", VA = "0x46A6780", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x46A67F0", Offset = "0x46A67F0", VA = "0x46A67F0", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x46A6860", Offset = "0x46A6860", VA = "0x46A6860", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x46A68D0", Offset = "0x46A68D0", VA = "0x46A68D0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x46A6950", Offset = "0x46A6950", VA = "0x46A6950", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x46A6990", Offset = "0x46A6990", VA = "0x46A6990", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x46A6A10", Offset = "0x46A6A10", VA = "0x46A6A10", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}
}
