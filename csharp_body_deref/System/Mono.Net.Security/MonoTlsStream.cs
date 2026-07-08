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
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000062")]
	[CompilerGenerated]
	private struct _003CCreateStream_003Ed__18 : IAsyncStateMachine
	{
		[Token(Token = "0x4000121")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000122")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<Stream> _003C_003Et__builder;

		[Token(Token = "0x4000123")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MonoTlsStream _003C_003E4__this;

		[Token(Token = "0x4000124")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebConnectionTunnel tunnel;

		[Token(Token = "0x4000125")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000126")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private Socket _003Csocket_003E5__2;

		[Token(Token = "0x4000127")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000164")]
		[Address(RVA = "0x45448D0", Offset = "0x45448D0", VA = "0x45448D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000165")]
		[Address(RVA = "0x4545300", Offset = "0x4545300", VA = "0x4545300", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000119")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly MobileTlsProvider provider;

	[Token(Token = "0x400011A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly NetworkStream networkStream;

	[Token(Token = "0x400011B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly HttpWebRequest request;

	[Token(Token = "0x400011C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly MonoTlsSettings settings;

	[Token(Token = "0x400011D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private SslStream sslStream;

	[Token(Token = "0x400011E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly object sslStreamLock;

	[Token(Token = "0x400011F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private WebExceptionStatus status;

	[Token(Token = "0x1700004F")]
	internal HttpWebRequest Request
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x4544500", Offset = "0x4544500", VA = "0x4544500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000050")]
	internal WebExceptionStatus ExceptionStatus
	{
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x4544510", Offset = "0x4544510", VA = "0x4544510")]
		get
		{
			return default(WebExceptionStatus);
		}
	}

	[Token(Token = "0x17000051")]
	internal bool CertificateValidationFailed
	{
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x4544520", Offset = "0x4544520", VA = "0x4544520")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x4544530", Offset = "0x4544530", VA = "0x4544530")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x4544540", Offset = "0x4544540", VA = "0x4544540")]
	public MonoTlsStream(HttpWebRequest request, NetworkStream networkStream)
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x45446B0", Offset = "0x45446B0", VA = "0x45446B0")]
	[AsyncStateMachine(typeof(_003CCreateStream_003Ed__18))]
	internal Task<Stream> CreateStream(WebConnectionTunnel tunnel, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x45447E0", Offset = "0x45447E0", VA = "0x45447E0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x45447F0", Offset = "0x45447F0", VA = "0x45447F0")]
	private void CloseSslStream()
	{
	}
}
