// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogService
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000945")]
public sealed class AottgChangelogService : MonoBehaviour
{
	[Token(Token = "0x2000946")]
	private struct UnitKey
	{
		[Token(Token = "0x4002E04")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly UnitKey Value;
	}

	[Token(Token = "0x2000947")]
	private struct ListKey
	{
		[Token(Token = "0x17000FB3")]
		public int Page
		{
			[Token(Token = "0x60056E5")]
			[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
			[CompilerGenerated]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x60056E6")]
			[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000FB4")]
		public int PageSize
		{
			[Token(Token = "0x60056E7")]
			[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
			[CompilerGenerated]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x60056E8")]
			[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x60056E4")]
		[Address(RVA = "0xACCA30", Offset = "0xACB030", VA = "0x180ACCA30")]
		public ListKey(int page, int pageSize)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200094C")]
	[CompilerGenerated]
	private struct _003CFetchEntryAsync_003Ed__18 : IAsyncStateMachine
	{
		[Token(Token = "0x4002E0B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4002E0C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4002E0D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string path;

		[Token(Token = "0x4002E0E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgQueryFetchResult<ChangelogEntryResponse>> onComplete;

		[Token(Token = "0x4002E0F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60056F1")]
		[Address(RVA = "0x2372600", Offset = "0x2370C00", VA = "0x182372600", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60056F2")]
		[Address(RVA = "0x8E6930", Offset = "0x8E4F30", VA = "0x1808E6930", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200094D")]
	[CompilerGenerated]
	private struct _003CFetchLatestVersionAsync_003Ed__16 : IAsyncStateMachine
	{
		[Token(Token = "0x4002E10")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4002E11")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4002E12")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgQueryFetchResult<LatestChangelogVersionResponse>> onComplete;

		[Token(Token = "0x4002E13")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60056F3")]
		[Address(RVA = "0x2372A70", Offset = "0x2371070", VA = "0x182372A70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60056F4")]
		[Address(RVA = "0x8E6930", Offset = "0x8E4F30", VA = "0x1808E6930", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200094E")]
	[CompilerGenerated]
	private struct _003CFetchListAsync_003Ed__17 : IAsyncStateMachine
	{
		[Token(Token = "0x4002E14")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4002E15")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4002E16")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public ListKey key;

		[Token(Token = "0x4002E17")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgQueryFetchResult<PublicChangelogListResponse>> onComplete;

		[Token(Token = "0x4002E18")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60056F5")]
		[Address(RVA = "0x2372EA0", Offset = "0x23714A0", VA = "0x182372EA0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60056F6")]
		[Address(RVA = "0x8E6930", Offset = "0x8E4F30", VA = "0x1808E6930", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4002DFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly AottgQueryPolicy CachePolicy;

	[Token(Token = "0x4002DFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static AottgChangelogService _instance;

	[Token(Token = "0x4002E00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AottgQueryCache<UnitKey, LatestChangelogVersionResponse> _latestVersionCache;

	[Token(Token = "0x4002E01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private AottgQueryCache<UnitKey, ChangelogEntryResponse> _latestEntryCache;

	[Token(Token = "0x4002E02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgQueryCache<ListKey, PublicChangelogListResponse> _listCache;

	[Token(Token = "0x4002E03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private AottgQueryCache<string, ChangelogEntryResponse> _entryCache;

	[Token(Token = "0x60056D1")]
	[Address(RVA = "0x2363210", Offset = "0x2361810", VA = "0x182363210")]
	public static void Init()
	{
	}

	[Token(Token = "0x60056D2")]
	[Address(RVA = "0x2362CC0", Offset = "0x23612C0", VA = "0x182362CC0")]
	public static void GetLatestVersion(Action<AottgChangelogResult<LatestChangelogVersionResponse>> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x60056D3")]
	[Address(RVA = "0x2362E70", Offset = "0x2361470", VA = "0x182362E70")]
	public static void GetLatest(Action<AottgChangelogResult<ChangelogEntryResponse>> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x60056D4")]
	[Address(RVA = "0x2363020", Offset = "0x2361620", VA = "0x182363020")]
	public static void GetList(Action<AottgChangelogResult<PublicChangelogListResponse>> onResult, int page = 1, int pageSize = 20, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x60056D5")]
	[Address(RVA = "0x2362AB0", Offset = "0x23610B0", VA = "0x182362AB0")]
	public static void GetEntry(string id, Action<AottgChangelogResult<ChangelogEntryResponse>> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x60056D6")]
	[Address(RVA = "0x2362360", Offset = "0x2360960", VA = "0x182362360")]
	public static void ClearSessionCache()
	{
	}

	[Token(Token = "0x60056D7")]
	[Address(RVA = "0x2362830", Offset = "0x2360E30", VA = "0x182362830")]
	private void FetchLatestVersion(UnitKey key, Action<AottgQueryFetchResult<LatestChangelogVersionResponse>> onComplete)
	{
	}

	[Token(Token = "0x60056D8")]
	[Address(RVA = "0x23626F0", Offset = "0x2360CF0", VA = "0x1823626F0")]
	private void FetchLatestEntry(UnitKey key, Action<AottgQueryFetchResult<ChangelogEntryResponse>> onComplete)
	{
	}

	[Token(Token = "0x60056D9")]
	[Address(RVA = "0x23629D0", Offset = "0x2360FD0", VA = "0x1823629D0")]
	private void FetchList(ListKey key, Action<AottgQueryFetchResult<PublicChangelogListResponse>> onComplete)
	{
	}

	[Token(Token = "0x60056DA")]
	[Address(RVA = "0x2362630", Offset = "0x2360C30", VA = "0x182362630")]
	private void FetchEntry(string id, Action<AottgQueryFetchResult<ChangelogEntryResponse>> onComplete)
	{
	}

	[Token(Token = "0x60056DB")]
	[Address(RVA = "0x2362760", Offset = "0x2360D60", VA = "0x182362760")]
	[AsyncStateMachine(typeof(_003CFetchLatestVersionAsync_003Ed__16))]
	private UniTask FetchLatestVersionAsync(Action<AottgQueryFetchResult<LatestChangelogVersionResponse>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60056DC")]
	[Address(RVA = "0x23628F0", Offset = "0x2360EF0", VA = "0x1823628F0")]
	[AsyncStateMachine(typeof(_003CFetchListAsync_003Ed__17))]
	private UniTask FetchListAsync(ListKey key, Action<AottgQueryFetchResult<PublicChangelogListResponse>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60056DD")]
	[Address(RVA = "0x2362540", Offset = "0x2360B40", VA = "0x182362540")]
	[AsyncStateMachine(typeof(_003CFetchEntryAsync_003Ed__18))]
	private UniTask FetchEntryAsync(string path, Action<AottgQueryFetchResult<ChangelogEntryResponse>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60056DE")]
	[Address(RVA = "0x23635A0", Offset = "0x2361BA0", VA = "0x1823635A0")]
	private static UniTask<AottgApiResult> SendGet(string path)
	{
		return default(UniTask<AottgApiResult>);
	}

	[Token(Token = "0x60056DF")]
	private static bool Ready<T>(Action<AottgChangelogResult<T>> onResult)
	{
		return default(bool);
	}

	[Token(Token = "0x60056E0")]
	private static AottgChangelogResult<T> Map<T>(AottgQueryResult<T> result)
	{
		return null;
	}

	[Token(Token = "0x60056E1")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgChangelogService()
	{
	}
}
