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

[Token(Token = "0x20007C4")]
public sealed class AottgApiClient
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20007C5")]
	[CompilerGenerated]
	private struct _003CSendAsync_003Ed__4 : IAsyncStateMachine
	{
		[Token(Token = "0x400254D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400254E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder<AottgApiResult> _003C_003Et__builder;

		[Token(Token = "0x400254F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AottgApiRequest request;

		[Token(Token = "0x4002550")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AottgApiClient _003C_003E4__this;

		[Token(Token = "0x4002551")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4002552")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private AottgApiTransportRequest _003CtransportRequest_003E5__2;

		[Token(Token = "0x4002553")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UniTask<AottgApiTransportResponse>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6004A8B")]
		[Address(RVA = "0x43CE5C0", Offset = "0x43CE5C0", VA = "0x43CE5C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6004A8C")]
		[Address(RVA = "0x43CEDC0", Offset = "0x43CEDC0", VA = "0x43CEDC0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x400254B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Func<string> _baseUrlProvider;

	[Token(Token = "0x400254C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly IAottgApiTransport _transport;

	[Token(Token = "0x6004A7F")]
	[Address(RVA = "0x43C4F50", Offset = "0x43C4F50", VA = "0x43C4F50")]
	public AottgApiClient()
	{
	}

	[Token(Token = "0x6004A80")]
	[Address(RVA = "0x43CD1C0", Offset = "0x43CD1C0", VA = "0x43CD1C0")]
	public AottgApiClient(Func<string> baseUrlProvider, IAottgApiTransport transport)
	{
	}

	[Token(Token = "0x6004A81")]
	[Address(RVA = "0x43C5040", Offset = "0x43C5040", VA = "0x43C5040")]
	[AsyncStateMachine(typeof(_003CSendAsync_003Ed__4))]
	public UniTask<AottgApiResult> SendAsync(AottgApiRequest request, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask<AottgApiResult>);
	}

	[Token(Token = "0x6004A82")]
	[Address(RVA = "0x43CD290", Offset = "0x43CD290", VA = "0x43CD290")]
	private static string DefaultBaseUrl()
	{
		return null;
	}

	[Token(Token = "0x6004A83")]
	[Address(RVA = "0x43CD300", Offset = "0x43CD300", VA = "0x43CD300")]
	private AottgApiTransportRequest BuildTransportRequest(AottgApiRequest request)
	{
		return null;
	}

	[Token(Token = "0x6004A84")]
	[Address(RVA = "0x43CD5D0", Offset = "0x43CD5D0", VA = "0x43CD5D0")]
	private string BuildUrl(string path)
	{
		return null;
	}

	[Token(Token = "0x6004A85")]
	[Address(RVA = "0x43CD740", Offset = "0x43CD740", VA = "0x43CD740")]
	private static AottgApiResult HandleResponse(AottgApiRequest request, AottgApiTransportRequest transportRequest, AottgApiTransportResponse response)
	{
		return null;
	}

	[Token(Token = "0x6004A86")]
	[Address(RVA = "0x43CDAF0", Offset = "0x43CDAF0", VA = "0x43CDAF0")]
	private static AottgApiResult NetworkFailure(AottgApiRequest request, AottgApiTransportRequest transportRequest, AottgApiTransportResponse response)
	{
		return null;
	}

	[Token(Token = "0x6004A87")]
	[Address(RVA = "0x43CDAE0", Offset = "0x43CDAE0", VA = "0x43CDAE0")]
	private static bool IsNetworkError(AottgApiTransportResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A88")]
	[Address(RVA = "0x43CDDA0", Offset = "0x43CDDA0", VA = "0x43CDDA0")]
	private static string ParseError(string responseText, long responseCode)
	{
		return null;
	}

	[Token(Token = "0x6004A89")]
	[Address(RVA = "0x43CE370", Offset = "0x43CE370", VA = "0x43CE370")]
	private static string FieldValue(JSONNode node, string name)
	{
		return null;
	}

	[Token(Token = "0x6004A8A")]
	[Address(RVA = "0x43CDFA0", Offset = "0x43CDFA0", VA = "0x43CDFA0")]
	private static void LogHttpFailure(AottgApiTransportRequest request, AottgApiTransportResponse response, string text)
	{
	}
}
