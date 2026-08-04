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

[Token(Token = "0x20007A0")]
public sealed class AottgPublicProfileService : MonoBehaviour
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20007A2")]
	[CompilerGenerated]
	private struct _003CFetchProfileAsync_003Ed__7 : IAsyncStateMachine
	{
		[Token(Token = "0x40024DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40024DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40024DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string accountId;

		[Token(Token = "0x40024DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgQueryFetchResult<AottgPublicProfile>> onComplete;

		[Token(Token = "0x40024E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60049A1")]
		[Address(RVA = "0x43C47F0", Offset = "0x43C47F0", VA = "0x43C47F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60049A2")]
		[Address(RVA = "0x43C5170", Offset = "0x43C5170", VA = "0x43C5170", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40024D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static AottgPublicProfileService _instance;

	[Token(Token = "0x40024DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AottgQueryCache<string, AottgPublicProfile> _cache;

	[Token(Token = "0x6004997")]
	[Address(RVA = "0x43C3F30", Offset = "0x43C3F30", VA = "0x43C3F30")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004998")]
	[Address(RVA = "0x43C4270", Offset = "0x43C4270", VA = "0x43C4270")]
	public static void GetProfile(string accountId, Action<AottgPublicProfileFetchResponse> onResult)
	{
	}

	[Token(Token = "0x6004999")]
	[Address(RVA = "0x43C4440", Offset = "0x43C4440", VA = "0x43C4440")]
	public static void ClearSessionCache()
	{
	}

	[Token(Token = "0x600499A")]
	[Address(RVA = "0x43C4500", Offset = "0x43C4500", VA = "0x43C4500")]
	public static void ClearProfile(string accountId)
	{
	}

	[Token(Token = "0x600499B")]
	[Address(RVA = "0x43C45E0", Offset = "0x43C45E0", VA = "0x43C45E0")]
	private void FetchProfile(string accountId, Action<AottgQueryFetchResult<AottgPublicProfile>> onComplete)
	{
	}

	[Token(Token = "0x600499C")]
	[Address(RVA = "0x43C4600", Offset = "0x43C4600", VA = "0x43C4600")]
	[AsyncStateMachine(typeof(_003CFetchProfileAsync_003Ed__7))]
	private UniTask FetchProfileAsync(string accountId, Action<AottgQueryFetchResult<AottgPublicProfile>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600499D")]
	[Address(RVA = "0x43C46C0", Offset = "0x43C46C0", VA = "0x43C46C0")]
	private static void InvokeProfileResult(AottgQueryResult<AottgPublicProfile> result, Action<AottgPublicProfileFetchResponse> onResult)
	{
	}

	[Token(Token = "0x600499E")]
	[Address(RVA = "0x43C47D0", Offset = "0x43C47D0", VA = "0x43C47D0")]
	public AottgPublicProfileService()
	{
	}
}
