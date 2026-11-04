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

[Token(Token = "0x2000346")]
internal class WebConnectionTunnel
{
	[Token(Token = "0x2000347")]
	private enum NtlmAuthState
	{
		[Token(Token = "0x4000D24")]
		None,
		[Token(Token = "0x4000D25")]
		Challenge,
		[Token(Token = "0x4000D26")]
		Response
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000348")]
	[CompilerGenerated]
	private struct _003CInitialize_003Ed__42 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D27")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D28")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000D29")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebConnectionTunnel _003C_003E4__this;

		[Token(Token = "0x4000D2A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Stream stream;

		[Token(Token = "0x4000D2B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000D2C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private bool _003Chave_auth_003E5__2;

		[Token(Token = "0x4000D2D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000D2E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<(WebHeaderCollection, byte[], int)>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x60016CA")]
		[Address(RVA = "0x28032C0", Offset = "0x28018C0", VA = "0x1828032C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60016CB")]
		[Address(RVA = "0x2804120", Offset = "0x2802720", VA = "0x182804120", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000349")]
	[CompilerGenerated]
	private struct _003CReadHeaders_003Ed__43 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D2F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D30")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<(WebHeaderCollection, byte[], int)> _003C_003Et__builder;

		[Token(Token = "0x4000D31")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000D32")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Stream stream;

		[Token(Token = "0x4000D33")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public WebConnectionTunnel _003C_003E4__this;

		[Token(Token = "0x4000D34")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private byte[] _003CretBuffer_003E5__2;

		[Token(Token = "0x4000D35")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003Cstatus_003E5__3;

		[Token(Token = "0x4000D36")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private byte[] _003Cbuffer_003E5__4;

		[Token(Token = "0x4000D37")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private MemoryStream _003Cms_003E5__5;

		[Token(Token = "0x4000D38")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60016CC")]
		[Address(RVA = "0x2806A30", Offset = "0x2805030", VA = "0x182806A30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60016CD")]
		[Address(RVA = "0x2807330", Offset = "0x2805930", VA = "0x182807330", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000D19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private HttpWebRequest connectRequest;

	[Token(Token = "0x4000D1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private NtlmAuthState ntlmAuthState;

	[Token(Token = "0x170004E2")]
	public HttpWebRequest Request
	{
		[Token(Token = "0x60016B5")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E3")]
	public Uri ConnectUri
	{
		[Token(Token = "0x60016B6")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E4")]
	public bool Success
	{
		[Token(Token = "0x60016B8")]
		[Address(RVA = "0x584AB0", Offset = "0x5830B0", VA = "0x180584AB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60016B9")]
		[Address(RVA = "0x584B60", Offset = "0x583160", VA = "0x180584B60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004E5")]
	public bool CloseConnection
	{
		[Token(Token = "0x60016BA")]
		[Address(RVA = "0x2809E90", Offset = "0x2808490", VA = "0x182809E90")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60016BB")]
		[Address(RVA = "0x2809EA0", Offset = "0x28084A0", VA = "0x182809EA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004E6")]
	public int StatusCode
	{
		[Token(Token = "0x60016BC")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60016BD")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004E7")]
	private string StatusDescription
	{
		[Token(Token = "0x60016BE")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170004E8")]
	public string[] Challenge
	{
		[Token(Token = "0x60016BF")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60016C0")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004E9")]
	public WebHeaderCollection Headers
	{
		[Token(Token = "0x60016C1")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60016C2")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004EA")]
	public Version ProxyVersion
	{
		[Token(Token = "0x60016C3")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60016C4")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004EB")]
	public byte[] Data
	{
		[Token(Token = "0x60016C5")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60016C6")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60016B7")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	public WebConnectionTunnel(HttpWebRequest request, Uri connectUri)
	{
	}

	[Token(Token = "0x60016C7")]
	[Address(RVA = "0x2809C20", Offset = "0x2808220", VA = "0x182809C20")]
	[AsyncStateMachine(typeof(_003CInitialize_003Ed__42))]
	internal Task Initialize(Stream stream, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60016C8")]
	[Address(RVA = "0x2809D40", Offset = "0x2808340", VA = "0x182809D40")]
	[AsyncStateMachine(typeof(_003CReadHeaders_003Ed__43))]
	private Task<(WebHeaderCollection, byte[], int)> ReadHeaders(Stream stream, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60016C9")]
	[Address(RVA = "0x2809BA0", Offset = "0x28081A0", VA = "0x182809BA0")]
	private void FlushContents(Stream stream, int contentLength)
	{
	}
}
