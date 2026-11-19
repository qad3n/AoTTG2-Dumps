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
		[Token(Token = "0x4000122")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000123")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<Stream> _003C_003Et__builder;

		[Token(Token = "0x4000124")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MonoTlsStream _003C_003E4__this;

		[Token(Token = "0x4000125")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebConnectionTunnel tunnel;

		[Token(Token = "0x4000126")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000127")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private Socket _003Csocket_003E5__2;

		[Token(Token = "0x4000128")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000165")]
		[Address(RVA = "0x5E3E780", Offset = "0x5E3D780", VA = "0x5E3E780", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000166")]
		[Address(RVA = "0x5E3EFE0", Offset = "0x5E3DFE0", VA = "0x5E3EFE0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x400011A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly MobileTlsProvider provider;

	[Token(Token = "0x400011B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly NetworkStream networkStream;

	[Token(Token = "0x400011C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly HttpWebRequest request;

	[Token(Token = "0x400011D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly MonoTlsSettings settings;

	[Token(Token = "0x400011E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private SslStream sslStream;

	[Token(Token = "0x400011F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly object sslStreamLock;

	[Token(Token = "0x4000120")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private WebExceptionStatus status;

	[Token(Token = "0x1700004F")]
	internal HttpWebRequest Request
	{
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x5E3E290", Offset = "0x5E3D290", VA = "0x5E3E290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000050")]
	internal WebExceptionStatus ExceptionStatus
	{
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x5E3E2A0", Offset = "0x5E3D2A0", VA = "0x5E3E2A0")]
		get
		{
			return default(WebExceptionStatus);
		}
	}

	[Token(Token = "0x17000051")]
	internal bool CertificateValidationFailed
	{
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x5E3E2B0", Offset = "0x5E3D2B0", VA = "0x5E3E2B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x5E3E2C0", Offset = "0x5E3D2C0", VA = "0x5E3E2C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x5E3E2D0", Offset = "0x5E3D2D0", VA = "0x5E3E2D0")]
	public MonoTlsStream(HttpWebRequest request, NetworkStream networkStream)
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x5E3E570", Offset = "0x5E3D570", VA = "0x5E3E570")]
	[AsyncStateMachine(typeof(_003CCreateStream_003Ed__18))]
	internal Task<Stream> CreateStream(WebConnectionTunnel tunnel, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x5E3E6A0", Offset = "0x5E3D6A0", VA = "0x5E3E6A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x5E3E6B0", Offset = "0x5E3D6B0", VA = "0x5E3E6B0")]
	private void CloseSslStream()
	{
	}
}
