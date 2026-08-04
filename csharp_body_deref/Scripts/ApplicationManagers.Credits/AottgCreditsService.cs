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

[Token(Token = "0x20007AD")]
public sealed class AottgCreditsService : MonoBehaviour
{
	[Token(Token = "0x20007AE")]
	private struct UnitKey
	{
		[Token(Token = "0x4002506")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly UnitKey Value;
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20007B0")]
	[CompilerGenerated]
	private struct _003CFetchCreditsAsync_003Ed__6 : IAsyncStateMachine
	{
		[Token(Token = "0x4002508")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4002509")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400250A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgQueryFetchResult<AottgCreditsResponse>> onComplete;

		[Token(Token = "0x400250B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60049F9")]
		[Address(RVA = "0x43C7F80", Offset = "0x43C7F80", VA = "0x43C7F80", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60049FA")]
		[Address(RVA = "0x43C8680", Offset = "0x43C8680", VA = "0x43C8680", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4002504")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static AottgCreditsService _instance;

	[Token(Token = "0x4002505")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AottgQueryCache<UnitKey, AottgCreditsResponse> _cache;

	[Token(Token = "0x60049EF")]
	[Address(RVA = "0x43C7670", Offset = "0x43C7670", VA = "0x43C7670")]
	public static void Init()
	{
	}

	[Token(Token = "0x60049F0")]
	[Address(RVA = "0x43C7800", Offset = "0x43C7800", VA = "0x43C7800")]
	public static void GetCredits(Action<AottgCreditsResult> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x60049F1")]
	[Address(RVA = "0x43C7A50", Offset = "0x43C7A50", VA = "0x43C7A50")]
	public static void ClearSessionCache()
	{
	}

	[Token(Token = "0x60049F2")]
	[Address(RVA = "0x43C7B10", Offset = "0x43C7B10", VA = "0x43C7B10")]
	private void FetchCredits(UnitKey key, Action<AottgQueryFetchResult<AottgCreditsResponse>> onComplete)
	{
	}

	[Token(Token = "0x60049F3")]
	[Address(RVA = "0x43C7BC0", Offset = "0x43C7BC0", VA = "0x43C7BC0")]
	[AsyncStateMachine(typeof(_003CFetchCreditsAsync_003Ed__6))]
	private UniTask FetchCreditsAsync(Action<AottgQueryFetchResult<AottgCreditsResponse>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60049F4")]
	[Address(RVA = "0x43C7C60", Offset = "0x43C7C60", VA = "0x43C7C60")]
	private static AottgCreditsResult MapResult(AottgQueryResult<AottgCreditsResponse> result)
	{
		return null;
	}

	[Token(Token = "0x60049F5")]
	[Address(RVA = "0x43C7F30", Offset = "0x43C7F30", VA = "0x43C7F30")]
	public AottgCreditsService()
	{
	}
}
