// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditsService
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Credits/AottgCreditsService.c
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

namespace ApplicationManagers.Credits;

[Token(Token = "0x2000938")]
public sealed class AottgCreditsService : MonoBehaviour
{
	[Token(Token = "0x2000939")]
	private struct UnitKey
	{
		[Token(Token = "0x4002DD4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly UnitKey Value;
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200093B")]
	[CompilerGenerated]
	private struct _003CFetchCreditsAsync_003Ed__6 : IAsyncStateMachine
	{
		[Token(Token = "0x4002DD6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4002DD7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4002DD8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgQueryFetchResult<AottgCreditsResponse>> onComplete;

		[Token(Token = "0x4002DD9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6005671")]
		[Address(RVA = "0x2372160", Offset = "0x2370760", VA = "0x182372160", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6005672")]
		[Address(RVA = "0x8E6930", Offset = "0x8E4F30", VA = "0x1808E6930", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4002DD2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static AottgCreditsService _instance;

	[Token(Token = "0x4002DD3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AottgQueryCache<UnitKey, AottgCreditsResponse> _cache;

	[Token(Token = "0x6005667")]
	[Address(RVA = "0x2365EF0", Offset = "0x23644F0", VA = "0x182365EF0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005668")]
	[Address(RVA = "0x2365D10", Offset = "0x2364310", VA = "0x182365D10")]
	public static void GetCredits(Action<AottgCreditsResult> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6005669")]
	[Address(RVA = "0x2365AD0", Offset = "0x23640D0", VA = "0x182365AD0")]
	public static void ClearSessionCache()
	{
	}

	[Token(Token = "0x600566A")]
	[Address(RVA = "0x2365C50", Offset = "0x2364250", VA = "0x182365C50")]
	private void FetchCredits(UnitKey key, Action<AottgQueryFetchResult<AottgCreditsResponse>> onComplete)
	{
	}

	[Token(Token = "0x600566B")]
	[Address(RVA = "0x2365B80", Offset = "0x2364180", VA = "0x182365B80")]
	[AsyncStateMachine(typeof(_003CFetchCreditsAsync_003Ed__6))]
	private UniTask FetchCreditsAsync(Action<AottgQueryFetchResult<AottgCreditsResponse>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600566C")]
	[Address(RVA = "0x23660A0", Offset = "0x23646A0", VA = "0x1823660A0")]
	private static AottgCreditsResult MapResult(AottgQueryResult<AottgCreditsResponse> result)
	{
		return null;
	}

	[Token(Token = "0x600566D")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgCreditsService()
	{
	}
}
