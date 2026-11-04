// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.MonoTlsStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.IO;
using System.Net;
using System.Net.Security;
using System.Net.Sockets;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;
using Mono.Security.Interface;

namespace Mono.Net.Security;

[Token(Token = "0x2000061")]
internal class MonoTlsStream : IDisposable
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000062")]
	[CompilerGenerated]
	private struct _003CCreateStream_003Ed__18 : IAsyncStateMachine
	{
		[Token(Token = "0x4000123")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000124")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<Stream> _003C_003Et__builder;

		[Token(Token = "0x4000125")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MonoTlsStream _003C_003E4__this;

		[Token(Token = "0x4000126")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebConnectionTunnel tunnel;

		[Token(Token = "0x4000127")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000128")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private Socket _003Csocket_003E5__2;

		[Token(Token = "0x4000129")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600016E")]
		[Address(RVA = "0x249FC70", Offset = "0x249E270", VA = "0x18249FC70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600016F")]
		[Address(RVA = "0x24A0320", Offset = "0x249E920", VA = "0x1824A0320", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x400011B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly MobileTlsProvider provider;

	[Token(Token = "0x400011C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly NetworkStream networkStream;

	[Token(Token = "0x400011D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly HttpWebRequest request;

	[Token(Token = "0x400011E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly MonoTlsSettings settings;

	[Token(Token = "0x400011F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private SslStream sslStream;

	[Token(Token = "0x4000120")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly object sslStreamLock;

	[Token(Token = "0x4000121")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private WebExceptionStatus status;

	[Token(Token = "0x17000053")]
	internal HttpWebRequest Request
	{
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000054")]
	internal WebExceptionStatus ExceptionStatus
	{
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
		get
		{
			return default(WebExceptionStatus);
		}
	}

	[Token(Token = "0x17000055")]
	internal bool CertificateValidationFailed
	{
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x1CC5A60", Offset = "0x1CC4060", VA = "0x181CC5A60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000169")]
		[Address(RVA = "0x1CC5C30", Offset = "0x1CC4230", VA = "0x181CC5C30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x249E2E0", Offset = "0x249C8E0", VA = "0x18249E2E0")]
	public MonoTlsStream(HttpWebRequest request, NetworkStream networkStream)
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x249E180", Offset = "0x249C780", VA = "0x18249E180")]
	[AsyncStateMachine(typeof(_003CCreateStream_003Ed__18))]
	internal Task<Stream> CreateStream(WebConnectionTunnel tunnel, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x249E2D0", Offset = "0x249C8D0", VA = "0x18249E2D0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x249E0D0", Offset = "0x249C6D0", VA = "0x18249E0D0")]
	private void CloseSslStream()
	{
	}
}
