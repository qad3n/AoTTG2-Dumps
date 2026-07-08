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

[Token(Token = "0x2000762")]
public sealed class AottgApiClient
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000763")]
	[CompilerGenerated]
	private struct _003CSendAsync_003Ed__4 : IAsyncStateMachine
	{
		[Token(Token = "0x40023AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40023B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder<AottgApiResult> _003C_003Et__builder;

		[Token(Token = "0x40023B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AottgApiRequest request;

		[Token(Token = "0x40023B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AottgApiClient _003C_003E4__this;

		[Token(Token = "0x40023B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40023B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private AottgApiTransportRequest _003CtransportRequest_003E5__2;

		[Token(Token = "0x40023B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UniTask<AottgApiTransportResponse>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6004798")]
		[Address(RVA = "0x40B0C40", Offset = "0x40B0C40", VA = "0x40B0C40", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6004799")]
		[Address(RVA = "0x40B1440", Offset = "0x40B1440", VA = "0x40B1440", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40023AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Func<string> _baseUrlProvider;

	[Token(Token = "0x40023AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly IAottgApiTransport _transport;

	[Token(Token = "0x600478C")]
	[Address(RVA = "0x40AC020", Offset = "0x40AC020", VA = "0x40AC020")]
	public AottgApiClient()
	{
	}

	[Token(Token = "0x600478D")]
	[Address(RVA = "0x40AF840", Offset = "0x40AF840", VA = "0x40AF840")]
	public AottgApiClient(Func<string> baseUrlProvider, IAottgApiTransport transport)
	{
	}

	[Token(Token = "0x600478E")]
	[Address(RVA = "0x40AC110", Offset = "0x40AC110", VA = "0x40AC110")]
	[AsyncStateMachine(typeof(_003CSendAsync_003Ed__4))]
	public UniTask<AottgApiResult> SendAsync(AottgApiRequest request, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<AottgApiResult>);
	}

	[Token(Token = "0x600478F")]
	[Address(RVA = "0x40AF910", Offset = "0x40AF910", VA = "0x40AF910")]
	private static string DefaultBaseUrl()
	{
		return null;
	}

	[Token(Token = "0x6004790")]
	[Address(RVA = "0x40AF980", Offset = "0x40AF980", VA = "0x40AF980")]
	private AottgApiTransportRequest BuildTransportRequest(AottgApiRequest request)
	{
		return null;
	}

	[Token(Token = "0x6004791")]
	[Address(RVA = "0x40AFC50", Offset = "0x40AFC50", VA = "0x40AFC50")]
	private string BuildUrl(string path)
	{
		return null;
	}

	[Token(Token = "0x6004792")]
	[Address(RVA = "0x40AFDC0", Offset = "0x40AFDC0", VA = "0x40AFDC0")]
	private static AottgApiResult HandleResponse(AottgApiRequest request, AottgApiTransportRequest transportRequest, AottgApiTransportResponse response)
	{
		return null;
	}

	[Token(Token = "0x6004793")]
	[Address(RVA = "0x40B0170", Offset = "0x40B0170", VA = "0x40B0170")]
	private static AottgApiResult NetworkFailure(AottgApiRequest request, AottgApiTransportRequest transportRequest, AottgApiTransportResponse response)
	{
		return null;
	}

	[Token(Token = "0x6004794")]
	[Address(RVA = "0x40B0160", Offset = "0x40B0160", VA = "0x40B0160")]
	private static bool IsNetworkError(AottgApiTransportResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6004795")]
	[Address(RVA = "0x40B0420", Offset = "0x40B0420", VA = "0x40B0420")]
	private static string ParseError(string responseText, long responseCode)
	{
		return null;
	}

	[Token(Token = "0x6004796")]
	[Address(RVA = "0x40B09F0", Offset = "0x40B09F0", VA = "0x40B09F0")]
	private static string FieldValue(JSONNode node, string name)
	{
		return null;
	}

	[Token(Token = "0x6004797")]
	[Address(RVA = "0x40B0620", Offset = "0x40B0620", VA = "0x40B0620")]
	private static void LogHttpFailure(AottgApiTransportRequest request, AottgApiTransportResponse response, string text)
	{
	}
}
