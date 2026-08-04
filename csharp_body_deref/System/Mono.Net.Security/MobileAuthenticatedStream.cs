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
		[Token(Token = "0x40000DC")]
		None,
		[Token(Token = "0x40000DD")]
		Handshake,
		[Token(Token = "0x40000DE")]
		Authenticated,
		[Token(Token = "0x40000DF")]
		Renegotiate,
		[Token(Token = "0x40000E0")]
		Read,
		[Token(Token = "0x40000E1")]
		Write,
		[Token(Token = "0x40000E2")]
		Close
	}

	[Token(Token = "0x2000056")]
	private enum OperationType
	{
		[Token(Token = "0x40000E4")]
		Read,
		[Token(Token = "0x40000E5")]
		Write,
		[Token(Token = "0x40000E6")]
		Renegotiate,
		[Token(Token = "0x40000E7")]
		Shutdown
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000057")]
	[CompilerGenerated]
	private struct _003CProcessAuthentication_003Ed__48 : IAsyncStateMachine
	{
		[Token(Token = "0x40000E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40000E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40000EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MonoSslAuthenticationOptions options;

		[Token(Token = "0x40000EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MobileAuthenticatedStream _003C_003E4__this;

		[Token(Token = "0x40000EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool runSynchronously;

		[Token(Token = "0x40000ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40000EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<AsyncProtocolResult>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000112")]
		[Address(RVA = "0x4526FE0", Offset = "0x4526FE0", VA = "0x4526FE0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000113")]
		[Address(RVA = "0x4527CF0", Offset = "0x4527CF0", VA = "0x4527CF0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000058")]
	[CompilerGenerated]
	private struct _003CStartOperation_003Ed__57 : IAsyncStateMachine
	{
		[Token(Token = "0x40000EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40000F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x40000F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MobileAuthenticatedStream _003C_003E4__this;

		[Token(Token = "0x40000F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public OperationType type;

		[Token(Token = "0x40000F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public AsyncProtocolRequest asyncRequest;

		[Token(Token = "0x40000F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40000F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<AsyncProtocolResult>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000114")]
		[Address(RVA = "0x4527D50", Offset = "0x4527D50", VA = "0x4527D50", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000115")]
		[Address(RVA = "0x4528820", Offset = "0x4528820", VA = "0x4528820", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200005A")]
	[CompilerGenerated]
	private struct _003CInnerRead_003Ed__66 : IAsyncStateMachine
	{
		[Token(Token = "0x40000F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40000F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x40000FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MobileAuthenticatedStream _003C_003E4__this;

		[Token(Token = "0x40000FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40000FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int requestedSize;

		[Token(Token = "0x40000FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public bool sync;

		[Token(Token = "0x40000FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000118")]
		[Address(RVA = "0x45288F0", Offset = "0x45288F0", VA = "0x45288F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000119")]
		[Address(RVA = "0x4528EC0", Offset = "0x4528EC0", VA = "0x4528EC0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200005B")]
	[CompilerGenerated]
	private struct _003CInnerWrite_003Ed__67 : IAsyncStateMachine
	{
		[Token(Token = "0x40000FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000100")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000101")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000102")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MobileAuthenticatedStream _003C_003E4__this;

		[Token(Token = "0x4000103")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool sync;

		[Token(Token = "0x4000104")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600011A")]
		[Address(RVA = "0x4528F30", Offset = "0x4528F30", VA = "0x4528F30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600011B")]
		[Address(RVA = "0x45292F0", Offset = "0x45292F0", VA = "0x45292F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40000C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private MobileTlsContext xobileTlsContext;

	[Token(Token = "0x40000CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private ExceptionDispatchInfo lastException;

	[Token(Token = "0x40000CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private AsyncProtocolRequest asyncHandshakeRequest;

	[Token(Token = "0x40000CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private AsyncProtocolRequest asyncReadRequest;

	[Token(Token = "0x40000CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private AsyncProtocolRequest asyncWriteRequest;

	[Token(Token = "0x40000CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private BufferOffsetSize2 readBuffer;

	[Token(Token = "0x40000CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private BufferOffsetSize2 writeBuffer;

	[Token(Token = "0x40000D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private object ioLock;

	[Token(Token = "0x40000D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private int closeRequested;

	[Token(Token = "0x40000D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private bool shutdown;

	[Token(Token = "0x40000D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Operation operation;

	[Token(Token = "0x40000D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int uniqueNameInteger;

	[Token(Token = "0x40000D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static int nextId;

	[Token(Token = "0x40000DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	internal readonly int ID;

	[Token(Token = "0x17000023")]
	public SslStream SslStream
	{
		[Token(Token = "0x60000E1")]
		[Address(RVA = "0x4525820", Offset = "0x4525820", VA = "0x4525820", Slot = "39")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000024")]
	public MonoTlsSettings Settings
	{
		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x4525830", Offset = "0x4525830", VA = "0x4525830")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	public MobileTlsProvider Provider
	{
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x4525840", Offset = "0x4525840", VA = "0x4525840")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000026")]
	internal string TargetHost
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x4525850", Offset = "0x4525850", VA = "0x4525850")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x4525860", Offset = "0x4525860", VA = "0x4525860")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public override bool IsAuthenticated
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x45266F0", Offset = "0x45266F0", VA = "0x45266F0", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000028")]
	public X509Certificate LocalCertificate
	{
		[Token(Token = "0x6000101")]
		[Address(RVA = "0x4526AC0", Offset = "0x4526AC0", VA = "0x4526AC0", Slot = "42")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000029")]
	public X509Certificate InternalLocalCertificate
	{
		[Token(Token = "0x6000102")]
		[Address(RVA = "0x4526BA0", Offset = "0x4526BA0", VA = "0x4526BA0", Slot = "43")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002A")]
	public override bool CanRead
	{
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x4526D20", Offset = "0x4526D20", VA = "0x4526D20", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002B")]
	public override bool CanTimeout
	{
		[Token(Token = "0x6000106")]
		[Address(RVA = "0x4526D60", Offset = "0x4526D60", VA = "0x4526D60", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002C")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x4526D90", Offset = "0x4526D90", VA = "0x4526D90", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002D")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x4526DF0", Offset = "0x4526DF0", VA = "0x4526DF0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002E")]
	public override long Length
	{
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x4526E00", Offset = "0x4526E00", VA = "0x4526E00", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700002F")]
	public override long Position
	{
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x4526E30", Offset = "0x4526E30", VA = "0x4526E30", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x4526E60", Offset = "0x4526E60", VA = "0x4526E60", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public override int ReadTimeout
	{
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x4526EA0", Offset = "0x4526EA0", VA = "0x4526EA0", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x4526ED0", Offset = "0x4526ED0", VA = "0x4526ED0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public override int WriteTimeout
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x4526F00", Offset = "0x4526F00", VA = "0x4526F00", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x4526F30", Offset = "0x4526F30", VA = "0x4526F30", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x45216B0", Offset = "0x45216B0", VA = "0x45216B0")]
	public MobileAuthenticatedStream(Stream innerStream, bool leaveInnerStreamOpen, SslStream owner, MonoTlsSettings settings, MobileTlsProvider provider)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x4525880", Offset = "0x4525880", VA = "0x4525880")]
	internal void CheckThrow(bool authSuccessCheck, bool shutdownCheck = false)
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x45231F0", Offset = "0x45231F0", VA = "0x45231F0")]
	internal static Exception GetSSPIException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x4525930", Offset = "0x4525930", VA = "0x4525930")]
	internal static Exception GetIOException(Exception e, string message)
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x4525A90", Offset = "0x4525A90", VA = "0x4525A90")]
	internal static Exception GetInternalError()
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x4525AE0", Offset = "0x4525AE0", VA = "0x4525AE0")]
	internal static Exception GetInvalidNestedCallException()
	{
		return null;
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x4522BB0", Offset = "0x4522BB0", VA = "0x4522BB0")]
	internal ExceptionDispatchInfo SetException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x4525B30", Offset = "0x4525B30", VA = "0x4525B30")]
	public void AuthenticateAsClient(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x4525F00", Offset = "0x4525F00", VA = "0x4525F00", Slot = "40")]
	public Task AuthenticateAsClientAsync(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation)
	{
		return null;
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x4525DD0", Offset = "0x4525DD0", VA = "0x4525DD0")]
	[AsyncStateMachine(typeof(_003CProcessAuthentication_003Ed__48))]
	private Task ProcessAuthentication(bool runSynchronously, MonoSslAuthenticationOptions options, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000EF")]
	protected abstract MobileTlsContext CreateContext(MonoSslAuthenticationOptions options);

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x4526070", Offset = "0x4526070", VA = "0x4526070", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x4526290", Offset = "0x4526290", VA = "0x4526290", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x4526350", Offset = "0x4526350", VA = "0x4526350", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x45263D0", Offset = "0x45263D0", VA = "0x45263D0", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x4526140", Offset = "0x4526140", VA = "0x4526140")]
	[AsyncStateMachine(typeof(_003CStartOperation_003Ed__57))]
	private Task<int> StartOperation(OperationType type, AsyncProtocolRequest asyncRequest, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x451F560", Offset = "0x451F560", VA = "0x451F560")]
	internal int InternalRead(byte[] buffer, int offset, int size, out bool outWantMore)
	{
		return default(int);
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x4526450", Offset = "0x4526450", VA = "0x4526450")]
	private (int, bool) InternalRead(AsyncProtocolRequest asyncRequest, BufferOffsetSize internalBuffer, byte[] buffer, int offset, int size)
	{
		return default((int, bool));
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x451EF40", Offset = "0x451EF40", VA = "0x451EF40")]
	internal bool InternalWrite(byte[] buffer, int offset, int size)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x45265B0", Offset = "0x45265B0", VA = "0x45265B0")]
	private bool InternalWrite(AsyncProtocolRequest asyncRequest, BufferOffsetSize2 internalBuffer, byte[] buffer, int offset, int size)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x4523930", Offset = "0x4523930", VA = "0x4523930")]
	[AsyncStateMachine(typeof(_003CInnerRead_003Ed__66))]
	internal Task<int> InnerRead(bool sync, int requestedSize, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x4523360", Offset = "0x4523360", VA = "0x4523360")]
	[AsyncStateMachine(typeof(_003CInnerWrite_003Ed__67))]
	internal Task InnerWrite(bool sync, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x4523B90", Offset = "0x4523B90", VA = "0x4523B90")]
	internal AsyncOperationStatus ProcessHandshake(AsyncOperationStatus status, bool renegotiate)
	{
		return default(AsyncOperationStatus);
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x4524240", Offset = "0x4524240", VA = "0x4524240")]
	internal (int, bool) ProcessRead(BufferOffsetSize userBuffer)
	{
		return default((int, bool));
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x45244A0", Offset = "0x45244A0", VA = "0x45244A0")]
	internal (int, bool) ProcessWrite(BufferOffsetSize userBuffer)
	{
		return default((int, bool));
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x45267E0", Offset = "0x45267E0", VA = "0x45267E0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x4526A90", Offset = "0x4526A90", VA = "0x4526A90", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x4526CB0", Offset = "0x4526CB0", VA = "0x4526CB0", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x4526CF0", Offset = "0x4526CF0", VA = "0x4526CF0", Slot = "31")]
	public override void SetLength(long value)
	{
	}
}
