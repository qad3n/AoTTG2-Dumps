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

[Token(Token = "0x2000751")]
public sealed class AottgPublicProfileService : MonoBehaviour
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000753")]
	[CompilerGenerated]
	private struct _003CFetchProfileAsync_003Ed__7 : IAsyncStateMachine
	{
		[Token(Token = "0x400237D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400237E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400237F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string accountId;

		[Token(Token = "0x4002380")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgQueryFetchResult<AottgPublicProfile>> onComplete;

		[Token(Token = "0x4002381")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6004732")]
		[Address(RVA = "0x40AB7F0", Offset = "0x40AB7F0", VA = "0x40AB7F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6004733")]
		[Address(RVA = "0x40AC240", Offset = "0x40AC240", VA = "0x40AC240", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x400237A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static AottgPublicProfileService _instance;

	[Token(Token = "0x400237B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AottgQueryCache<string, AottgPublicProfile> _cache;

	[Token(Token = "0x6004728")]
	[Address(RVA = "0x40AAF30", Offset = "0x40AAF30", VA = "0x40AAF30")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004729")]
	[Address(RVA = "0x40AB270", Offset = "0x40AB270", VA = "0x40AB270")]
	public static void GetProfile(string accountId, Action<AottgPublicProfileFetchResponse> onResult)
	{
	}

	[Token(Token = "0x600472A")]
	[Address(RVA = "0x40AB440", Offset = "0x40AB440", VA = "0x40AB440")]
	public static void ClearSessionCache()
	{
	}

	[Token(Token = "0x600472B")]
	[Address(RVA = "0x40AB500", Offset = "0x40AB500", VA = "0x40AB500")]
	public static void ClearProfile(string accountId)
	{
	}

	[Token(Token = "0x600472C")]
	[Address(RVA = "0x40AB5E0", Offset = "0x40AB5E0", VA = "0x40AB5E0")]
	private void FetchProfile(string accountId, Action<AottgQueryFetchResult<AottgPublicProfile>> onComplete)
	{
	}

	[Token(Token = "0x600472D")]
	[Address(RVA = "0x40AB600", Offset = "0x40AB600", VA = "0x40AB600")]
	[AsyncStateMachine(typeof(_003CFetchProfileAsync_003Ed__7))]
	private UniTask FetchProfileAsync(string accountId, Action<AottgQueryFetchResult<AottgPublicProfile>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600472E")]
	[Address(RVA = "0x40AB6C0", Offset = "0x40AB6C0", VA = "0x40AB6C0")]
	private static void InvokeProfileResult(AottgQueryResult<AottgPublicProfile> result, Action<AottgPublicProfileFetchResponse> onResult)
	{
	}

	[Token(Token = "0x600472F")]
	[Address(RVA = "0x40AB7D0", Offset = "0x40AB7D0", VA = "0x40AB7D0")]
	public AottgPublicProfileService()
	{
	}
}
