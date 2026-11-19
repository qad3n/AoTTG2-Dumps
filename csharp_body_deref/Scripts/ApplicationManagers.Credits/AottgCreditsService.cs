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

[Token(Token = "0x200099F")]
public sealed class AottgCreditsService : MonoBehaviour
{
	[Token(Token = "0x20009A0")]
	private struct UnitKey
	{
		[Token(Token = "0x4003082")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly UnitKey Value;
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20009A2")]
	[CompilerGenerated]
	private struct _003CFetchCreditsAsync_003Ed__6 : IAsyncStateMachine
	{
		[Token(Token = "0x4003084")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4003085")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4003086")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgQueryFetchResult<AottgCreditsResponse>> onComplete;

		[Token(Token = "0x4003087")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60059CA")]
		[Address(RVA = "0x5D24450", Offset = "0x5D23450", VA = "0x5D24450", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60059CB")]
		[Address(RVA = "0x5D24C00", Offset = "0x5D23C00", VA = "0x5D24C00", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4003080")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static AottgCreditsService _instance;

	[Token(Token = "0x4003081")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AottgQueryCache<UnitKey, AottgCreditsResponse> _cache;

	[Token(Token = "0x60059C0")]
	[Address(RVA = "0x5D09340", Offset = "0x5D08340", VA = "0x5D09340")]
	public static void Init()
	{
	}

	[Token(Token = "0x60059C1")]
	[Address(RVA = "0x5D23C70", Offset = "0x5D22C70", VA = "0x5D23C70")]
	public static void GetCredits(Action<AottgCreditsResult> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x60059C2")]
	[Address(RVA = "0x5D23EB0", Offset = "0x5D22EB0", VA = "0x5D23EB0")]
	public static void ClearSessionCache()
	{
	}

	[Token(Token = "0x60059C3")]
	[Address(RVA = "0x5D23F70", Offset = "0x5D22F70", VA = "0x5D23F70")]
	private void FetchCredits(UnitKey key, Action<AottgQueryFetchResult<AottgCreditsResponse>> onComplete)
	{
	}

	[Token(Token = "0x60059C4")]
	[Address(RVA = "0x5D23F90", Offset = "0x5D22F90", VA = "0x5D23F90")]
	[AsyncStateMachine(typeof(_003CFetchCreditsAsync_003Ed__6))]
	private UniTask FetchCreditsAsync(Action<AottgQueryFetchResult<AottgCreditsResponse>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60059C5")]
	[Address(RVA = "0x5D24040", Offset = "0x5D23040", VA = "0x5D24040")]
	private static AottgCreditsResult MapResult(AottgQueryResult<AottgCreditsResponse> result)
	{
		return null;
	}

	[Token(Token = "0x60059C6")]
	[Address(RVA = "0x5D24320", Offset = "0x5D23320", VA = "0x5D24320")]
	public AottgCreditsService()
	{
	}
}
