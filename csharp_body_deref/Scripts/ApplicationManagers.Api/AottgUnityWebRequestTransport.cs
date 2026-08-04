// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgUnityWebRequestTransport
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgUnityWebRequestTransport.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Networking;

namespace ApplicationManagers.Api;

[Token(Token = "0x20007D5")]
public sealed class AottgUnityWebRequestTransport : IAottgApiTransport
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20007D6")]
	[CompilerGenerated]
	private struct _003CSendAsync_003Ed__0 : IAsyncStateMachine
	{
		[Token(Token = "0x4002593")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4002594")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder<AottgApiTransportResponse> _003C_003Et__builder;

		[Token(Token = "0x4002595")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AottgApiTransportRequest request;

		[Token(Token = "0x4002596")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4002597")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UnityWebRequest _003CunityRequest_003E5__2;

		[Token(Token = "0x4002598")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UniTask<UnityWebRequest>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6004AD4")]
		[Address(RVA = "0x43CF2B0", Offset = "0x43CF2B0", VA = "0x43CF2B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6004AD5")]
		[Address(RVA = "0x43D00A0", Offset = "0x43D00A0", VA = "0x43D00A0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x6004AD0")]
	[Address(RVA = "0x43CF020", Offset = "0x43CF020", VA = "0x43CF020", Slot = "4")]
	[AsyncStateMachine(typeof(_003CSendAsync_003Ed__0))]
	public UniTask<AottgApiTransportResponse> SendAsync(AottgApiTransportRequest request, CancellationToken cancellationToken)
	{
		return default(UniTask<AottgApiTransportResponse>);
	}

	[Token(Token = "0x6004AD1")]
	[Address(RVA = "0x43CF130", Offset = "0x43CF130", VA = "0x43CF130")]
	private static AottgApiTransportResponse BuildResponse(UnityWebRequest unityRequest, [Optional] string textOverride, [Optional] string errorOverride, [Optional] long? statusCodeOverride)
	{
		return null;
	}

	[Token(Token = "0x6004AD2")]
	[Address(RVA = "0x43CF290", Offset = "0x43CF290", VA = "0x43CF290")]
	private static AottgApiTransportResult ConvertResult(UnityWebRequest.Result result)
	{
		return default(AottgApiTransportResult);
	}

	[Token(Token = "0x6004AD3")]
	[Address(RVA = "0x43CD1B0", Offset = "0x43CD1B0", VA = "0x43CD1B0")]
	public AottgUnityWebRequestTransport()
	{
	}
}
