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

[Token(Token = "0x20001BE")]
internal class WebConnectionTunnel
{
	[Token(Token = "0x20001BF")]
	private enum NtlmAuthState
	{
		[Token(Token = "0x400090E")]
		None,
		[Token(Token = "0x400090F")]
		Challenge,
		[Token(Token = "0x4000910")]
		Response
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001C0")]
	[CompilerGenerated]
	private struct _003CInitialize_003Ed__42 : IAsyncStateMachine
	{
		[Token(Token = "0x4000911")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000912")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000913")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebConnectionTunnel _003C_003E4__this;

		[Token(Token = "0x4000914")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Stream stream;

		[Token(Token = "0x4000915")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000916")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private bool _003Chave_auth_003E5__2;

		[Token(Token = "0x4000917")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000918")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<(WebHeaderCollection, byte[], int)>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000B09")]
		[Address(RVA = "0x4995D60", Offset = "0x4995D60", VA = "0x4995D60", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B0A")]
		[Address(RVA = "0x49970E0", Offset = "0x49970E0", VA = "0x49970E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001C1")]
	[CompilerGenerated]
	private struct _003CReadHeaders_003Ed__43 : IAsyncStateMachine
	{
		[Token(Token = "0x4000919")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400091A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<(WebHeaderCollection, byte[], int)> _003C_003Et__builder;

		[Token(Token = "0x400091B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400091C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Stream stream;

		[Token(Token = "0x400091D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public WebConnectionTunnel _003C_003E4__this;

		[Token(Token = "0x400091E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private byte[] _003CretBuffer_003E5__2;

		[Token(Token = "0x400091F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003Cstatus_003E5__3;

		[Token(Token = "0x4000920")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private byte[] _003Cbuffer_003E5__4;

		[Token(Token = "0x4000921")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private MemoryStream _003Cms_003E5__5;

		[Token(Token = "0x4000922")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x4997140", Offset = "0x4997140", VA = "0x4997140", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B0C")]
		[Address(RVA = "0x4997FE0", Offset = "0x4997FE0", VA = "0x4997FE0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000903")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private HttpWebRequest connectRequest;

	[Token(Token = "0x4000904")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private NtlmAuthState ntlmAuthState;

	[Token(Token = "0x1700028C")]
	public HttpWebRequest Request
	{
		[Token(Token = "0x6000AF4")]
		[Address(RVA = "0x4995A70", Offset = "0x4995A70", VA = "0x4995A70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028D")]
	public Uri ConnectUri
	{
		[Token(Token = "0x6000AF5")]
		[Address(RVA = "0x4995A80", Offset = "0x4995A80", VA = "0x4995A80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028E")]
	public bool Success
	{
		[Token(Token = "0x6000AF7")]
		[Address(RVA = "0x4995A90", Offset = "0x4995A90", VA = "0x4995A90")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AF8")]
		[Address(RVA = "0x4995AA0", Offset = "0x4995AA0", VA = "0x4995AA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700028F")]
	public bool CloseConnection
	{
		[Token(Token = "0x6000AF9")]
		[Address(RVA = "0x4995AB0", Offset = "0x4995AB0", VA = "0x4995AB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AFA")]
		[Address(RVA = "0x4995AC0", Offset = "0x4995AC0", VA = "0x4995AC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000290")]
	public int StatusCode
	{
		[Token(Token = "0x6000AFB")]
		[Address(RVA = "0x4995AD0", Offset = "0x4995AD0", VA = "0x4995AD0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000AFC")]
		[Address(RVA = "0x4995AE0", Offset = "0x4995AE0", VA = "0x4995AE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000291")]
	private string StatusDescription
	{
		[Token(Token = "0x6000AFD")]
		[Address(RVA = "0x4995AF0", Offset = "0x4995AF0", VA = "0x4995AF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000292")]
	public string[] Challenge
	{
		[Token(Token = "0x6000AFE")]
		[Address(RVA = "0x4995B00", Offset = "0x4995B00", VA = "0x4995B00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000AFF")]
		[Address(RVA = "0x4995B10", Offset = "0x4995B10", VA = "0x4995B10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000293")]
	public WebHeaderCollection Headers
	{
		[Token(Token = "0x6000B00")]
		[Address(RVA = "0x4995B20", Offset = "0x4995B20", VA = "0x4995B20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B01")]
		[Address(RVA = "0x4995B30", Offset = "0x4995B30", VA = "0x4995B30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000294")]
	public Version ProxyVersion
	{
		[Token(Token = "0x6000B02")]
		[Address(RVA = "0x4995B40", Offset = "0x4995B40", VA = "0x4995B40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B03")]
		[Address(RVA = "0x4995B50", Offset = "0x4995B50", VA = "0x4995B50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000295")]
	public byte[] Data
	{
		[Token(Token = "0x6000B04")]
		[Address(RVA = "0x4995B60", Offset = "0x4995B60", VA = "0x4995B60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B05")]
		[Address(RVA = "0x4995B70", Offset = "0x4995B70", VA = "0x4995B70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x4994180", Offset = "0x4994180", VA = "0x4994180")]
	public WebConnectionTunnel(HttpWebRequest request, Uri connectUri)
	{
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x49941C0", Offset = "0x49941C0", VA = "0x49941C0")]
	[AsyncStateMachine(typeof(_003CInitialize_003Ed__42))]
	internal Task Initialize(Stream stream, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x4995B80", Offset = "0x4995B80", VA = "0x4995B80")]
	[AsyncStateMachine(typeof(_003CReadHeaders_003Ed__43))]
	private Task<(WebHeaderCollection, byte[], int)> ReadHeaders(Stream stream, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x4995CD0", Offset = "0x4995CD0", VA = "0x4995CD0")]
	private void FlushContents(Stream stream, int contentLength)
	{
	}
}
