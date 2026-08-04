// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlUrlResolver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Net;
using System.Net.Cache;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000F0")]
public class XmlUrlResolver : XmlResolver
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000F1")]
	[CompilerGenerated]
	private struct _003CGetEntityAsync_003Ed__15 : IAsyncStateMachine
	{
		[Token(Token = "0x40005BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40005BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<object> _003C_003Et__builder;

		[Token(Token = "0x40005C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Type ofObjectToReturn;

		[Token(Token = "0x40005C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Uri absoluteUri;

		[Token(Token = "0x40005C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public XmlUrlResolver _003C_003E4__this;

		[Token(Token = "0x40005C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<System.IO.Stream>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000C30")]
		[Address(RVA = "0x4803060", Offset = "0x4803060", VA = "0x4803060", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000C31")]
		[Address(RVA = "0x4803590", Offset = "0x4803590", VA = "0x4803590", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40005BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static object s_DownloadManager;

	[Token(Token = "0x40005BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private ICredentials _credentials;

	[Token(Token = "0x40005BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IWebProxy _proxy;

	[Token(Token = "0x40005BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private RequestCachePolicy _cachePolicy;

	[Token(Token = "0x1700030C")]
	private static XmlDownloadManager DownloadManager
	{
		[Token(Token = "0x6000C2B")]
		[Address(RVA = "0x4802CD0", Offset = "0x4802CD0", VA = "0x4802CD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x4802DA0", Offset = "0x4802DA0", VA = "0x4802DA0")]
	public XmlUrlResolver()
	{
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x4802DB0", Offset = "0x4802DB0", VA = "0x4802DB0", Slot = "4")]
	public override object GetEntity(Uri absoluteUri, string role, Type ofObjectToReturn)
	{
		return null;
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x4802F10", Offset = "0x4802F10", VA = "0x4802F10", Slot = "5")]
	public override Uri ResolveUri(Uri baseUri, string relativeUri)
	{
		return null;
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x4802F20", Offset = "0x4802F20", VA = "0x4802F20", Slot = "7")]
	[AsyncStateMachine(typeof(_003CGetEntityAsync_003Ed__15))]
	public override Task<object> GetEntityAsync(Uri absoluteUri, string role, Type ofObjectToReturn)
	{
		return null;
	}
}
