// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebConnectionTunnel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000307")]
internal class WebConnectionTunnel
{
	[Token(Token = "0x2000308")]
	private enum NtlmAuthState
	{
		[Token(Token = "0x4000C55")]
		None,
		[Token(Token = "0x4000C56")]
		Challenge,
		[Token(Token = "0x4000C57")]
		Response
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000309")]
	[CompilerGenerated]
	private struct _003CInitialize_003Ed__42 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C58")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C59")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000C5A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebConnectionTunnel _003C_003E4__this;

		[Token(Token = "0x4000C5B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Stream stream;

		[Token(Token = "0x4000C5C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C5D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private bool _003Chave_auth_003E5__2;

		[Token(Token = "0x4000C5E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000C5F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<(WebHeaderCollection, byte[], int)>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600150C")]
		[Address(RVA = "0x61979F0", Offset = "0x61969F0", VA = "0x61979F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600150D")]
		[Address(RVA = "0x6198790", Offset = "0x6197790", VA = "0x6198790", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200030A")]
	[CompilerGenerated]
	private struct _003CReadHeaders_003Ed__43 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C60")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C61")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<(WebHeaderCollection, byte[], int)> _003C_003Et__builder;

		[Token(Token = "0x4000C62")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C63")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Stream stream;

		[Token(Token = "0x4000C64")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public WebConnectionTunnel _003C_003E4__this;

		[Token(Token = "0x4000C65")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private byte[] _003CretBuffer_003E5__2;

		[Token(Token = "0x4000C66")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003Cstatus_003E5__3;

		[Token(Token = "0x4000C67")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private byte[] _003Cbuffer_003E5__4;

		[Token(Token = "0x4000C68")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private MemoryStream _003Cms_003E5__5;

		[Token(Token = "0x4000C69")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600150E")]
		[Address(RVA = "0x61987F0", Offset = "0x61977F0", VA = "0x61987F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600150F")]
		[Address(RVA = "0x61992D0", Offset = "0x61982D0", VA = "0x61992D0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000C4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private HttpWebRequest connectRequest;

	[Token(Token = "0x4000C4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private NtlmAuthState ntlmAuthState;

	[Token(Token = "0x170004B3")]
	public HttpWebRequest Request
	{
		[Token(Token = "0x60014F7")]
		[Address(RVA = "0x61975B0", Offset = "0x61965B0", VA = "0x61975B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004B4")]
	public Uri ConnectUri
	{
		[Token(Token = "0x60014F8")]
		[Address(RVA = "0x61975C0", Offset = "0x61965C0", VA = "0x61975C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004B5")]
	public bool Success
	{
		[Token(Token = "0x60014FA")]
		[Address(RVA = "0x6197610", Offset = "0x6196610", VA = "0x6197610")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60014FB")]
		[Address(RVA = "0x6197620", Offset = "0x6196620", VA = "0x6197620")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004B6")]
	public bool CloseConnection
	{
		[Token(Token = "0x60014FC")]
		[Address(RVA = "0x6197630", Offset = "0x6196630", VA = "0x6197630")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60014FD")]
		[Address(RVA = "0x6197640", Offset = "0x6196640", VA = "0x6197640")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004B7")]
	public int StatusCode
	{
		[Token(Token = "0x60014FE")]
		[Address(RVA = "0x6197650", Offset = "0x6196650", VA = "0x6197650")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60014FF")]
		[Address(RVA = "0x6197660", Offset = "0x6196660", VA = "0x6197660")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004B8")]
	private string StatusDescription
	{
		[Token(Token = "0x6001500")]
		[Address(RVA = "0x6197670", Offset = "0x6196670", VA = "0x6197670")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170004B9")]
	public string[] Challenge
	{
		[Token(Token = "0x6001501")]
		[Address(RVA = "0x6197680", Offset = "0x6196680", VA = "0x6197680")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001502")]
		[Address(RVA = "0x6197690", Offset = "0x6196690", VA = "0x6197690")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004BA")]
	public WebHeaderCollection Headers
	{
		[Token(Token = "0x6001503")]
		[Address(RVA = "0x61976A0", Offset = "0x61966A0", VA = "0x61976A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001504")]
		[Address(RVA = "0x61976B0", Offset = "0x61966B0", VA = "0x61976B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004BB")]
	public Version ProxyVersion
	{
		[Token(Token = "0x6001505")]
		[Address(RVA = "0x61976C0", Offset = "0x61966C0", VA = "0x61976C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001506")]
		[Address(RVA = "0x61976D0", Offset = "0x61966D0", VA = "0x61976D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004BC")]
	public byte[] Data
	{
		[Token(Token = "0x6001507")]
		[Address(RVA = "0x61976E0", Offset = "0x61966E0", VA = "0x61976E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001508")]
		[Address(RVA = "0x61976F0", Offset = "0x61966F0", VA = "0x61976F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60014F9")]
	[Address(RVA = "0x61975D0", Offset = "0x61965D0", VA = "0x61975D0")]
	public WebConnectionTunnel(HttpWebRequest request, Uri connectUri)
	{
	}

	[Token(Token = "0x6001509")]
	[Address(RVA = "0x6197700", Offset = "0x6196700", VA = "0x6197700")]
	[AsyncStateMachine(typeof(_003CInitialize_003Ed__42))]
	internal Task Initialize(Stream stream, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600150A")]
	[Address(RVA = "0x6197810", Offset = "0x6196810", VA = "0x6197810")]
	[AsyncStateMachine(typeof(_003CReadHeaders_003Ed__43))]
	private Task<(WebHeaderCollection, byte[], int)> ReadHeaders(Stream stream, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600150B")]
	[Address(RVA = "0x6197960", Offset = "0x6196960", VA = "0x6197960")]
	private void FlushContents(Stream stream, int contentLength)
	{
	}
}
