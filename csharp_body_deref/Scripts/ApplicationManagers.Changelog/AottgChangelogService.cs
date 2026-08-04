// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogService
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c
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

namespace ApplicationManagers.Changelog;

[Token(Token = "0x20007BA")]
public sealed class AottgChangelogService : MonoBehaviour
{
	[Token(Token = "0x20007BB")]
	private struct UnitKey
	{
		[Token(Token = "0x4002536")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly UnitKey Value;
	}

	[Token(Token = "0x20007BC")]
	private struct ListKey
	{
		[Token(Token = "0x17000E50")]
		public int Page
		{
			[Token(Token = "0x6004A6D")]
			[Address(RVA = "0x43CBAA0", Offset = "0x43CBAA0", VA = "0x43CBAA0")]
			[CompilerGenerated]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x6004A6E")]
			[Address(RVA = "0x43CBAB0", Offset = "0x43CBAB0", VA = "0x43CBAB0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000E51")]
		public int PageSize
		{
			[Token(Token = "0x6004A6F")]
			[Address(RVA = "0x43CBAC0", Offset = "0x43CBAC0", VA = "0x43CBAC0")]
			[CompilerGenerated]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x6004A70")]
			[Address(RVA = "0x43CBAD0", Offset = "0x43CBAD0", VA = "0x43CBAD0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6004A6C")]
		[Address(RVA = "0x43CB010", Offset = "0x43CB010", VA = "0x43CB010")]
		public ListKey(int page, int pageSize)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20007C1")]
	[CompilerGenerated]
	private struct _003CFetchEntryAsync_003Ed__18 : IAsyncStateMachine
	{
		[Token(Token = "0x400253D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400253E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400253F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string path;

		[Token(Token = "0x4002540")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgQueryFetchResult<ChangelogEntryResponse>> onComplete;

		[Token(Token = "0x4002541")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6004A79")]
		[Address(RVA = "0x43CBD20", Offset = "0x43CBD20", VA = "0x43CBD20", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6004A7A")]
		[Address(RVA = "0x43CC410", Offset = "0x43CC410", VA = "0x43CC410", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20007C2")]
	[CompilerGenerated]
	private struct _003CFetchLatestVersionAsync_003Ed__16 : IAsyncStateMachine
	{
		[Token(Token = "0x4002542")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4002543")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4002544")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgQueryFetchResult<LatestChangelogVersionResponse>> onComplete;

		[Token(Token = "0x4002545")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6004A7B")]
		[Address(RVA = "0x43CC420", Offset = "0x43CC420", VA = "0x43CC420", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6004A7C")]
		[Address(RVA = "0x43CCA80", Offset = "0x43CCA80", VA = "0x43CCA80", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20007C3")]
	[CompilerGenerated]
	private struct _003CFetchListAsync_003Ed__17 : IAsyncStateMachine
	{
		[Token(Token = "0x4002546")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4002547")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4002548")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public ListKey key;

		[Token(Token = "0x4002549")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgQueryFetchResult<PublicChangelogListResponse>> onComplete;

		[Token(Token = "0x400254A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6004A7D")]
		[Address(RVA = "0x43CCA90", Offset = "0x43CCA90", VA = "0x43CCA90", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6004A7E")]
		[Address(RVA = "0x43CD1A0", Offset = "0x43CD1A0", VA = "0x43CD1A0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4002530")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly AottgQueryPolicy CachePolicy;

	[Token(Token = "0x4002531")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static AottgChangelogService _instance;

	[Token(Token = "0x4002532")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AottgQueryCache<UnitKey, LatestChangelogVersionResponse> _latestVersionCache;

	[Token(Token = "0x4002533")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private AottgQueryCache<UnitKey, ChangelogEntryResponse> _latestEntryCache;

	[Token(Token = "0x4002534")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgQueryCache<ListKey, PublicChangelogListResponse> _listCache;

	[Token(Token = "0x4002535")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private AottgQueryCache<string, ChangelogEntryResponse> _entryCache;

	[Token(Token = "0x6004A59")]
	[Address(RVA = "0x43CA6F0", Offset = "0x43CA6F0", VA = "0x43CA6F0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004A5A")]
	[Address(RVA = "0x43CAA80", Offset = "0x43CAA80", VA = "0x43CAA80")]
	public static void GetLatestVersion(Action<AottgChangelogResult<LatestChangelogVersionResponse>> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6004A5B")]
	[Address(RVA = "0x43CAC30", Offset = "0x43CAC30", VA = "0x43CAC30")]
	public static void GetLatest(Action<AottgChangelogResult<ChangelogEntryResponse>> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6004A5C")]
	[Address(RVA = "0x43CADE0", Offset = "0x43CADE0", VA = "0x43CADE0")]
	public static void GetList(Action<AottgChangelogResult<PublicChangelogListResponse>> onResult, int page = 1, int pageSize = 20, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6004A5D")]
	[Address(RVA = "0x43CB020", Offset = "0x43CB020", VA = "0x43CB020")]
	public static void GetEntry(string id, Action<AottgChangelogResult<ChangelogEntryResponse>> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6004A5E")]
	[Address(RVA = "0x43CB240", Offset = "0x43CB240", VA = "0x43CB240")]
	public static void ClearSessionCache()
	{
	}

	[Token(Token = "0x6004A5F")]
	[Address(RVA = "0x43CB410", Offset = "0x43CB410", VA = "0x43CB410")]
	private void FetchLatestVersion(UnitKey key, Action<AottgQueryFetchResult<LatestChangelogVersionResponse>> onComplete)
	{
	}

	[Token(Token = "0x6004A60")]
	[Address(RVA = "0x43CB560", Offset = "0x43CB560", VA = "0x43CB560")]
	private void FetchLatestEntry(UnitKey key, Action<AottgQueryFetchResult<ChangelogEntryResponse>> onComplete)
	{
	}

	[Token(Token = "0x6004A61")]
	[Address(RVA = "0x43CB660", Offset = "0x43CB660", VA = "0x43CB660")]
	private void FetchList(ListKey key, Action<AottgQueryFetchResult<PublicChangelogListResponse>> onComplete)
	{
	}

	[Token(Token = "0x6004A62")]
	[Address(RVA = "0x43CB7D0", Offset = "0x43CB7D0", VA = "0x43CB7D0")]
	private void FetchEntry(string id, Action<AottgQueryFetchResult<ChangelogEntryResponse>> onComplete)
	{
	}

	[Token(Token = "0x6004A63")]
	[Address(RVA = "0x43CB4C0", Offset = "0x43CB4C0", VA = "0x43CB4C0")]
	[AsyncStateMachine(typeof(_003CFetchLatestVersionAsync_003Ed__16))]
	private UniTask FetchLatestVersionAsync(Action<AottgQueryFetchResult<LatestChangelogVersionResponse>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6004A64")]
	[Address(RVA = "0x43CB720", Offset = "0x43CB720", VA = "0x43CB720")]
	[AsyncStateMachine(typeof(_003CFetchListAsync_003Ed__17))]
	private UniTask FetchListAsync(ListKey key, Action<AottgQueryFetchResult<PublicChangelogListResponse>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6004A65")]
	[Address(RVA = "0x43CB5A0", Offset = "0x43CB5A0", VA = "0x43CB5A0")]
	[AsyncStateMachine(typeof(_003CFetchEntryAsync_003Ed__18))]
	private UniTask FetchEntryAsync(string path, Action<AottgQueryFetchResult<ChangelogEntryResponse>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6004A66")]
	[Address(RVA = "0x43CB860", Offset = "0x43CB860", VA = "0x43CB860")]
	private static UniTask<AottgApiResult> SendGet(string path)
	{
		return default(UniTask<AottgApiResult>);
	}

	[Token(Token = "0x6004A67")]
	private static bool Ready<T>(Action<AottgChangelogResult<T>> onResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A68")]
	private static AottgChangelogResult<T> Map<T>(AottgQueryResult<T> result)
	{
		return null;
	}

	[Token(Token = "0x6004A69")]
	[Address(RVA = "0x43CB980", Offset = "0x43CB980", VA = "0x43CB980")]
	public AottgChangelogService()
	{
	}
}
