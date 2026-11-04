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
		[Token(Token = "0x40000DE")]
		None,
		[Token(Token = "0x40000DF")]
		Handshake,
		[Token(Token = "0x40000E0")]
		Authenticated,
		[Token(Token = "0x40000E1")]
		Renegotiate,
		[Token(Token = "0x40000E2")]
		Read,
		[Token(Token = "0x40000E3")]
		Write,
		[Token(Token = "0x40000E4")]
		Close
	}

	[Token(Token = "0x2000056")]
	private enum OperationType
	{
		[Token(Token = "0x40000E6")]
		Read,
		[Token(Token = "0x40000E7")]
		Write,
		[Token(Token = "0x40000E8")]
		Renegotiate,
		[Token(Token = "0x40000E9")]
		Shutdown
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000057")]
	[CompilerGenerated]
	private struct _003CProcessAuthentication_003Ed__48 : IAsyncStateMachine
	{
		[Token(Token = "0x40000EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40000EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40000EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MonoSslAuthenticationOptions options;

		[Token(Token = "0x40000ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MobileAuthenticatedStream _003C_003E4__this;

		[Token(Token = "0x40000EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool runSynchronously;

		[Token(Token = "0x40000EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40000F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<AsyncProtocolResult>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000114")]
		[Address(RVA = "0x24A1070", Offset = "0x249F670", VA = "0x1824A1070", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000115")]
		[Address(RVA = "0x24A1930", Offset = "0x249FF30", VA = "0x1824A1930", Slot = "5")]
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
		[Token(Token = "0x40000F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40000F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x40000F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MobileAuthenticatedStream _003C_003E4__this;

		[Token(Token = "0x40000F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public OperationType type;

		[Token(Token = "0x40000F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public AsyncProtocolRequest asyncRequest;

		[Token(Token = "0x40000F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40000F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<AsyncProtocolResult>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000116")]
		[Address(RVA = "0x24A24C0", Offset = "0x24A0AC0", VA = "0x1824A24C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000117")]
		[Address(RVA = "0x24A2C10", Offset = "0x24A1210", VA = "0x1824A2C10", Slot = "5")]
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
		[Token(Token = "0x40000FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40000FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x40000FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MobileAuthenticatedStream _003C_003E4__this;

		[Token(Token = "0x40000FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40000FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int requestedSize;

		[Token(Token = "0x40000FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public bool sync;

		[Token(Token = "0x4000100")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600011A")]
		[Address(RVA = "0x24A0870", Offset = "0x249EE70", VA = "0x1824A0870", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600011B")]
		[Address(RVA = "0x24A0CE0", Offset = "0x249F2E0", VA = "0x1824A0CE0", Slot = "5")]
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
		[Token(Token = "0x4000101")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000102")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000103")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000104")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MobileAuthenticatedStream _003C_003E4__this;

		[Token(Token = "0x4000105")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool sync;

		[Token(Token = "0x4000106")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600011C")]
		[Address(RVA = "0x24A0D50", Offset = "0x249F350", VA = "0x1824A0D50", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600011D")]
		[Address(RVA = "0x24A1010", Offset = "0x249F610", VA = "0x1824A1010", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40000CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private MobileTlsContext xobileTlsContext;

	[Token(Token = "0x40000CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private ExceptionDispatchInfo lastException;

	[Token(Token = "0x40000CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private AsyncProtocolRequest asyncHandshakeRequest;

	[Token(Token = "0x40000CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private AsyncProtocolRequest asyncReadRequest;

	[Token(Token = "0x40000CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private AsyncProtocolRequest asyncWriteRequest;

	[Token(Token = "0x40000D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private BufferOffsetSize2 readBuffer;

	[Token(Token = "0x40000D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private BufferOffsetSize2 writeBuffer;

	[Token(Token = "0x40000D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private object ioLock;

	[Token(Token = "0x40000D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private int closeRequested;

	[Token(Token = "0x40000D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private bool shutdown;

	[Token(Token = "0x40000D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Operation operation;

	[Token(Token = "0x40000D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int uniqueNameInteger;

	[Token(Token = "0x40000DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static int nextId;

	[Token(Token = "0x40000DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	internal readonly int ID;

	[Token(Token = "0x17000023")]
	public SslStream SslStream
	{
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "39")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000024")]
	public MonoTlsSettings Settings
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	public MobileTlsProvider Provider
	{
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000026")]
	internal string TargetHost
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x189BA60", Offset = "0x189A060", VA = "0x18189BA60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public override bool IsAuthenticated
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x24936E0", Offset = "0x2491CE0", VA = "0x1824936E0", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000028")]
	public X509Certificate LocalCertificate
	{
		[Token(Token = "0x6000103")]
		[Address(RVA = "0x24937D0", Offset = "0x2491DD0", VA = "0x1824937D0", Slot = "42")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000029")]
	public X509Certificate InternalLocalCertificate
	{
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x24935F0", Offset = "0x2491BF0", VA = "0x1824935F0", Slot = "43")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002A")]
	public override bool CanRead
	{
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x2493500", Offset = "0x2491B00", VA = "0x182493500", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002B")]
	public override bool CanTimeout
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x2493550", Offset = "0x2491B50", VA = "0x182493550", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002C")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x2493580", Offset = "0x2491B80", VA = "0x182493580", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002D")]
	public override bool CanSeek
	{
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002E")]
	public override long Length
	{
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x24937A0", Offset = "0x2491DA0", VA = "0x1824937A0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700002F")]
	public override long Position
	{
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x24938E0", Offset = "0x2491EE0", VA = "0x1824938E0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x2493970", Offset = "0x2491F70", VA = "0x182493970", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public override int ReadTimeout
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x2493910", Offset = "0x2491F10", VA = "0x182493910", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x24939B0", Offset = "0x2491FB0", VA = "0x1824939B0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public override int WriteTimeout
	{
		[Token(Token = "0x6000110")]
		[Address(RVA = "0x2493940", Offset = "0x2491F40", VA = "0x182493940", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000111")]
		[Address(RVA = "0x24939E0", Offset = "0x2491FE0", VA = "0x1824939E0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x2493380", Offset = "0x2491980", VA = "0x182493380")]
	public MobileAuthenticatedStream(Stream innerStream, bool leaveInnerStreamOpen, SslStream owner, MonoTlsSettings settings, MobileTlsProvider provider)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x24917A0", Offset = "0x248FDA0", VA = "0x1824917A0")]
	internal void CheckThrow(bool authSuccessCheck, bool shutdownCheck = false)
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x2491D00", Offset = "0x2490300", VA = "0x182491D00")]
	internal static Exception GetSSPIException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x2491AE0", Offset = "0x24900E0", VA = "0x182491AE0")]
	internal static Exception GetIOException(Exception e, string message)
	{
		return null;
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x2491C60", Offset = "0x2490260", VA = "0x182491C60")]
	internal static Exception GetInternalError()
	{
		return null;
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x2491CB0", Offset = "0x24902B0", VA = "0x182491CB0")]
	internal static Exception GetInvalidNestedCallException()
	{
		return null;
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x2492FD0", Offset = "0x24915D0", VA = "0x182492FD0")]
	internal ExceptionDispatchInfo SetException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x24915D0", Offset = "0x248FBD0", VA = "0x1824915D0")]
	public void AuthenticateAsClient(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation)
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x2491460", Offset = "0x248FA60", VA = "0x182491460", Slot = "40")]
	public Task AuthenticateAsClientAsync(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation)
	{
		return null;
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x2492770", Offset = "0x2490D70", VA = "0x182492770")]
	[AsyncStateMachine(typeof(_003CProcessAuthentication_003Ed__48))]
	private Task ProcessAuthentication(bool runSynchronously, MonoSslAuthenticationOptions options, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000F1")]
	protected abstract MobileTlsContext CreateContext(MonoSslAuthenticationOptions options);

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x2492EB0", Offset = "0x24914B0", VA = "0x182492EB0", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x2493270", Offset = "0x2491870", VA = "0x182493270", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x2492E20", Offset = "0x2491420", VA = "0x182492E20", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x24931D0", Offset = "0x24917D0", VA = "0x1824931D0", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x2493050", Offset = "0x2491650", VA = "0x182493050")]
	[AsyncStateMachine(typeof(_003CStartOperation_003Ed__57))]
	private Task<int> StartOperation(OperationType type, AsyncProtocolRequest asyncRequest, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x2492260", Offset = "0x2490860", VA = "0x182492260")]
	internal int InternalRead(byte[] buffer, int offset, int size, out bool outWantMore)
	{
		return default(int);
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x24920E0", Offset = "0x24906E0", VA = "0x1824920E0")]
	private (int, bool) InternalRead(AsyncProtocolRequest asyncRequest, BufferOffsetSize internalBuffer, byte[] buffer, int offset, int size)
	{
		return default((int, bool));
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x2492600", Offset = "0x2490C00", VA = "0x182492600")]
	internal bool InternalWrite(byte[] buffer, int offset, int size)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x2492460", Offset = "0x2490A60", VA = "0x182492460")]
	private bool InternalWrite(AsyncProtocolRequest asyncRequest, BufferOffsetSize2 internalBuffer, byte[] buffer, int offset, int size)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x2491E80", Offset = "0x2490480", VA = "0x182491E80")]
	[AsyncStateMachine(typeof(_003CInnerRead_003Ed__66))]
	internal Task<int> InnerRead(bool sync, int requestedSize, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x2491FC0", Offset = "0x24905C0", VA = "0x182491FC0")]
	[AsyncStateMachine(typeof(_003CInnerWrite_003Ed__67))]
	internal Task InnerWrite(bool sync, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x2492890", Offset = "0x2490E90", VA = "0x182492890")]
	internal AsyncOperationStatus ProcessHandshake(AsyncOperationStatus status, bool renegotiate)
	{
		return default(AsyncOperationStatus);
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x2492BA0", Offset = "0x24911A0", VA = "0x182492BA0")]
	internal (int, bool) ProcessRead(BufferOffsetSize userBuffer)
	{
		return default((int, bool));
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x2492CE0", Offset = "0x24912E0", VA = "0x182492CE0")]
	internal (int, bool) ProcessWrite(BufferOffsetSize userBuffer)
	{
		return default((int, bool));
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x24918A0", Offset = "0x248FEA0", VA = "0x1824918A0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x2491AB0", Offset = "0x24900B0", VA = "0x182491AB0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x2492F90", Offset = "0x2491590", VA = "0x182492F90", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x2493020", Offset = "0x2491620", VA = "0x182493020", Slot = "31")]
	public override void SetLength(long value)
	{
	}
}
