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

[Token(Token = "0x2000962")]
public sealed class AottgUnityWebRequestTransport : IAottgApiTransport
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000963")]
	[CompilerGenerated]
	private struct _003CSendAsync_003Ed__0 : IAsyncStateMachine
	{
		[Token(Token = "0x4002E65")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4002E66")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder<AottgApiTransportResponse> _003C_003Et__builder;

		[Token(Token = "0x4002E67")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AottgApiTransportRequest request;

		[Token(Token = "0x4002E68")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4002E69")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UnityWebRequest _003CunityRequest_003E5__2;

		[Token(Token = "0x4002E6A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UniTask<UnityWebRequest>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x600574D")]
		[Address(RVA = "0x2373800", Offset = "0x2371E00", VA = "0x182373800", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600574E")]
		[Address(RVA = "0x2374290", Offset = "0x2372890", VA = "0x182374290", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x6005749")]
	[Address(RVA = "0x2368410", Offset = "0x2366A10", VA = "0x182368410", Slot = "4")]
	[AsyncStateMachine(typeof(_003CSendAsync_003Ed__0))]
	public UniTask<AottgApiTransportResponse> SendAsync(AottgApiTransportRequest request, CancellationToken cancellationToken)
	{
		return default(UniTask<AottgApiTransportResponse>);
	}

	[Token(Token = "0x600574A")]
	[Address(RVA = "0x2368290", Offset = "0x2366890", VA = "0x182368290")]
	private static AottgApiTransportResponse BuildResponse(UnityWebRequest unityRequest, [Optional] string textOverride, [Optional] string errorOverride, [Optional] long? statusCodeOverride)
	{
		return null;
	}

	[Token(Token = "0x600574B")]
	[Address(RVA = "0x23683E0", Offset = "0x23669E0", VA = "0x1823683E0")]
	private static AottgApiTransportResult ConvertResult(UnityWebRequest.Result result)
	{
		return default(AottgApiTransportResult);
	}

	[Token(Token = "0x600574C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public AottgUnityWebRequestTransport()
	{
	}
}
