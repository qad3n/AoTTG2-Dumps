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

[Token(Token = "0x20009AC")]
public sealed class AottgChangelogService : MonoBehaviour
{
	[Token(Token = "0x20009AD")]
	private struct UnitKey
	{
		[Token(Token = "0x40030B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly UnitKey Value;
	}

	[Token(Token = "0x20009AE")]
	private struct ListKey
	{
		[Token(Token = "0x17000F92")]
		public int Page
		{
			[Token(Token = "0x6005A3E")]
			[Address(RVA = "0x5D27EF0", Offset = "0x5D26EF0", VA = "0x5D27EF0")]
			[CompilerGenerated]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x6005A3F")]
			[Address(RVA = "0x5D27F00", Offset = "0x5D26F00", VA = "0x5D27F00")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000F93")]
		public int PageSize
		{
			[Token(Token = "0x6005A40")]
			[Address(RVA = "0x5D27F10", Offset = "0x5D26F10", VA = "0x5D27F10")]
			[CompilerGenerated]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x6005A41")]
			[Address(RVA = "0x5D27F20", Offset = "0x5D26F20", VA = "0x5D27F20")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6005A3D")]
		[Address(RVA = "0x5D272E0", Offset = "0x5D262E0", VA = "0x5D272E0")]
		public ListKey(int page, int pageSize)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20009B3")]
	[CompilerGenerated]
	private struct _003CFetchEntryAsync_003Ed__18 : IAsyncStateMachine
	{
		[Token(Token = "0x40030B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40030BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40030BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string path;

		[Token(Token = "0x40030BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgQueryFetchResult<ChangelogEntryResponse>> onComplete;

		[Token(Token = "0x40030BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6005A4A")]
		[Address(RVA = "0x5D28170", Offset = "0x5D27170", VA = "0x5D28170", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6005A4B")]
		[Address(RVA = "0x5D28700", Offset = "0x5D27700", VA = "0x5D28700", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20009B4")]
	[CompilerGenerated]
	private struct _003CFetchLatestVersionAsync_003Ed__16 : IAsyncStateMachine
	{
		[Token(Token = "0x40030BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40030BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40030C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgQueryFetchResult<LatestChangelogVersionResponse>> onComplete;

		[Token(Token = "0x40030C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6005A4C")]
		[Address(RVA = "0x5D28710", Offset = "0x5D27710", VA = "0x5D28710", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6005A4D")]
		[Address(RVA = "0x5D28C40", Offset = "0x5D27C40", VA = "0x5D28C40", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20009B5")]
	[CompilerGenerated]
	private struct _003CFetchListAsync_003Ed__17 : IAsyncStateMachine
	{
		[Token(Token = "0x40030C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40030C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40030C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public ListKey key;

		[Token(Token = "0x40030C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgQueryFetchResult<PublicChangelogListResponse>> onComplete;

		[Token(Token = "0x40030C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6005A4E")]
		[Address(RVA = "0x5D28C50", Offset = "0x5D27C50", VA = "0x5D28C50", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6005A4F")]
		[Address(RVA = "0x5D29200", Offset = "0x5D28200", VA = "0x5D29200", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40030AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly AottgQueryPolicy CachePolicy;

	[Token(Token = "0x40030AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static AottgChangelogService _instance;

	[Token(Token = "0x40030AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AottgQueryCache<UnitKey, LatestChangelogVersionResponse> _latestVersionCache;

	[Token(Token = "0x40030AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private AottgQueryCache<UnitKey, ChangelogEntryResponse> _latestEntryCache;

	[Token(Token = "0x40030B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgQueryCache<ListKey, PublicChangelogListResponse> _listCache;

	[Token(Token = "0x40030B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private AottgQueryCache<string, ChangelogEntryResponse> _entryCache;

	[Token(Token = "0x6005A2A")]
	[Address(RVA = "0x5D269C0", Offset = "0x5D259C0", VA = "0x5D269C0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005A2B")]
	[Address(RVA = "0x5D26D50", Offset = "0x5D25D50", VA = "0x5D26D50")]
	public static void GetLatestVersion(Action<AottgChangelogResult<LatestChangelogVersionResponse>> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6005A2C")]
	[Address(RVA = "0x5D26F00", Offset = "0x5D25F00", VA = "0x5D26F00")]
	public static void GetLatest(Action<AottgChangelogResult<ChangelogEntryResponse>> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6005A2D")]
	[Address(RVA = "0x5D270B0", Offset = "0x5D260B0", VA = "0x5D270B0")]
	public static void GetList(Action<AottgChangelogResult<PublicChangelogListResponse>> onResult, int page = 1, int pageSize = 20, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6005A2E")]
	[Address(RVA = "0x5D272F0", Offset = "0x5D262F0", VA = "0x5D272F0")]
	public static void GetEntry(string id, Action<AottgChangelogResult<ChangelogEntryResponse>> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6005A2F")]
	[Address(RVA = "0x5D27510", Offset = "0x5D26510", VA = "0x5D27510")]
	public static void ClearSessionCache()
	{
	}

	[Token(Token = "0x6005A30")]
	[Address(RVA = "0x5D276E0", Offset = "0x5D266E0", VA = "0x5D276E0")]
	private void FetchLatestVersion(UnitKey key, Action<AottgQueryFetchResult<LatestChangelogVersionResponse>> onComplete)
	{
	}

	[Token(Token = "0x6005A31")]
	[Address(RVA = "0x5D27830", Offset = "0x5D26830", VA = "0x5D27830")]
	private void FetchLatestEntry(UnitKey key, Action<AottgQueryFetchResult<ChangelogEntryResponse>> onComplete)
	{
	}

	[Token(Token = "0x6005A32")]
	[Address(RVA = "0x5D27930", Offset = "0x5D26930", VA = "0x5D27930")]
	private void FetchList(ListKey key, Action<AottgQueryFetchResult<PublicChangelogListResponse>> onComplete)
	{
	}

	[Token(Token = "0x6005A33")]
	[Address(RVA = "0x5D27AA0", Offset = "0x5D26AA0", VA = "0x5D27AA0")]
	private void FetchEntry(string id, Action<AottgQueryFetchResult<ChangelogEntryResponse>> onComplete)
	{
	}

	[Token(Token = "0x6005A34")]
	[Address(RVA = "0x5D27790", Offset = "0x5D26790", VA = "0x5D27790")]
	[AsyncStateMachine(typeof(_003CFetchLatestVersionAsync_003Ed__16))]
	private UniTask FetchLatestVersionAsync(Action<AottgQueryFetchResult<LatestChangelogVersionResponse>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6005A35")]
	[Address(RVA = "0x5D279F0", Offset = "0x5D269F0", VA = "0x5D279F0")]
	[AsyncStateMachine(typeof(_003CFetchListAsync_003Ed__17))]
	private UniTask FetchListAsync(ListKey key, Action<AottgQueryFetchResult<PublicChangelogListResponse>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6005A36")]
	[Address(RVA = "0x5D27870", Offset = "0x5D26870", VA = "0x5D27870")]
	[AsyncStateMachine(typeof(_003CFetchEntryAsync_003Ed__18))]
	private UniTask FetchEntryAsync(string path, Action<AottgQueryFetchResult<ChangelogEntryResponse>> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6005A37")]
	[Address(RVA = "0x5D27B30", Offset = "0x5D26B30", VA = "0x5D27B30")]
	private static UniTask<AottgApiResult> SendGet(string path)
	{
		return default(UniTask<AottgApiResult>);
	}

	[Token(Token = "0x6005A38")]
	private static bool Ready<T>(Action<AottgChangelogResult<T>> onResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A39")]
	private static AottgChangelogResult<T> Map<T>(AottgQueryResult<T> result)
	{
		return null;
	}

	[Token(Token = "0x6005A3A")]
	[Address(RVA = "0x5D27C50", Offset = "0x5D26C50", VA = "0x5D27C50")]
	public AottgChangelogService()
	{
	}
}
