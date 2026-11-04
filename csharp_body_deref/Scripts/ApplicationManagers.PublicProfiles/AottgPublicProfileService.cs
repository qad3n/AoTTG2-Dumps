// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileService
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileService.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ApplicationManagers.Api;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace ApplicationManagers.PublicProfiles;

[Token(Token = "0x200092B")]
public sealed class AottgPublicProfileService : MonoBehaviour
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200092D")]
	[CompilerGenerated]
	private struct _003CFetchProfileAsync_003Ed__7 : IAsyncStateMachine
	{
		[Token(Token = "0x4002DAA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4002DAB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4002DAC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string accountId;

		[Token(Token = "0x4002DAD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgQueryFetchResult<AottgPublicProfile>> onComplete;

		[Token(Token = "0x4002DAE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6005619")]
		[Address(RVA = "0x2373330", Offset = "0x2371930", VA = "0x182373330", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600561A")]
		[Address(RVA = "0x8E6930", Offset = "0x8E4F30", VA = "0x1808E6930", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4002DA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static AottgPublicProfileService _instance;

	[Token(Token = "0x4002DA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AottgQueryCache<string, AottgPublicProfile> _cache;

	[Token(Token = "0x600560F")]
	[Address(RVA = "0x2367C20", Offset = "0x2366220", VA = "0x182367C20")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005610")]
	[Address(RVA = "0x2367A60", Offset = "0x2366060", VA = "0x182367A60")]
	public static void GetProfile(string accountId, Action<AottgPublicProfileFetchResponse> onResult)
	{
	}

	[Token(Token = "0x6005611")]
	[Address(RVA = "0x23677D0", Offset = "0x2365DD0", VA = "0x1823677D0")]
	public static void ClearSessionCache()
	{
	}

	[Token(Token = "0x6005612")]
	[Address(RVA = "0x23676E0", Offset = "0x2365CE0", VA = "0x1823676E0")]
	public static void ClearProfile(string accountId)
	{
	}

	[Token(Token = "0x6005613")]
	[Address(RVA = "0x2367970", Offset = "0x2365F70", VA = "0x182367970")]
	private void FetchProfile(string accountId, Action<AottgQueryFetchResult<AottgPublicProfile>> onComplete)
	{
	}

	[Token(Token = "0x6005614")]
	[Address(RVA = "0x2367880", Offset = "0x2365E80", VA = "0x182367880")]
	[AsyncStateMachine(typeof(_003CFetchProfileAsync_003Ed__7))]
	private UniTask FetchProfileAsync(string accountId, Action<AottgQueryFetchResult<AottgPublicProfile>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6005615")]
	[Address(RVA = "0x2367E00", Offset = "0x2366400", VA = "0x182367E00")]
	private static void InvokeProfileResult(AottgQueryResult<AottgPublicProfile> result, Action<AottgPublicProfileFetchResponse> onResult)
	{
	}

	[Token(Token = "0x6005616")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgPublicProfileService()
	{
	}
}
