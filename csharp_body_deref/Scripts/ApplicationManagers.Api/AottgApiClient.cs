// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgApiClient
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgApiClient.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers.Api;

[Token(Token = "0x2000951")]
public sealed class AottgApiClient
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000952")]
	[CompilerGenerated]
	private struct _003CSendAsync_003Ed__4 : IAsyncStateMachine
	{
		[Token(Token = "0x4002E1F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4002E20")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder<AottgApiResult> _003C_003Et__builder;

		[Token(Token = "0x4002E21")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AottgApiRequest request;

		[Token(Token = "0x4002E22")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AottgApiClient _003C_003E4__this;

		[Token(Token = "0x4002E23")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4002E24")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private AottgApiTransportRequest _003CtransportRequest_003E5__2;

		[Token(Token = "0x4002E25")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UniTask<AottgApiTransportResponse>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6005704")]
		[Address(RVA = "0x23742E0", Offset = "0x23728E0", VA = "0x1823742E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6005705")]
		[Address(RVA = "0x23747C0", Offset = "0x2372DC0", VA = "0x1823747C0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4002E1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Func<string> _baseUrlProvider;

	[Token(Token = "0x4002E1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly IAottgApiTransport _transport;

	[Token(Token = "0x60056F8")]
	[Address(RVA = "0x23606A0", Offset = "0x235ECA0", VA = "0x1823606A0")]
	public AottgApiClient()
	{
	}

	[Token(Token = "0x60056F9")]
	[Address(RVA = "0x23605C0", Offset = "0x235EBC0", VA = "0x1823605C0")]
	public AottgApiClient(Func<string> baseUrlProvider, IAottgApiTransport transport)
	{
	}

	[Token(Token = "0x60056FA")]
	[Address(RVA = "0x2360490", Offset = "0x235EA90", VA = "0x182360490")]
	[AsyncStateMachine(typeof(_003CSendAsync_003Ed__4))]
	public UniTask<AottgApiResult> SendAsync(AottgApiRequest request, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<AottgApiResult>);
	}

	[Token(Token = "0x60056FB")]
	[Address(RVA = "0x235F840", Offset = "0x235DE40", VA = "0x18235F840")]
	private static string DefaultBaseUrl()
	{
		return null;
	}

	[Token(Token = "0x60056FC")]
	[Address(RVA = "0x235F340", Offset = "0x235D940", VA = "0x18235F340")]
	private AottgApiTransportRequest BuildTransportRequest(AottgApiRequest request)
	{
		return null;
	}

	[Token(Token = "0x60056FD")]
	[Address(RVA = "0x235F6C0", Offset = "0x235DCC0", VA = "0x18235F6C0")]
	private string BuildUrl(string path)
	{
		return null;
	}

	[Token(Token = "0x60056FE")]
	[Address(RVA = "0x235FA90", Offset = "0x235E090", VA = "0x18235FA90")]
	private static AottgApiResult HandleResponse(AottgApiRequest request, AottgApiTransportRequest transportRequest, AottgApiTransportResponse response)
	{
		return null;
	}

	[Token(Token = "0x60056FF")]
	[Address(RVA = "0x2360020", Offset = "0x235E620", VA = "0x182360020")]
	private static AottgApiResult NetworkFailure(AottgApiRequest request, AottgApiTransportRequest transportRequest, AottgApiTransportResponse response)
	{
		return null;
	}

	[Token(Token = "0x6005700")]
	[Address(RVA = "0x235FDD0", Offset = "0x235E3D0", VA = "0x18235FDD0")]
	private static bool IsNetworkError(AottgApiTransportResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6005701")]
	[Address(RVA = "0x2360340", Offset = "0x235E940", VA = "0x182360340")]
	private static string ParseError(string responseText, long responseCode)
	{
		return null;
	}

	[Token(Token = "0x6005702")]
	[Address(RVA = "0x235F890", Offset = "0x235DE90", VA = "0x18235F890")]
	private static string FieldValue(JSONNode node, string name)
	{
		return null;
	}

	[Token(Token = "0x6005703")]
	[Address(RVA = "0x235FDE0", Offset = "0x235E3E0", VA = "0x18235FDE0")]
	private static void LogHttpFailure(AottgApiTransportRequest request, AottgApiTransportResponse response, string text)
	{
	}
}
