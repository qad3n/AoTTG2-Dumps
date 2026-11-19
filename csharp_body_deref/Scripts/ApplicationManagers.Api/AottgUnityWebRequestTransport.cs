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

[Token(Token = "0x20009C9")]
public sealed class AottgUnityWebRequestTransport : IAottgApiTransport
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20009CA")]
	[CompilerGenerated]
	private struct _003CSendAsync_003Ed__0 : IAsyncStateMachine
	{
		[Token(Token = "0x4003113")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4003114")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder<AottgApiTransportResponse> _003C_003Et__builder;

		[Token(Token = "0x4003115")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AottgApiTransportRequest request;

		[Token(Token = "0x4003116")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4003117")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UnityWebRequest _003CunityRequest_003E5__2;

		[Token(Token = "0x4003118")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UniTask<UnityWebRequest>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6005AA6")]
		[Address(RVA = "0x5D2B0A0", Offset = "0x5D2A0A0", VA = "0x5D2B0A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6005AA7")]
		[Address(RVA = "0x5D2BDC0", Offset = "0x5D2ADC0", VA = "0x5D2BDC0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x6005AA2")]
	[Address(RVA = "0x5D2AE30", Offset = "0x5D29E30", VA = "0x5D2AE30", Slot = "4")]
	[AsyncStateMachine(typeof(_003CSendAsync_003Ed__0))]
	public UniTask<AottgApiTransportResponse> SendAsync(AottgApiTransportRequest request, CancellationToken cancellationToken)
	{
		return default(UniTask<AottgApiTransportResponse>);
	}

	[Token(Token = "0x6005AA3")]
	[Address(RVA = "0x5D2AF40", Offset = "0x5D29F40", VA = "0x5D2AF40")]
	private static AottgApiTransportResponse BuildResponse(UnityWebRequest unityRequest, [Optional] string textOverride, [Optional] string errorOverride, [Optional] long? statusCodeOverride)
	{
		return null;
	}

	[Token(Token = "0x6005AA4")]
	[Address(RVA = "0x5D2B090", Offset = "0x5D2A090", VA = "0x5D2B090")]
	private static AottgApiTransportResult ConvertResult(UnityWebRequest.Result result)
	{
		return default(AottgApiTransportResult);
	}

	[Token(Token = "0x6005AA5")]
	[Address(RVA = "0x5D29270", Offset = "0x5D28270", VA = "0x5D29270")]
	public AottgUnityWebRequestTransport()
	{
	}
}
