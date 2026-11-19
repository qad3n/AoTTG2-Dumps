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

[Token(Token = "0x2000992")]
public sealed class AottgPublicProfileService : MonoBehaviour
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000994")]
	[CompilerGenerated]
	private struct _003CFetchProfileAsync_003Ed__7 : IAsyncStateMachine
	{
		[Token(Token = "0x4003058")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4003059")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400305A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string accountId;

		[Token(Token = "0x400305B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgQueryFetchResult<AottgPublicProfile>> onComplete;

		[Token(Token = "0x400305C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6005972")]
		[Address(RVA = "0x5D21220", Offset = "0x5D20220", VA = "0x5D21220", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6005973")]
		[Address(RVA = "0x5D217C0", Offset = "0x5D207C0", VA = "0x5D217C0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4003055")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static AottgPublicProfileService _instance;

	[Token(Token = "0x4003056")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AottgQueryCache<string, AottgPublicProfile> _cache;

	[Token(Token = "0x6005968")]
	[Address(RVA = "0x5D094E0", Offset = "0x5D084E0", VA = "0x5D094E0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005969")]
	[Address(RVA = "0x5D20CA0", Offset = "0x5D1FCA0", VA = "0x5D20CA0")]
	public static void GetProfile(string accountId, Action<AottgPublicProfileFetchResponse> onResult)
	{
	}

	[Token(Token = "0x600596A")]
	[Address(RVA = "0x5D20E70", Offset = "0x5D1FE70", VA = "0x5D20E70")]
	public static void ClearSessionCache()
	{
	}

	[Token(Token = "0x600596B")]
	[Address(RVA = "0x5D20F30", Offset = "0x5D1FF30", VA = "0x5D20F30")]
	public static void ClearProfile(string accountId)
	{
	}

	[Token(Token = "0x600596C")]
	[Address(RVA = "0x5D21010", Offset = "0x5D20010", VA = "0x5D21010")]
	private void FetchProfile(string accountId, Action<AottgQueryFetchResult<AottgPublicProfile>> onComplete)
	{
	}

	[Token(Token = "0x600596D")]
	[Address(RVA = "0x5D21030", Offset = "0x5D20030", VA = "0x5D21030")]
	[AsyncStateMachine(typeof(_003CFetchProfileAsync_003Ed__7))]
	private UniTask FetchProfileAsync(string accountId, Action<AottgQueryFetchResult<AottgPublicProfile>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600596E")]
	[Address(RVA = "0x5D210F0", Offset = "0x5D200F0", VA = "0x5D210F0")]
	private static void InvokeProfileResult(AottgQueryResult<AottgPublicProfile> result, Action<AottgPublicProfileFetchResponse> onResult)
	{
	}

	[Token(Token = "0x600596F")]
	[Address(RVA = "0x5D21200", Offset = "0x5D20200", VA = "0x5D21200")]
	public AottgPublicProfileService()
	{
	}
}
