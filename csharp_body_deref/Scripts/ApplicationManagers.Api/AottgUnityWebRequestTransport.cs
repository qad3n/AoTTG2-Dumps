using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Networking;

namespace ApplicationManagers.Api;

[Token(Token = "0x2000773")]
public sealed class AottgUnityWebRequestTransport : IAottgApiTransport
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000774")]
	[CompilerGenerated]
	private struct _003CSendAsync_003Ed__0 : IAsyncStateMachine
	{
		[Token(Token = "0x40023F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40023F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder<AottgApiTransportResponse> _003C_003Et__builder;

		[Token(Token = "0x40023F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AottgApiTransportRequest request;

		[Token(Token = "0x40023F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40023F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UnityWebRequest _003CunityRequest_003E5__2;

		[Token(Token = "0x40023FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UniTask<UnityWebRequest>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60047E1")]
		[Address(RVA = "0x40B1930", Offset = "0x40B1930", VA = "0x40B1930", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60047E2")]
		[Address(RVA = "0x40B2720", Offset = "0x40B2720", VA = "0x40B2720", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x60047DD")]
	[Address(RVA = "0x40B16A0", Offset = "0x40B16A0", VA = "0x40B16A0", Slot = "4")]
	[AsyncStateMachine(typeof(_003CSendAsync_003Ed__0))]
	public UniTask<AottgApiTransportResponse> SendAsync(AottgApiTransportRequest request, CancellationToken cancellationToken)
	{
		return default(UniTask<AottgApiTransportResponse>);
	}

	[Token(Token = "0x60047DE")]
	[Address(RVA = "0x40B17B0", Offset = "0x40B17B0", VA = "0x40B17B0")]
	private static AottgApiTransportResponse BuildResponse(UnityWebRequest unityRequest, [Optional] string textOverride, [Optional] string errorOverride, [Optional] long? statusCodeOverride)
	{
		return null;
	}

	[Token(Token = "0x60047DF")]
	[Address(RVA = "0x40B1910", Offset = "0x40B1910", VA = "0x40B1910")]
	private static AottgApiTransportResult ConvertResult(UnityWebRequest.Result result)
	{
		return default(AottgApiTransportResult);
	}

	[Token(Token = "0x60047E0")]
	[Address(RVA = "0x40AF830", Offset = "0x40AF830", VA = "0x40AF830")]
	public AottgUnityWebRequestTransport()
	{
	}
}
