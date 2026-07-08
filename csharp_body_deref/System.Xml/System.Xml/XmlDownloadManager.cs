using System.Collections;
using System.Diagnostics;
using System.IO;
using System.Net;
using System.Net.Cache;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000D4")]
internal class XmlDownloadManager
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20000D6")]
	[CompilerGenerated]
	private struct _003CGetNonFileStreamAsync_003Ed__5 : IAsyncStateMachine
	{
		[Token(Token = "0x4000574")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000575")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<Stream> _003C_003Et__builder;

		[Token(Token = "0x4000576")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Uri uri;

		[Token(Token = "0x4000577")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public ICredentials credentials;

		[Token(Token = "0x4000578")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public IWebProxy proxy;

		[Token(Token = "0x4000579")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public RequestCachePolicy cachePolicy;

		[Token(Token = "0x400057A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public XmlDownloadManager _003C_003E4__this;

		[Token(Token = "0x400057B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private WebRequest _003Creq_003E5__2;

		[Token(Token = "0x400057C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<WebResponse>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000B95")]
		[Address(RVA = "0x44BF570", Offset = "0x44BF570", VA = "0x44BF570", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B96")]
		[Address(RVA = "0x44BFE60", Offset = "0x44BFE60", VA = "0x44BFE60", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000572")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Hashtable connections;

	[Token(Token = "0x6000B8D")]
	[Address(RVA = "0x44BE750", Offset = "0x44BE750", VA = "0x44BE750")]
	internal Stream GetStream(Uri uri, ICredentials credentials, IWebProxy proxy, RequestCachePolicy cachePolicy)
	{
		return null;
	}

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x44BE840", Offset = "0x44BE840", VA = "0x44BE840")]
	private Stream GetNonFileStream(Uri uri, ICredentials credentials, IWebProxy proxy, RequestCachePolicy cachePolicy)
	{
		return null;
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x44BF070", Offset = "0x44BF070", VA = "0x44BF070")]
	internal void Remove(string host)
	{
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x44BF1E0", Offset = "0x44BF1E0", VA = "0x44BF1E0")]
	internal Task<Stream> GetStreamAsync(Uri uri, ICredentials credentials, IWebProxy proxy, RequestCachePolicy cachePolicy)
	{
		return null;
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x44BF360", Offset = "0x44BF360", VA = "0x44BF360")]
	[AsyncStateMachine(typeof(_003CGetNonFileStreamAsync_003Ed__5))]
	private Task<Stream> GetNonFileStreamAsync(Uri uri, ICredentials credentials, IWebProxy proxy, RequestCachePolicy cachePolicy)
	{
		return null;
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x44BF4D0", Offset = "0x44BF4D0", VA = "0x44BF4D0")]
	public XmlDownloadManager()
	{
	}
}
