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

[Token(Token = "0x200038D")]
public class SslStream : AuthenticatedStream
{
	[Token(Token = "0x4000FF5")]
	[FieldOffset(Offset = "0x38")]
	private MobileTlsProvider provider;

	[Token(Token = "0x4000FF6")]
	[FieldOffset(Offset = "0x40")]
	private MonoTlsSettings settings;

	[Token(Token = "0x4000FF7")]
	[FieldOffset(Offset = "0x48")]
	private RemoteCertificateValidationCallback validationCallback;

	[Token(Token = "0x4000FF8")]
	[FieldOffset(Offset = "0x50")]
	private LocalCertificateSelectionCallback selectionCallback;

	[Token(Token = "0x4000FF9")]
	[FieldOffset(Offset = "0x58")]
	private MobileAuthenticatedStream impl;

	[Token(Token = "0x4000FFA")]
	[FieldOffset(Offset = "0x60")]
	private bool explicitSettings;

	[Token(Token = "0x17000547")]
	internal MobileAuthenticatedStream Impl
	{
		[Token(Token = "0x60017FB")]
		[Address(RVA = "0x61CDE00", Offset = "0x61CCE00", VA = "0x61CDE00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000548")]
	internal string InternalTargetHost
	{
		[Token(Token = "0x60017FC")]
		[Address(RVA = "0x61CDEC0", Offset = "0x61CCEC0", VA = "0x61CDEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000549")]
	public override bool IsAuthenticated
	{
		[Token(Token = "0x6001809")]
		[Address(RVA = "0x61CE6C0", Offset = "0x61CD6C0", VA = "0x61CE6C0", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700054A")]
	public virtual X509Certificate LocalCertificate
	{
		[Token(Token = "0x600180A")]
		[Address(RVA = "0x61CE730", Offset = "0x61CD730", VA = "0x61CE730", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700054B")]
	public override bool CanSeek
	{
		[Token(Token = "0x600180B")]
		[Address(RVA = "0x61CE790", Offset = "0x61CD790", VA = "0x61CE790", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700054C")]
	public override bool CanRead
	{
		[Token(Token = "0x600180C")]
		[Address(RVA = "0x61CE7A0", Offset = "0x61CD7A0", VA = "0x61CE7A0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700054D")]
	public override bool CanTimeout
	{
		[Token(Token = "0x600180D")]
		[Address(RVA = "0x61CE7C0", Offset = "0x61CD7C0", VA = "0x61CE7C0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700054E")]
	public override bool CanWrite
	{
		[Token(Token = "0x600180E")]
		[Address(RVA = "0x61CE7F0", Offset = "0x61CD7F0", VA = "0x61CE7F0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700054F")]
	public override int ReadTimeout
	{
		[Token(Token = "0x600180F")]
		[Address(RVA = "0x61CE810", Offset = "0x61CD810", VA = "0x61CE810", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001810")]
		[Address(RVA = "0x61CE880", Offset = "0x61CD880", VA = "0x61CE880", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000550")]
	public override int WriteTimeout
	{
		[Token(Token = "0x6001811")]
		[Address(RVA = "0x61CE8F0", Offset = "0x61CD8F0", VA = "0x61CE8F0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001812")]
		[Address(RVA = "0x61CE960", Offset = "0x61CD960", VA = "0x61CE960", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000551")]
	public override long Length
	{
		[Token(Token = "0x6001813")]
		[Address(RVA = "0x61CE9D0", Offset = "0x61CD9D0", VA = "0x61CE9D0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000552")]
	public override long Position
	{
		[Token(Token = "0x6001814")]
		[Address(RVA = "0x61CEA40", Offset = "0x61CDA40", VA = "0x61CEA40", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6001815")]
		[Address(RVA = "0x61CEAB0", Offset = "0x61CDAB0", VA = "0x61CEAB0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x60017FD")]
	[Address(RVA = "0x61CDF20", Offset = "0x61CCF20", VA = "0x61CDF20")]
	private static MobileTlsProvider GetProvider()
	{
		return null;
	}

	[Token(Token = "0x60017FE")]
	[Address(RVA = "0x61C9600", Offset = "0x61C8600", VA = "0x61C9600")]
	public SslStream(Stream innerStream)
	{
	}

	[Token(Token = "0x60017FF")]
	[Address(RVA = "0x61CDF80", Offset = "0x61CCF80", VA = "0x61CDF80")]
	public SslStream(Stream innerStream, bool leaveInnerStreamOpen)
	{
	}

	[Token(Token = "0x6001800")]
	[Address(RVA = "0x61CE060", Offset = "0x61CD060", VA = "0x61CE060")]
	public SslStream(Stream innerStream, bool leaveInnerStreamOpen, RemoteCertificateValidationCallback userCertificateValidationCallback)
	{
	}

	[Token(Token = "0x6001801")]
	[Address(RVA = "0x61CE070", Offset = "0x61CD070", VA = "0x61CE070")]
	public SslStream(Stream innerStream, bool leaveInnerStreamOpen, RemoteCertificateValidationCallback userCertificateValidationCallback, LocalCertificateSelectionCallback userCertificateSelectionCallback)
	{
	}

	[Token(Token = "0x6001802")]
	[Address(RVA = "0x61CE430", Offset = "0x61CD430", VA = "0x61CE430")]
	internal SslStream(Stream innerStream, bool leaveInnerStreamOpen, MonoTlsProvider provider, MonoTlsSettings settings)
	{
	}

	[Token(Token = "0x6001803")]
	[Address(RVA = "0x61CE170", Offset = "0x61CD170", VA = "0x61CE170")]
	private void SetAndVerifyValidationCallback(RemoteCertificateValidationCallback callback)
	{
	}

	[Token(Token = "0x6001804")]
	[Address(RVA = "0x61CE270", Offset = "0x61CD270", VA = "0x61CE270")]
	private void SetAndVerifySelectionCallback(LocalCertificateSelectionCallback callback)
	{
	}

	[Token(Token = "0x6001805")]
	[Address(RVA = "0x61CE570", Offset = "0x61CD570", VA = "0x61CE570", Slot = "40")]
	public virtual void AuthenticateAsClient(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation)
	{
	}

	[Token(Token = "0x6001806")]
	[Address(RVA = "0x61CE5D0", Offset = "0x61CD5D0", VA = "0x61CE5D0", Slot = "41")]
	public virtual IAsyncResult BeginAuthenticateAsClient(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x6001807")]
	[Address(RVA = "0x61CE650", Offset = "0x61CD650", VA = "0x61CE650", Slot = "42")]
	public virtual void EndAuthenticateAsClient(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001808")]
	[Address(RVA = "0x61CE660", Offset = "0x61CD660", VA = "0x61CE660", Slot = "43")]
	public virtual Task AuthenticateAsClientAsync(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation)
	{
		return null;
	}

	[Token(Token = "0x6001816")]
	[Address(RVA = "0x61CEB10", Offset = "0x61CDB10", VA = "0x61CEB10", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6001817")]
	[Address(RVA = "0x61CEB80", Offset = "0x61CDB80", VA = "0x61CEB80", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6001818")]
	[Address(RVA = "0x61CEBE0", Offset = "0x61CDBE0", VA = "0x61CEBE0", Slot = "22")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001819")]
	[Address(RVA = "0x61CEC10", Offset = "0x61CDC10", VA = "0x61CEC10", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600181A")]
	[Address(RVA = "0x61CDE60", Offset = "0x61CCE60", VA = "0x61CDE60")]
	private void CheckDisposed()
	{
	}

	[Token(Token = "0x600181B")]
	[Address(RVA = "0x61CEC40", Offset = "0x61CDC40", VA = "0x61CEC40", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600181C")]
	[Address(RVA = "0x61CED00", Offset = "0x61CDD00", VA = "0x61CED00", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600181D")]
	[Address(RVA = "0x61CED70", Offset = "0x61CDD70", VA = "0x61CED70", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x600181E")]
	[Address(RVA = "0x61CEDE0", Offset = "0x61CDDE0", VA = "0x61CEDE0", Slot = "25")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600181F")]
	[Address(RVA = "0x61CEE50", Offset = "0x61CDE50", VA = "0x61CEE50", Slot = "29")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001820")]
	[Address(RVA = "0x61CEEC0", Offset = "0x61CDEC0", VA = "0x61CEEC0", Slot = "23")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001821")]
	[Address(RVA = "0x61CEF40", Offset = "0x61CDF40", VA = "0x61CEF40", Slot = "24")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6001822")]
	[Address(RVA = "0x61CEF80", Offset = "0x61CDF80", VA = "0x61CEF80", Slot = "27")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001823")]
	[Address(RVA = "0x61CF000", Offset = "0x61CE000", VA = "0x61CF000", Slot = "28")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}
}
