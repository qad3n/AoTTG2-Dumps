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

[Token(Token = "0x20009B8")]
public sealed class AottgApiClient
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20009B9")]
	[CompilerGenerated]
	private struct _003CSendAsync_003Ed__4 : IAsyncStateMachine
	{
		[Token(Token = "0x40030CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40030CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder<AottgApiResult> _003C_003Et__builder;

		[Token(Token = "0x40030CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AottgApiRequest request;

		[Token(Token = "0x40030D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AottgApiClient _003C_003E4__this;

		[Token(Token = "0x40030D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40030D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private AottgApiTransportRequest _003CtransportRequest_003E5__2;

		[Token(Token = "0x40030D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UniTask<AottgApiTransportResponse>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6005A5D")]
		[Address(RVA = "0x5D2A5D0", Offset = "0x5D295D0", VA = "0x5D2A5D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6005A5E")]
		[Address(RVA = "0x5D2ABD0", Offset = "0x5D29BD0", VA = "0x5D2ABD0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40030CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Func<string> _baseUrlProvider;

	[Token(Token = "0x40030CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly IAottgApiTransport _transport;

	[Token(Token = "0x6005A51")]
	[Address(RVA = "0x5D249E0", Offset = "0x5D239E0", VA = "0x5D249E0")]
	public AottgApiClient()
	{
	}

	[Token(Token = "0x6005A52")]
	[Address(RVA = "0x5D29280", Offset = "0x5D28280", VA = "0x5D29280")]
	public AottgApiClient(Func<string> baseUrlProvider, IAottgApiTransport transport)
	{
	}

	[Token(Token = "0x6005A53")]
	[Address(RVA = "0x5D24AD0", Offset = "0x5D23AD0", VA = "0x5D24AD0")]
	[AsyncStateMachine(typeof(_003CSendAsync_003Ed__4))]
	public UniTask<AottgApiResult> SendAsync(AottgApiRequest request, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<AottgApiResult>);
	}

	[Token(Token = "0x6005A54")]
	[Address(RVA = "0x5D29350", Offset = "0x5D28350", VA = "0x5D29350")]
	private static string DefaultBaseUrl()
	{
		return null;
	}

	[Token(Token = "0x6005A55")]
	[Address(RVA = "0x5D293C0", Offset = "0x5D283C0", VA = "0x5D293C0")]
	private AottgApiTransportRequest BuildTransportRequest(AottgApiRequest request)
	{
		return null;
	}

	[Token(Token = "0x6005A56")]
	[Address(RVA = "0x5D29680", Offset = "0x5D28680", VA = "0x5D29680")]
	private string BuildUrl(string path)
	{
		return null;
	}

	[Token(Token = "0x6005A57")]
	[Address(RVA = "0x5D297F0", Offset = "0x5D287F0", VA = "0x5D297F0")]
	private static AottgApiResult HandleResponse(AottgApiRequest request, AottgApiTransportRequest transportRequest, AottgApiTransportResponse response)
	{
		return null;
	}

	[Token(Token = "0x6005A58")]
	[Address(RVA = "0x5D29B40", Offset = "0x5D28B40", VA = "0x5D29B40")]
	private static AottgApiResult NetworkFailure(AottgApiRequest request, AottgApiTransportRequest transportRequest, AottgApiTransportResponse response)
	{
		return null;
	}

	[Token(Token = "0x6005A59")]
	[Address(RVA = "0x5D29B30", Offset = "0x5D28B30", VA = "0x5D29B30")]
	private static bool IsNetworkError(AottgApiTransportResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A5A")]
	[Address(RVA = "0x5D29DF0", Offset = "0x5D28DF0", VA = "0x5D29DF0")]
	private static string ParseError(string responseText, long responseCode)
	{
		return null;
	}

	[Token(Token = "0x6005A5B")]
	[Address(RVA = "0x5D2A370", Offset = "0x5D29370", VA = "0x5D2A370")]
	private static string FieldValue(JSONNode node, string name)
	{
		return null;
	}

	[Token(Token = "0x6005A5C")]
	[Address(RVA = "0x5D29F90", Offset = "0x5D28F90", VA = "0x5D29F90")]
	private static void LogHttpFailure(AottgApiTransportRequest request, AottgApiTransportResponse response, string text)
	{
	}
}
