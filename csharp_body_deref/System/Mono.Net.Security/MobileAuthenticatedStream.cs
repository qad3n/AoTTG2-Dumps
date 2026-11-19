// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.MobileAuthenticatedStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.IO;
using System.Net.Security;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using System.Security.Authentication;
using System.Security.Cryptography.X509Certificates;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;
using Mono.Security.Interface;

namespace Mono.Net.Security;

[Token(Token = "0x2000054")]
internal abstract class MobileAuthenticatedStream : AuthenticatedStream, IDisposable
{
	[Token(Token = "0x2000055")]
	private enum Operation
	{
		[Token(Token = "0x40000DD")]
		None,
		[Token(Token = "0x40000DE")]
		Handshake,
		[Token(Token = "0x40000DF")]
		Authenticated,
		[Token(Token = "0x40000E0")]
		Renegotiate,
		[Token(Token = "0x40000E1")]
		Read,
		[Token(Token = "0x40000E2")]
		Write,
		[Token(Token = "0x40000E3")]
		Close
	}

	[Token(Token = "0x2000056")]
	private enum OperationType
	{
		[Token(Token = "0x40000E5")]
		Read,
		[Token(Token = "0x40000E6")]
		Write,
		[Token(Token = "0x40000E7")]
		Renegotiate,
		[Token(Token = "0x40000E8")]
		Shutdown
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000057")]
	[CompilerGenerated]
	private struct _003CProcessAuthentication_003Ed__48 : IAsyncStateMachine
	{
		[Token(Token = "0x40000E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40000EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40000EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MonoSslAuthenticationOptions options;

		[Token(Token = "0x40000EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MobileAuthenticatedStream _003C_003E4__this;

		[Token(Token = "0x40000ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool runSynchronously;

		[Token(Token = "0x40000EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40000EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<AsyncProtocolResult>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000113")]
		[Address(RVA = "0x5E3B170", Offset = "0x5E3A170", VA = "0x5E3B170", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000114")]
		[Address(RVA = "0x5E3BCC0", Offset = "0x5E3ACC0", VA = "0x5E3BCC0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000058")]
	[CompilerGenerated]
	private struct _003CStartOperation_003Ed__57 : IAsyncStateMachine
	{
		[Token(Token = "0x40000F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40000F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x40000F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MobileAuthenticatedStream _003C_003E4__this;

		[Token(Token = "0x40000F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public OperationType type;

		[Token(Token = "0x40000F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public AsyncProtocolRequest asyncRequest;

		[Token(Token = "0x40000F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40000F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<AsyncProtocolResult>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000115")]
		[Address(RVA = "0x5E3BD20", Offset = "0x5E3AD20", VA = "0x5E3BD20", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000116")]
		[Address(RVA = "0x5E3C5B0", Offset = "0x5E3B5B0", VA = "0x5E3C5B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200005A")]
	[CompilerGenerated]
	private struct _003CInnerRead_003Ed__66 : IAsyncStateMachine
	{
		[Token(Token = "0x40000F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40000FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x40000FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MobileAuthenticatedStream _003C_003E4__this;

		[Token(Token = "0x40000FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40000FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int requestedSize;

		[Token(Token = "0x40000FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public bool sync;

		[Token(Token = "0x40000FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000119")]
		[Address(RVA = "0x5E3C680", Offset = "0x5E3B680", VA = "0x5E3C680", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600011A")]
		[Address(RVA = "0x5E3CB50", Offset = "0x5E3BB50", VA = "0x5E3CB50", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200005B")]
	[CompilerGenerated]
	private struct _003CInnerWrite_003Ed__67 : IAsyncStateMachine
	{
		[Token(Token = "0x4000100")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000101")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000102")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000103")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MobileAuthenticatedStream _003C_003E4__this;

		[Token(Token = "0x4000104")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool sync;

		[Token(Token = "0x4000105")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600011B")]
		[Address(RVA = "0x5E3CBC0", Offset = "0x5E3BBC0", VA = "0x5E3CBC0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600011C")]
		[Address(RVA = "0x5E3CED0", Offset = "0x5E3BED0", VA = "0x5E3CED0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40000CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private MobileTlsContext xobileTlsContext;

	[Token(Token = "0x40000CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private ExceptionDispatchInfo lastException;

	[Token(Token = "0x40000CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private AsyncProtocolRequest asyncHandshakeRequest;

	[Token(Token = "0x40000CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private AsyncProtocolRequest asyncReadRequest;

	[Token(Token = "0x40000CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private AsyncProtocolRequest asyncWriteRequest;

	[Token(Token = "0x40000CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private BufferOffsetSize2 readBuffer;

	[Token(Token = "0x40000D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private BufferOffsetSize2 writeBuffer;

	[Token(Token = "0x40000D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private object ioLock;

	[Token(Token = "0x40000D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private int closeRequested;

	[Token(Token = "0x40000D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private bool shutdown;

	[Token(Token = "0x40000D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Operation operation;

	[Token(Token = "0x40000D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int uniqueNameInteger;

	[Token(Token = "0x40000DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static int nextId;

	[Token(Token = "0x40000DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	internal readonly int ID;

	[Token(Token = "0x17000023")]
	public SslStream SslStream
	{
		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x5E39910", Offset = "0x5E38910", VA = "0x5E39910", Slot = "40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000024")]
	public MonoTlsSettings Settings
	{
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x5E39920", Offset = "0x5E38920", VA = "0x5E39920")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	public MobileTlsProvider Provider
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x5E39930", Offset = "0x5E38930", VA = "0x5E39930")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000026")]
	internal string TargetHost
	{
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x5E39940", Offset = "0x5E38940", VA = "0x5E39940")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x5E39950", Offset = "0x5E38950", VA = "0x5E39950")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public override bool IsAuthenticated
	{
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x5E3A8C0", Offset = "0x5E398C0", VA = "0x5E3A8C0", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000028")]
	public X509Certificate LocalCertificate
	{
		[Token(Token = "0x6000102")]
		[Address(RVA = "0x5E3AC70", Offset = "0x5E39C70", VA = "0x5E3AC70", Slot = "43")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000029")]
	public X509Certificate InternalLocalCertificate
	{
		[Token(Token = "0x6000103")]
		[Address(RVA = "0x5E3AD40", Offset = "0x5E39D40", VA = "0x5E3AD40", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002A")]
	public override bool CanRead
	{
		[Token(Token = "0x6000106")]
		[Address(RVA = "0x5E3AEB0", Offset = "0x5E39EB0", VA = "0x5E3AEB0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002B")]
	public override bool CanTimeout
	{
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x5E3AEF0", Offset = "0x5E39EF0", VA = "0x5E3AEF0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002C")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x5E3AF20", Offset = "0x5E39F20", VA = "0x5E3AF20", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002D")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x5E3AF80", Offset = "0x5E39F80", VA = "0x5E3AF80", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002E")]
	public override long Length
	{
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x5E3AF90", Offset = "0x5E39F90", VA = "0x5E3AF90", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700002F")]
	public override long Position
	{
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x5E3AFC0", Offset = "0x5E39FC0", VA = "0x5E3AFC0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x5E3AFF0", Offset = "0x5E39FF0", VA = "0x5E3AFF0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public override int ReadTimeout
	{
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x5E3B030", Offset = "0x5E3A030", VA = "0x5E3B030", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x5E3B060", Offset = "0x5E3A060", VA = "0x5E3B060", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public override int WriteTimeout
	{
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x5E3B090", Offset = "0x5E3A090", VA = "0x5E3B090", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000110")]
		[Address(RVA = "0x5E3B0C0", Offset = "0x5E3A0C0", VA = "0x5E3B0C0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x5E357F0", Offset = "0x5E347F0", VA = "0x5E357F0")]
	public MobileAuthenticatedStream(Stream innerStream, bool leaveInnerStreamOpen, SslStream owner, MonoTlsSettings settings, MobileTlsProvider provider)
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x5E39970", Offset = "0x5E38970", VA = "0x5E39970")]
	internal void CheckThrow(bool authSuccessCheck, bool shutdownCheck = false)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x5E37420", Offset = "0x5E36420", VA = "0x5E37420")]
	internal static Exception GetSSPIException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x5E39A20", Offset = "0x5E38A20", VA = "0x5E39A20")]
	internal static Exception GetIOException(Exception e, string message)
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x5E39B80", Offset = "0x5E38B80", VA = "0x5E39B80")]
	internal static Exception GetInternalError()
	{
		return null;
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x5E39BD0", Offset = "0x5E38BD0", VA = "0x5E39BD0")]
	internal static Exception GetInvalidNestedCallException()
	{
		return null;
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x5E36C20", Offset = "0x5E35C20", VA = "0x5E36C20")]
	internal ExceptionDispatchInfo SetException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x5E39C20", Offset = "0x5E38C20", VA = "0x5E39C20")]
	public void AuthenticateAsClient(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation)
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x5E3A0C0", Offset = "0x5E390C0", VA = "0x5E3A0C0", Slot = "41")]
	public Task AuthenticateAsClientAsync(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation)
	{
		return null;
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x5E39FA0", Offset = "0x5E38FA0", VA = "0x5E39FA0")]
	[AsyncStateMachine(typeof(_003CProcessAuthentication_003Ed__48))]
	private Task ProcessAuthentication(bool runSynchronously, MonoSslAuthenticationOptions options, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000F0")]
	protected abstract MobileTlsContext CreateContext(MonoSslAuthenticationOptions options);

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x5E3A220", Offset = "0x5E39220", VA = "0x5E3A220", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x5E3A430", Offset = "0x5E39430", VA = "0x5E3A430", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x5E3A4F0", Offset = "0x5E394F0", VA = "0x5E3A4F0", Slot = "25")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x5E3A570", Offset = "0x5E39570", VA = "0x5E3A570", Slot = "29")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x5E3A2F0", Offset = "0x5E392F0", VA = "0x5E3A2F0")]
	[AsyncStateMachine(typeof(_003CStartOperation_003Ed__57))]
	private Task<int> StartOperation(OperationType type, AsyncProtocolRequest asyncRequest, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x5E33970", Offset = "0x5E32970", VA = "0x5E33970")]
	internal int InternalRead(byte[] buffer, int offset, int size, out bool outWantMore)
	{
		return default(int);
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x5E3A5F0", Offset = "0x5E395F0", VA = "0x5E3A5F0")]
	private (int, bool) InternalRead(AsyncProtocolRequest asyncRequest, BufferOffsetSize internalBuffer, byte[] buffer, int offset, int size)
	{
		return default((int, bool));
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x5E334C0", Offset = "0x5E324C0", VA = "0x5E334C0")]
	internal bool InternalWrite(byte[] buffer, int offset, int size)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x5E3A750", Offset = "0x5E39750", VA = "0x5E3A750")]
	private bool InternalWrite(AsyncProtocolRequest asyncRequest, BufferOffsetSize2 internalBuffer, byte[] buffer, int offset, int size)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x5E37BC0", Offset = "0x5E36BC0", VA = "0x5E37BC0")]
	[AsyncStateMachine(typeof(_003CInnerRead_003Ed__66))]
	internal Task<int> InnerRead(bool sync, int requestedSize, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x5E37590", Offset = "0x5E36590", VA = "0x5E37590")]
	[AsyncStateMachine(typeof(_003CInnerWrite_003Ed__67))]
	internal Task InnerWrite(bool sync, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x5E37E10", Offset = "0x5E36E10", VA = "0x5E37E10")]
	internal AsyncOperationStatus ProcessHandshake(AsyncOperationStatus status, bool renegotiate)
	{
		return default(AsyncOperationStatus);
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x5E383B0", Offset = "0x5E373B0", VA = "0x5E383B0")]
	internal (int, bool) ProcessRead(BufferOffsetSize userBuffer)
	{
		return default((int, bool));
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x5E38590", Offset = "0x5E37590", VA = "0x5E38590")]
	internal (int, bool) ProcessWrite(BufferOffsetSize userBuffer)
	{
		return default((int, bool));
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x5E3A9A0", Offset = "0x5E399A0", VA = "0x5E3A9A0", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x5E3AC40", Offset = "0x5E39C40", VA = "0x5E3AC40", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x5E3AE40", Offset = "0x5E39E40", VA = "0x5E3AE40", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x5E3AE80", Offset = "0x5E39E80", VA = "0x5E3AE80", Slot = "32")]
	public override void SetLength(long value)
	{
	}
}
