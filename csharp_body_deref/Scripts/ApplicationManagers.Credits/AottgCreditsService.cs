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

[Token(Token = "0x200075E")]
public sealed class AottgCreditsService : MonoBehaviour
{
	[Token(Token = "0x200075F")]
	private struct UnitKey
	{
		[Token(Token = "0x40023A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly UnitKey Value;
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000761")]
	[CompilerGenerated]
	private struct _003CFetchCreditsAsync_003Ed__6 : IAsyncStateMachine
	{
		[Token(Token = "0x40023A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40023AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40023AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgQueryFetchResult<AottgCreditsResponse>> onComplete;

		[Token(Token = "0x40023AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x600478A")]
		[Address(RVA = "0x40AF050", Offset = "0x40AF050", VA = "0x40AF050", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600478B")]
		[Address(RVA = "0x40AF820", Offset = "0x40AF820", VA = "0x40AF820", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40023A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static AottgCreditsService _instance;

	[Token(Token = "0x40023A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AottgQueryCache<UnitKey, AottgCreditsResponse> _cache;

	[Token(Token = "0x6004780")]
	[Address(RVA = "0x40AE740", Offset = "0x40AE740", VA = "0x40AE740")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004781")]
	[Address(RVA = "0x40AE8D0", Offset = "0x40AE8D0", VA = "0x40AE8D0")]
	public static void GetCredits(Action<AottgCreditsResult> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6004782")]
	[Address(RVA = "0x40AEB20", Offset = "0x40AEB20", VA = "0x40AEB20")]
	public static void ClearSessionCache()
	{
	}

	[Token(Token = "0x6004783")]
	[Address(RVA = "0x40AEBE0", Offset = "0x40AEBE0", VA = "0x40AEBE0")]
	private void FetchCredits(UnitKey key, Action<AottgQueryFetchResult<AottgCreditsResponse>> onComplete)
	{
	}

	[Token(Token = "0x6004784")]
	[Address(RVA = "0x40AEC90", Offset = "0x40AEC90", VA = "0x40AEC90")]
	[AsyncStateMachine(typeof(_003CFetchCreditsAsync_003Ed__6))]
	private UniTask FetchCreditsAsync(Action<AottgQueryFetchResult<AottgCreditsResponse>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6004785")]
	[Address(RVA = "0x40AED30", Offset = "0x40AED30", VA = "0x40AED30")]
	private static AottgCreditsResult MapResult(AottgQueryResult<AottgCreditsResponse> result)
	{
		return null;
	}

	[Token(Token = "0x6004786")]
	[Address(RVA = "0x40AF000", Offset = "0x40AF000", VA = "0x40AF000")]
	public AottgCreditsService()
	{
	}
}
