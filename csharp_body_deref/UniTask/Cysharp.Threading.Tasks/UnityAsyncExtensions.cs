// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.UnityAsyncExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks.Sources;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;
using Unity.Jobs;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Networking;
using UnityEngine.Rendering;
using UnityEngine.UI;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000155")]
public static class UnityAsyncExtensions
{
	[Token(Token = "0x2000156")]
	public struct AssetBundleRequestAllAssetsAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x400054D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private AssetBundleRequest asyncOperation;

		[Token(Token = "0x400054E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000058")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000845")]
			[Address(RVA = "0x2925BD0", Offset = "0x29241D0", VA = "0x182925BD0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000843")]
		[Address(RVA = "0x2925BA0", Offset = "0x29241A0", VA = "0x182925BA0")]
		public AssetBundleRequestAllAssetsAwaiter(AssetBundleRequest asyncOperation)
		{
		}

		[Token(Token = "0x6000844")]
		[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
		public AssetBundleRequestAllAssetsAwaiter GetAwaiter()
		{
			return default(AssetBundleRequestAllAssetsAwaiter);
		}

		[Token(Token = "0x6000846")]
		[Address(RVA = "0x2926610", Offset = "0x2924C10", VA = "0x182926610")]
		public UnityEngine.Object[] GetResult()
		{
			return null;
		}

		[Token(Token = "0x6000847")]
		[Address(RVA = "0x2926690", Offset = "0x2924C90", VA = "0x182926690", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000848")]
		[Address(RVA = "0x29266A0", Offset = "0x2924CA0", VA = "0x1829266A0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x2000157")]
	private sealed class AssetBundleRequestAllAssetsConfiguredSource : IUniTaskSource<UnityEngine.Object[]>, IUniTaskSource, IValueTaskSource, IValueTaskSource<UnityEngine.Object[]>, IPlayerLoopItem, ITaskPoolNode<AssetBundleRequestAllAssetsConfiguredSource>
	{
		[Token(Token = "0x400054F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<AssetBundleRequestAllAssetsConfiguredSource> pool;

		[Token(Token = "0x4000550")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private AssetBundleRequestAllAssetsConfiguredSource nextNode;

		[Token(Token = "0x4000551")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private AssetBundleRequest asyncOperation;

		[Token(Token = "0x4000552")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x4000553")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000554")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000555")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x4000556")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x4000557")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<UnityEngine.Object[]> core;

		[Token(Token = "0x4000558")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000059")]
		public unsafe ref AssetBundleRequestAllAssetsConfiguredSource NextNode
		{
			[Token(Token = "0x6000849")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "24")]
			get
			{
				return ref *(AssetBundleRequestAllAssetsConfiguredSource*)null;
			}
		}

		[Token(Token = "0x600084A")]
		[Address(RVA = "0x2927000", Offset = "0x2925600", VA = "0x182927000")]
		static AssetBundleRequestAllAssetsConfiguredSource()
		{
		}

		[Token(Token = "0x600084B")]
		[Address(RVA = "0x2927100", Offset = "0x2925700", VA = "0x182927100")]
		private AssetBundleRequestAllAssetsConfiguredSource()
		{
		}

		[Token(Token = "0x600084C")]
		[Address(RVA = "0x2926840", Offset = "0x2924E40", VA = "0x182926840")]
		public static IUniTaskSource<UnityEngine.Object[]> Create(AssetBundleRequest asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600084D")]
		[Address(RVA = "0x2926C80", Offset = "0x2925280", VA = "0x182926C80", Slot = "22")]
		public UnityEngine.Object[] GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x600084E")]
		[Address(RVA = "0x2926C70", Offset = "0x2925270", VA = "0x182926C70", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600084F")]
		[Address(RVA = "0x2926D20", Offset = "0x2925320", VA = "0x182926D20", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000850")]
		[Address(RVA = "0x2926FC0", Offset = "0x29255C0", VA = "0x182926FC0", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000851")]
		[Address(RVA = "0x2926EA0", Offset = "0x29254A0", VA = "0x182926EA0", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000852")]
		[Address(RVA = "0x2926D70", Offset = "0x2925370", VA = "0x182926D70", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000853")]
		[Address(RVA = "0x2926F00", Offset = "0x2925500", VA = "0x182926F00")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x6000854")]
		[Address(RVA = "0x2926780", Offset = "0x2924D80", VA = "0x182926780")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x2000159")]
	private sealed class AsyncGPUReadbackRequestAwaiterConfiguredSource : IUniTaskSource<AsyncGPUReadbackRequest>, IUniTaskSource, IValueTaskSource, IValueTaskSource<AsyncGPUReadbackRequest>, IPlayerLoopItem, ITaskPoolNode<AsyncGPUReadbackRequestAwaiterConfiguredSource>
	{
		[Token(Token = "0x400055B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<AsyncGPUReadbackRequestAwaiterConfiguredSource> pool;

		[Token(Token = "0x400055C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private AsyncGPUReadbackRequestAwaiterConfiguredSource nextNode;

		[Token(Token = "0x400055D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private AsyncGPUReadbackRequest asyncOperation;

		[Token(Token = "0x400055E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400055F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000560")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x4000561")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<AsyncGPUReadbackRequest> core;

		[Token(Token = "0x1700005A")]
		public unsafe ref AsyncGPUReadbackRequestAwaiterConfiguredSource NextNode
		{
			[Token(Token = "0x6000859")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "24")]
			get
			{
				return ref *(AsyncGPUReadbackRequestAwaiterConfiguredSource*)null;
			}
		}

		[Token(Token = "0x600085A")]
		[Address(RVA = "0x292F0D0", Offset = "0x292D6D0", VA = "0x18292F0D0")]
		static AsyncGPUReadbackRequestAwaiterConfiguredSource()
		{
		}

		[Token(Token = "0x600085B")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		private AsyncGPUReadbackRequestAwaiterConfiguredSource()
		{
		}

		[Token(Token = "0x600085C")]
		[Address(RVA = "0x292E6E0", Offset = "0x292CCE0", VA = "0x18292E6E0")]
		public static IUniTaskSource<AsyncGPUReadbackRequest> Create(AsyncGPUReadbackRequest asyncOperation, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600085D")]
		[Address(RVA = "0x292EA70", Offset = "0x292D070", VA = "0x18292EA70", Slot = "22")]
		public AsyncGPUReadbackRequest GetResult(short token)
		{
			return default(AsyncGPUReadbackRequest);
		}

		[Token(Token = "0x600085E")]
		[Address(RVA = "0x292EA50", Offset = "0x292D050", VA = "0x18292EA50", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600085F")]
		[Address(RVA = "0x292EB30", Offset = "0x292D130", VA = "0x18292EB30", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000860")]
		[Address(RVA = "0x292F020", Offset = "0x292D620", VA = "0x18292F020", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000861")]
		[Address(RVA = "0x292EDC0", Offset = "0x292D3C0", VA = "0x18292EDC0", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000862")]
		[Address(RVA = "0x292EC80", Offset = "0x292D280", VA = "0x18292EC80", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000863")]
		[Address(RVA = "0x292EF80", Offset = "0x292D580", VA = "0x18292EF80")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200015B")]
	private sealed class JobHandlePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem
	{
		[Token(Token = "0x4000564")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private JobHandle jobHandle;

		[Token(Token = "0x4000565")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x6000868")]
		[Address(RVA = "0x2942610", Offset = "0x2940C10", VA = "0x182942610")]
		public static JobHandlePromise Create(JobHandle jobHandle, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000869")]
		[Address(RVA = "0x29426A0", Offset = "0x2940CA0", VA = "0x1829426A0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600086A")]
		[Address(RVA = "0x29426F0", Offset = "0x2940CF0", VA = "0x1829426F0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600086B")]
		[Address(RVA = "0x29428B0", Offset = "0x2940EB0", VA = "0x1829428B0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600086C")]
		[Address(RVA = "0x2942850", Offset = "0x2940E50", VA = "0x182942850", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600086D")]
		[Address(RVA = "0x2942740", Offset = "0x2940D40", VA = "0x182942740", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600086E")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public JobHandlePromise()
		{
		}
	}

	[Token(Token = "0x200015C")]
	public struct AsyncOperationAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000566")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private AsyncOperation asyncOperation;

		[Token(Token = "0x4000567")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x1700005B")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000870")]
			[Address(RVA = "0x2925BD0", Offset = "0x29241D0", VA = "0x182925BD0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600086F")]
		[Address(RVA = "0x2925BA0", Offset = "0x29241A0", VA = "0x182925BA0")]
		public AsyncOperationAwaiter(AsyncOperation asyncOperation)
		{
		}

		[Token(Token = "0x6000871")]
		[Address(RVA = "0x2933230", Offset = "0x2931830", VA = "0x182933230")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000872")]
		[Address(RVA = "0x29332A0", Offset = "0x29318A0", VA = "0x1829332A0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000873")]
		[Address(RVA = "0x29332B0", Offset = "0x29318B0", VA = "0x1829332B0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x200015D")]
	private sealed class AsyncOperationConfiguredSource : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<AsyncOperationConfiguredSource>
	{
		[Token(Token = "0x4000568")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<AsyncOperationConfiguredSource> pool;

		[Token(Token = "0x4000569")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private AsyncOperationConfiguredSource nextNode;

		[Token(Token = "0x400056A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private AsyncOperation asyncOperation;

		[Token(Token = "0x400056B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x400056C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400056D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400056E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x400056F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x4000570")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x4000571")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x1700005C")]
		public unsafe ref AsyncOperationConfiguredSource NextNode
		{
			[Token(Token = "0x6000874")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "15")]
			get
			{
				return ref *(AsyncOperationConfiguredSource*)null;
			}
		}

		[Token(Token = "0x6000875")]
		[Address(RVA = "0x2933C50", Offset = "0x2932250", VA = "0x182933C50")]
		static AsyncOperationConfiguredSource()
		{
		}

		[Token(Token = "0x6000876")]
		[Address(RVA = "0x2933D50", Offset = "0x2932350", VA = "0x182933D50")]
		private AsyncOperationConfiguredSource()
		{
		}

		[Token(Token = "0x6000877")]
		[Address(RVA = "0x2933480", Offset = "0x2931A80", VA = "0x182933480")]
		public static IUniTaskSource Create(AsyncOperation asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000878")]
		[Address(RVA = "0x29338A0", Offset = "0x2931EA0", VA = "0x1829338A0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000879")]
		[Address(RVA = "0x2933930", Offset = "0x2931F30", VA = "0x182933930", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600087A")]
		[Address(RVA = "0x2933C10", Offset = "0x2932210", VA = "0x182933C10", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600087B")]
		[Address(RVA = "0x2933AD0", Offset = "0x29320D0", VA = "0x182933AD0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600087C")]
		[Address(RVA = "0x2933980", Offset = "0x2931F80", VA = "0x182933980", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600087D")]
		[Address(RVA = "0x2933B30", Offset = "0x2932130", VA = "0x182933B30")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x600087E")]
		[Address(RVA = "0x2933390", Offset = "0x2931990", VA = "0x182933390")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x200015F")]
	public struct ResourceRequestAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000574")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ResourceRequest asyncOperation;

		[Token(Token = "0x4000575")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x1700005D")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000884")]
			[Address(RVA = "0x2925BD0", Offset = "0x29241D0", VA = "0x182925BD0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000883")]
		[Address(RVA = "0x2925BA0", Offset = "0x29241A0", VA = "0x182925BA0")]
		public ResourceRequestAwaiter(ResourceRequest asyncOperation)
		{
		}

		[Token(Token = "0x6000885")]
		[Address(RVA = "0x2927180", Offset = "0x2925780", VA = "0x182927180")]
		public UnityEngine.Object GetResult()
		{
			return null;
		}

		[Token(Token = "0x6000886")]
		[Address(RVA = "0x2943A10", Offset = "0x2942010", VA = "0x182943A10", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000887")]
		[Address(RVA = "0x2943A20", Offset = "0x2942020", VA = "0x182943A20", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x2000160")]
	private sealed class ResourceRequestConfiguredSource : IUniTaskSource<UnityEngine.Object>, IUniTaskSource, IValueTaskSource, IValueTaskSource<UnityEngine.Object>, IPlayerLoopItem, ITaskPoolNode<ResourceRequestConfiguredSource>
	{
		[Token(Token = "0x4000576")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<ResourceRequestConfiguredSource> pool;

		[Token(Token = "0x4000577")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private ResourceRequestConfiguredSource nextNode;

		[Token(Token = "0x4000578")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private ResourceRequest asyncOperation;

		[Token(Token = "0x4000579")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x400057A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400057B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400057C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x400057D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x400057E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<UnityEngine.Object> core;

		[Token(Token = "0x400057F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x1700005E")]
		public unsafe ref ResourceRequestConfiguredSource NextNode
		{
			[Token(Token = "0x6000888")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "24")]
			get
			{
				return ref *(ResourceRequestConfiguredSource*)null;
			}
		}

		[Token(Token = "0x6000889")]
		[Address(RVA = "0x29443A0", Offset = "0x29429A0", VA = "0x1829443A0")]
		static ResourceRequestConfiguredSource()
		{
		}

		[Token(Token = "0x600088A")]
		[Address(RVA = "0x29444A0", Offset = "0x2942AA0", VA = "0x1829444A0")]
		private ResourceRequestConfiguredSource()
		{
		}

		[Token(Token = "0x600088B")]
		[Address(RVA = "0x2943BC0", Offset = "0x29421C0", VA = "0x182943BC0")]
		public static IUniTaskSource<UnityEngine.Object> Create(ResourceRequest asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600088C")]
		[Address(RVA = "0x2944000", Offset = "0x2942600", VA = "0x182944000", Slot = "22")]
		public UnityEngine.Object GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x600088D")]
		[Address(RVA = "0x2943FF0", Offset = "0x29425F0", VA = "0x182943FF0", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600088E")]
		[Address(RVA = "0x29440A0", Offset = "0x29426A0", VA = "0x1829440A0", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600088F")]
		[Address(RVA = "0x2944360", Offset = "0x2942960", VA = "0x182944360", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000890")]
		[Address(RVA = "0x2944220", Offset = "0x2942820", VA = "0x182944220", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000891")]
		[Address(RVA = "0x29440F0", Offset = "0x29426F0", VA = "0x1829440F0", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000892")]
		[Address(RVA = "0x2944280", Offset = "0x2942880", VA = "0x182944280")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x6000893")]
		[Address(RVA = "0x2943B00", Offset = "0x2942100", VA = "0x182943B00")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x2000162")]
	public struct AssetBundleRequestAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000582")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private AssetBundleRequest asyncOperation;

		[Token(Token = "0x4000583")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x1700005F")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000899")]
			[Address(RVA = "0x2925BD0", Offset = "0x29241D0", VA = "0x182925BD0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000898")]
		[Address(RVA = "0x2925BA0", Offset = "0x29241A0", VA = "0x182925BA0")]
		public AssetBundleRequestAwaiter(AssetBundleRequest asyncOperation)
		{
		}

		[Token(Token = "0x600089A")]
		[Address(RVA = "0x2927180", Offset = "0x2925780", VA = "0x182927180")]
		public UnityEngine.Object GetResult()
		{
			return null;
		}

		[Token(Token = "0x600089B")]
		[Address(RVA = "0x2927200", Offset = "0x2925800", VA = "0x182927200", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600089C")]
		[Address(RVA = "0x2927210", Offset = "0x2925810", VA = "0x182927210", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x2000163")]
	private sealed class AssetBundleRequestConfiguredSource : IUniTaskSource<UnityEngine.Object>, IUniTaskSource, IValueTaskSource, IValueTaskSource<UnityEngine.Object>, IPlayerLoopItem, ITaskPoolNode<AssetBundleRequestConfiguredSource>
	{
		[Token(Token = "0x4000584")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<AssetBundleRequestConfiguredSource> pool;

		[Token(Token = "0x4000585")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private AssetBundleRequestConfiguredSource nextNode;

		[Token(Token = "0x4000586")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private AssetBundleRequest asyncOperation;

		[Token(Token = "0x4000587")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x4000588")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000589")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400058A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x400058B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x400058C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<UnityEngine.Object> core;

		[Token(Token = "0x400058D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000060")]
		public unsafe ref AssetBundleRequestConfiguredSource NextNode
		{
			[Token(Token = "0x600089D")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "24")]
			get
			{
				return ref *(AssetBundleRequestConfiguredSource*)null;
			}
		}

		[Token(Token = "0x600089E")]
		[Address(RVA = "0x2927B90", Offset = "0x2926190", VA = "0x182927B90")]
		static AssetBundleRequestConfiguredSource()
		{
		}

		[Token(Token = "0x600089F")]
		[Address(RVA = "0x2927C90", Offset = "0x2926290", VA = "0x182927C90")]
		private AssetBundleRequestConfiguredSource()
		{
		}

		[Token(Token = "0x60008A0")]
		[Address(RVA = "0x29273B0", Offset = "0x29259B0", VA = "0x1829273B0")]
		public static IUniTaskSource<UnityEngine.Object> Create(AssetBundleRequest asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60008A1")]
		[Address(RVA = "0x29277F0", Offset = "0x2925DF0", VA = "0x1829277F0", Slot = "22")]
		public UnityEngine.Object GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x60008A2")]
		[Address(RVA = "0x29277E0", Offset = "0x2925DE0", VA = "0x1829277E0", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60008A3")]
		[Address(RVA = "0x2927890", Offset = "0x2925E90", VA = "0x182927890", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008A4")]
		[Address(RVA = "0x2927B50", Offset = "0x2926150", VA = "0x182927B50", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008A5")]
		[Address(RVA = "0x2927A10", Offset = "0x2926010", VA = "0x182927A10", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60008A6")]
		[Address(RVA = "0x29278E0", Offset = "0x2925EE0", VA = "0x1829278E0", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008A7")]
		[Address(RVA = "0x2927A70", Offset = "0x2926070", VA = "0x182927A70")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60008A8")]
		[Address(RVA = "0x29272F0", Offset = "0x29258F0", VA = "0x1829272F0")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x2000165")]
	public struct AssetBundleCreateRequestAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000590")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private AssetBundleCreateRequest asyncOperation;

		[Token(Token = "0x4000591")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000061")]
		public bool IsCompleted
		{
			[Token(Token = "0x60008AE")]
			[Address(RVA = "0x2925BD0", Offset = "0x29241D0", VA = "0x182925BD0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60008AD")]
		[Address(RVA = "0x2925BA0", Offset = "0x29241A0", VA = "0x182925BA0")]
		public AssetBundleCreateRequestAwaiter(AssetBundleCreateRequest asyncOperation)
		{
		}

		[Token(Token = "0x60008AF")]
		[Address(RVA = "0x2925A30", Offset = "0x2924030", VA = "0x182925A30")]
		public AssetBundle GetResult()
		{
			return null;
		}

		[Token(Token = "0x60008B0")]
		[Address(RVA = "0x2925AB0", Offset = "0x29240B0", VA = "0x182925AB0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60008B1")]
		[Address(RVA = "0x2925AC0", Offset = "0x29240C0", VA = "0x182925AC0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x2000166")]
	private sealed class AssetBundleCreateRequestConfiguredSource : IUniTaskSource<AssetBundle>, IUniTaskSource, IValueTaskSource, IValueTaskSource<AssetBundle>, IPlayerLoopItem, ITaskPoolNode<AssetBundleCreateRequestConfiguredSource>
	{
		[Token(Token = "0x4000592")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<AssetBundleCreateRequestConfiguredSource> pool;

		[Token(Token = "0x4000593")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private AssetBundleCreateRequestConfiguredSource nextNode;

		[Token(Token = "0x4000594")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private AssetBundleCreateRequest asyncOperation;

		[Token(Token = "0x4000595")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x4000596")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000597")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000598")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x4000599")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x400059A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<AssetBundle> core;

		[Token(Token = "0x400059B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000062")]
		public unsafe ref AssetBundleCreateRequestConfiguredSource NextNode
		{
			[Token(Token = "0x60008B2")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "24")]
			get
			{
				return ref *(AssetBundleCreateRequestConfiguredSource*)null;
			}
		}

		[Token(Token = "0x60008B3")]
		[Address(RVA = "0x2926490", Offset = "0x2924A90", VA = "0x182926490")]
		static AssetBundleCreateRequestConfiguredSource()
		{
		}

		[Token(Token = "0x60008B4")]
		[Address(RVA = "0x2926590", Offset = "0x2924B90", VA = "0x182926590")]
		private AssetBundleCreateRequestConfiguredSource()
		{
		}

		[Token(Token = "0x60008B5")]
		[Address(RVA = "0x2925CB0", Offset = "0x29242B0", VA = "0x182925CB0")]
		public static IUniTaskSource<AssetBundle> Create(AssetBundleCreateRequest asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60008B6")]
		[Address(RVA = "0x29260F0", Offset = "0x29246F0", VA = "0x1829260F0", Slot = "22")]
		public AssetBundle GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x60008B7")]
		[Address(RVA = "0x29260E0", Offset = "0x29246E0", VA = "0x1829260E0", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60008B8")]
		[Address(RVA = "0x2926190", Offset = "0x2924790", VA = "0x182926190", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008B9")]
		[Address(RVA = "0x2926450", Offset = "0x2924A50", VA = "0x182926450", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008BA")]
		[Address(RVA = "0x2926310", Offset = "0x2924910", VA = "0x182926310", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60008BB")]
		[Address(RVA = "0x29261E0", Offset = "0x29247E0", VA = "0x1829261E0", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008BC")]
		[Address(RVA = "0x2926370", Offset = "0x2924970", VA = "0x182926370")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60008BD")]
		[Address(RVA = "0x2925BF0", Offset = "0x29241F0", VA = "0x182925BF0")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x2000168")]
	public struct UnityWebRequestAsyncOperationAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x400059E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UnityWebRequestAsyncOperation asyncOperation;

		[Token(Token = "0x400059F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000063")]
		public bool IsCompleted
		{
			[Token(Token = "0x60008C3")]
			[Address(RVA = "0x2925BD0", Offset = "0x29241D0", VA = "0x182925BD0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60008C2")]
		[Address(RVA = "0x2925BA0", Offset = "0x29241A0", VA = "0x182925BA0")]
		public UnityWebRequestAsyncOperationAwaiter(UnityWebRequestAsyncOperation asyncOperation)
		{
		}

		[Token(Token = "0x60008C4")]
		[Address(RVA = "0x294F010", Offset = "0x294D610", VA = "0x18294F010")]
		public UnityWebRequest GetResult()
		{
			return null;
		}

		[Token(Token = "0x60008C5")]
		[Address(RVA = "0x294F140", Offset = "0x294D740", VA = "0x18294F140", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60008C6")]
		[Address(RVA = "0x294F150", Offset = "0x294D750", VA = "0x18294F150", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x2000169")]
	private sealed class UnityWebRequestAsyncOperationConfiguredSource : IUniTaskSource<UnityWebRequest>, IUniTaskSource, IValueTaskSource, IValueTaskSource<UnityWebRequest>, IPlayerLoopItem, ITaskPoolNode<UnityWebRequestAsyncOperationConfiguredSource>
	{
		[Token(Token = "0x40005A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<UnityWebRequestAsyncOperationConfiguredSource> pool;

		[Token(Token = "0x40005A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private UnityWebRequestAsyncOperationConfiguredSource nextNode;

		[Token(Token = "0x40005A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UnityWebRequestAsyncOperation asyncOperation;

		[Token(Token = "0x40005A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x40005A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x40005A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x40005A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x40005A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x40005A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<UnityWebRequest> core;

		[Token(Token = "0x40005A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000064")]
		public unsafe ref UnityWebRequestAsyncOperationConfiguredSource NextNode
		{
			[Token(Token = "0x60008C7")]
			[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "24")]
			get
			{
				return ref *(UnityWebRequestAsyncOperationConfiguredSource*)null;
			}
		}

		[Token(Token = "0x60008C8")]
		[Address(RVA = "0x294FC40", Offset = "0x294E240", VA = "0x18294FC40")]
		static UnityWebRequestAsyncOperationConfiguredSource()
		{
		}

		[Token(Token = "0x60008C9")]
		[Address(RVA = "0x294FD40", Offset = "0x294E340", VA = "0x18294FD40")]
		private UnityWebRequestAsyncOperationConfiguredSource()
		{
		}

		[Token(Token = "0x60008CA")]
		[Address(RVA = "0x294F390", Offset = "0x294D990", VA = "0x18294F390")]
		public static IUniTaskSource<UnityWebRequest> Create(UnityWebRequestAsyncOperation asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60008CB")]
		[Address(RVA = "0x294F7D0", Offset = "0x294DDD0", VA = "0x18294F7D0", Slot = "22")]
		public UnityWebRequest GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x60008CC")]
		[Address(RVA = "0x294F7C0", Offset = "0x294DDC0", VA = "0x18294F7C0", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60008CD")]
		[Address(RVA = "0x294F870", Offset = "0x294DE70", VA = "0x18294F870", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008CE")]
		[Address(RVA = "0x294FC00", Offset = "0x294E200", VA = "0x18294FC00", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008CF")]
		[Address(RVA = "0x294FAC0", Offset = "0x294E0C0", VA = "0x18294FAC0", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60008D0")]
		[Address(RVA = "0x294F8C0", Offset = "0x294DEC0", VA = "0x18294F8C0", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008D1")]
		[Address(RVA = "0x294FB20", Offset = "0x294E120", VA = "0x18294FB20")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60008D2")]
		[Address(RVA = "0x294F230", Offset = "0x294D830", VA = "0x18294F230")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200016B")]
	[CompilerGenerated]
	private struct _003CWaitAsync_003Ed__11 : IAsyncStateMachine
	{
		[Token(Token = "0x40005AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40005AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40005AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public PlayerLoopTiming waitTiming;

		[Token(Token = "0x40005AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JobHandle jobHandle;

		[Token(Token = "0x40005B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40005B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private YieldAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60008D7")]
		[Address(RVA = "0x2948470", Offset = "0x2946A70", VA = "0x182948470", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60008D8")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x2949DB0", Offset = "0x29483B0", VA = "0x182949DB0")]
	public static AssetBundleRequestAllAssetsAwaiter AwaitForAllAssets(this AssetBundleRequest asyncOperation)
	{
		return default(AssetBundleRequestAllAssetsAwaiter);
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x2949D60", Offset = "0x2948360", VA = "0x182949D60")]
	public static UniTask<UnityEngine.Object[]> AwaitForAllAssets(this AssetBundleRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityEngine.Object[]>);
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x2949B00", Offset = "0x2948100", VA = "0x182949B00")]
	public static UniTask<UnityEngine.Object[]> AwaitForAllAssets(this AssetBundleRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityEngine.Object[]>);
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x2949B50", Offset = "0x2948150", VA = "0x182949B50")]
	public static UniTask<UnityEngine.Object[]> AwaitForAllAssets(this AssetBundleRequest asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityEngine.Object[]>);
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x294AAA0", Offset = "0x29490A0", VA = "0x18294AAA0")]
	public static UniTask<AsyncGPUReadbackRequest>.Awaiter GetAwaiter(this AsyncGPUReadbackRequest asyncOperation)
	{
		return default(UniTask<AsyncGPUReadbackRequest>.Awaiter);
	}

	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x294D430", Offset = "0x294BA30", VA = "0x18294D430")]
	public static UniTask<AsyncGPUReadbackRequest> WithCancellation(this AsyncGPUReadbackRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<AsyncGPUReadbackRequest>);
	}

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x294D3E0", Offset = "0x294B9E0", VA = "0x18294D3E0")]
	public static UniTask<AsyncGPUReadbackRequest> WithCancellation(this AsyncGPUReadbackRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<AsyncGPUReadbackRequest>);
	}

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x294D1A0", Offset = "0x294B7A0", VA = "0x18294D1A0")]
	public static UniTask<AsyncGPUReadbackRequest> ToUniTask(this AsyncGPUReadbackRequest asyncOperation, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<AsyncGPUReadbackRequest>);
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x294D300", Offset = "0x294B900", VA = "0x18294D300")]
	[AsyncStateMachine(typeof(_003CWaitAsync_003Ed__11))]
	public static UniTask WaitAsync(this JobHandle jobHandle, PlayerLoopTiming waitTiming, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x294A810", Offset = "0x2948E10", VA = "0x18294A810")]
	public static UniTask.Awaiter GetAwaiter(this JobHandle jobHandle)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x294CEC0", Offset = "0x294B4C0", VA = "0x18294CEC0")]
	public static UniTask ToUniTask(this JobHandle jobHandle, PlayerLoopTiming waitTiming)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x294C600", Offset = "0x294AC00", VA = "0x18294C600")]
	public static UniTask StartAsyncCoroutine(this MonoBehaviour monoBehaviour, Func<CancellationToken, UniTask> asyncCoroutine)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x294D520", Offset = "0x294BB20", VA = "0x18294D520")]
	public static UniTask WithCancellation(this AsyncOperation asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x294D600", Offset = "0x294BC00", VA = "0x18294D600")]
	public static UniTask WithCancellation(this AsyncOperation asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x294CD10", Offset = "0x294B310", VA = "0x18294CD10")]
	public static UniTask ToUniTask(this AsyncOperation asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x294A980", Offset = "0x2948F80", VA = "0x18294A980")]
	public static ResourceRequestAwaiter GetAwaiter(this ResourceRequest asyncOperation)
	{
		return default(ResourceRequestAwaiter);
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x294D4D0", Offset = "0x294BAD0", VA = "0x18294D4D0")]
	public static UniTask<UnityEngine.Object> WithCancellation(this ResourceRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x294D480", Offset = "0x294BA80", VA = "0x18294D480")]
	public static UniTask<UnityEngine.Object> WithCancellation(this ResourceRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x294C8F0", Offset = "0x294AEF0", VA = "0x18294C8F0")]
	public static UniTask<UnityEngine.Object> ToUniTask(this ResourceRequest asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x294AA10", Offset = "0x2949010", VA = "0x18294AA10")]
	public static AssetBundleRequestAwaiter GetAwaiter(this AssetBundleRequest asyncOperation)
	{
		return default(AssetBundleRequestAwaiter);
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x294D730", Offset = "0x294BD30", VA = "0x18294D730")]
	public static UniTask<UnityEngine.Object> WithCancellation(this AssetBundleRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x294D690", Offset = "0x294BC90", VA = "0x18294D690")]
	public static UniTask<UnityEngine.Object> WithCancellation(this AssetBundleRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x294CB00", Offset = "0x294B100", VA = "0x18294CB00")]
	public static UniTask<UnityEngine.Object> ToUniTask(this AssetBundleRequest asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x294AB80", Offset = "0x2949180", VA = "0x18294AB80")]
	public static AssetBundleCreateRequestAwaiter GetAwaiter(this AssetBundleCreateRequest asyncOperation)
	{
		return default(AssetBundleCreateRequestAwaiter);
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x294D640", Offset = "0x294BC40", VA = "0x18294D640")]
	public static UniTask<AssetBundle> WithCancellation(this AssetBundleCreateRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<AssetBundle>);
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x294D6E0", Offset = "0x294BCE0", VA = "0x18294D6E0")]
	public static UniTask<AssetBundle> WithCancellation(this AssetBundleCreateRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<AssetBundle>);
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x294CF90", Offset = "0x294B590", VA = "0x18294CF90")]
	public static UniTask<AssetBundle> ToUniTask(this AssetBundleCreateRequest asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<AssetBundle>);
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x294AC10", Offset = "0x2949210", VA = "0x18294AC10")]
	public static UnityWebRequestAsyncOperationAwaiter GetAwaiter(this UnityWebRequestAsyncOperation asyncOperation)
	{
		return default(UnityWebRequestAsyncOperationAwaiter);
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x294D560", Offset = "0x294BB60", VA = "0x18294D560")]
	public static UniTask<UnityWebRequest> WithCancellation(this UnityWebRequestAsyncOperation asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityWebRequest>);
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x294D5B0", Offset = "0x294BBB0", VA = "0x18294D5B0")]
	public static UniTask<UnityWebRequest> WithCancellation(this UnityWebRequestAsyncOperation asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityWebRequest>);
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x294C650", Offset = "0x294AC50", VA = "0x18294C650")]
	public static UniTask<UnityWebRequest> ToUniTask(this UnityWebRequestAsyncOperation asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityWebRequest>);
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x294A080", Offset = "0x2948680", VA = "0x18294A080")]
	public static AsyncUnityEventHandler GetAsyncEventHandler(this UnityEvent unityEvent, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x294B3B0", Offset = "0x29499B0", VA = "0x18294B3B0")]
	public static UniTask OnInvokeAsync(this UnityEvent unityEvent, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x294B330", Offset = "0x2949930", VA = "0x18294B330")]
	public static IUniTaskAsyncEnumerable<AsyncUnit> OnInvokeAsAsyncEnumerable(this UnityEvent unityEvent, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000810")]
	public static AsyncUnityEventHandler<T> GetAsyncEventHandler<T>(this UnityEvent<T> unityEvent, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000811")]
	public static UniTask<T> OnInvokeAsync<T>(this UnityEvent<T> unityEvent, CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x6000812")]
	public static IUniTaskAsyncEnumerable<T> OnInvokeAsAsyncEnumerable<T>(this UnityEvent<T> unityEvent, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x2949EC0", Offset = "0x29484C0", VA = "0x182949EC0")]
	public static IAsyncClickEventHandler GetAsyncClickEventHandler(this Button button)
	{
		return null;
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x2949E40", Offset = "0x2948440", VA = "0x182949E40")]
	public static IAsyncClickEventHandler GetAsyncClickEventHandler(this Button button, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x294ADD0", Offset = "0x29493D0", VA = "0x18294ADD0")]
	public static UniTask OnClickAsync(this Button button)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x294AF00", Offset = "0x2949500", VA = "0x18294AF00")]
	public static UniTask OnClickAsync(this Button button, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x294ACA0", Offset = "0x29492A0", VA = "0x18294ACA0")]
	public static IUniTaskAsyncEnumerable<AsyncUnit> OnClickAsAsyncEnumerable(this Button button)
	{
		return null;
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x294AD40", Offset = "0x2949340", VA = "0x18294AD40")]
	public static IUniTaskAsyncEnumerable<AsyncUnit> OnClickAsAsyncEnumerable(this Button button, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x294A190", Offset = "0x2948790", VA = "0x18294A190")]
	public static IAsyncValueChangedEventHandler<bool> GetAsyncValueChangedEventHandler(this Toggle toggle)
	{
		return null;
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x294A780", Offset = "0x2948D80", VA = "0x18294A780")]
	public static IAsyncValueChangedEventHandler<bool> GetAsyncValueChangedEventHandler(this Toggle toggle, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x294BBC0", Offset = "0x294A1C0", VA = "0x18294BBC0")]
	public static UniTask<bool> OnValueChangedAsync(this Toggle toggle)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x294BF20", Offset = "0x294A520", VA = "0x18294BF20")]
	public static UniTask<bool> OnValueChangedAsync(this Toggle toggle, CancellationToken cancellationToken)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x294BB20", Offset = "0x294A120", VA = "0x18294BB20")]
	public static IUniTaskAsyncEnumerable<bool> OnValueChangedAsAsyncEnumerable(this Toggle toggle)
	{
		return null;
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x294B960", Offset = "0x2949F60", VA = "0x18294B960")]
	public static IUniTaskAsyncEnumerable<bool> OnValueChangedAsAsyncEnumerable(this Toggle toggle, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x294A230", Offset = "0x2948830", VA = "0x18294A230")]
	public static IAsyncValueChangedEventHandler<float> GetAsyncValueChangedEventHandler(this Scrollbar scrollbar)
	{
		return null;
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x294A6F0", Offset = "0x2948CF0", VA = "0x18294A6F0")]
	public static IAsyncValueChangedEventHandler<float> GetAsyncValueChangedEventHandler(this Scrollbar scrollbar, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x294C370", Offset = "0x294A970", VA = "0x18294C370")]
	public static UniTask<float> OnValueChangedAsync(this Scrollbar scrollbar)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x294C530", Offset = "0x294AB30", VA = "0x18294C530")]
	public static UniTask<float> OnValueChangedAsync(this Scrollbar scrollbar, CancellationToken cancellationToken)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x294BA80", Offset = "0x294A080", VA = "0x18294BA80")]
	public static IUniTaskAsyncEnumerable<float> OnValueChangedAsAsyncEnumerable(this Scrollbar scrollbar)
	{
		return null;
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x294B5E0", Offset = "0x2949BE0", VA = "0x18294B5E0")]
	public static IUniTaskAsyncEnumerable<float> OnValueChangedAsAsyncEnumerable(this Scrollbar scrollbar, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x294A5C0", Offset = "0x2948BC0", VA = "0x18294A5C0")]
	public static IAsyncValueChangedEventHandler<Vector2> GetAsyncValueChangedEventHandler(this ScrollRect scrollRect)
	{
		return null;
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x294A660", Offset = "0x2948C60", VA = "0x18294A660")]
	public static IAsyncValueChangedEventHandler<Vector2> GetAsyncValueChangedEventHandler(this ScrollRect scrollRect, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x294C0D0", Offset = "0x294A6D0", VA = "0x18294C0D0")]
	public static UniTask<Vector2> OnValueChangedAsync(this ScrollRect scrollRect)
	{
		return default(UniTask<Vector2>);
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x294BE50", Offset = "0x294A450", VA = "0x18294BE50")]
	public static UniTask<Vector2> OnValueChangedAsync(this ScrollRect scrollRect, CancellationToken cancellationToken)
	{
		return default(UniTask<Vector2>);
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x294B550", Offset = "0x2949B50", VA = "0x18294B550")]
	public static IUniTaskAsyncEnumerable<Vector2> OnValueChangedAsAsyncEnumerable(this ScrollRect scrollRect)
	{
		return null;
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x294B7A0", Offset = "0x2949DA0", VA = "0x18294B7A0")]
	public static IUniTaskAsyncEnumerable<Vector2> OnValueChangedAsAsyncEnumerable(this ScrollRect scrollRect, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x294A370", Offset = "0x2948970", VA = "0x18294A370")]
	public static IAsyncValueChangedEventHandler<float> GetAsyncValueChangedEventHandler(this Slider slider)
	{
		return null;
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x294A410", Offset = "0x2948A10", VA = "0x18294A410")]
	public static IAsyncValueChangedEventHandler<float> GetAsyncValueChangedEventHandler(this Slider slider, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x294C450", Offset = "0x294AA50", VA = "0x18294C450")]
	public static UniTask<float> OnValueChangedAsync(this Slider slider)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x294BCA0", Offset = "0x294A2A0", VA = "0x18294BCA0")]
	public static UniTask<float> OnValueChangedAsync(this Slider slider, CancellationToken cancellationToken)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x294B4B0", Offset = "0x2949AB0", VA = "0x18294B4B0")]
	public static IUniTaskAsyncEnumerable<float> OnValueChangedAsAsyncEnumerable(this Slider slider)
	{
		return null;
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x294B830", Offset = "0x2949E30", VA = "0x18294B830")]
	public static IUniTaskAsyncEnumerable<float> OnValueChangedAsAsyncEnumerable(this Slider slider, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x2949F50", Offset = "0x2948550", VA = "0x182949F50")]
	public static IAsyncEndEditEventHandler<string> GetAsyncEndEditEventHandler(this InputField inputField)
	{
		return null;
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x2949FF0", Offset = "0x29485F0", VA = "0x182949FF0")]
	public static IAsyncEndEditEventHandler<string> GetAsyncEndEditEventHandler(this InputField inputField, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x294B240", Offset = "0x2949840", VA = "0x18294B240")]
	public static UniTask<string> OnEndEditAsync(this InputField inputField)
	{
		return default(UniTask<string>);
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x294B160", Offset = "0x2949760", VA = "0x18294B160")]
	public static UniTask<string> OnEndEditAsync(this InputField inputField, CancellationToken cancellationToken)
	{
		return default(UniTask<string>);
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x294B0C0", Offset = "0x29496C0", VA = "0x18294B0C0")]
	public static IUniTaskAsyncEnumerable<string> OnEndEditAsAsyncEnumerable(this InputField inputField)
	{
		return null;
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x294B030", Offset = "0x2949630", VA = "0x18294B030")]
	public static IUniTaskAsyncEnumerable<string> OnEndEditAsAsyncEnumerable(this InputField inputField, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x294A0F0", Offset = "0x29486F0", VA = "0x18294A0F0")]
	public static IAsyncValueChangedEventHandler<string> GetAsyncValueChangedEventHandler(this InputField inputField)
	{
		return null;
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x294A4A0", Offset = "0x2948AA0", VA = "0x18294A4A0")]
	public static IAsyncValueChangedEventHandler<string> GetAsyncValueChangedEventHandler(this InputField inputField, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x294C280", Offset = "0x294A880", VA = "0x18294C280")]
	public static UniTask<string> OnValueChangedAsync(this InputField inputField)
	{
		return default(UniTask<string>);
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x294BFF0", Offset = "0x294A5F0", VA = "0x18294BFF0")]
	public static UniTask<string> OnValueChangedAsync(this InputField inputField, CancellationToken cancellationToken)
	{
		return default(UniTask<string>);
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x294B8C0", Offset = "0x2949EC0", VA = "0x18294B8C0")]
	public static IUniTaskAsyncEnumerable<string> OnValueChangedAsAsyncEnumerable(this InputField inputField)
	{
		return null;
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x294B710", Offset = "0x2949D10", VA = "0x18294B710")]
	public static IUniTaskAsyncEnumerable<string> OnValueChangedAsAsyncEnumerable(this InputField inputField, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x294A2D0", Offset = "0x29488D0", VA = "0x18294A2D0")]
	public static IAsyncValueChangedEventHandler<int> GetAsyncValueChangedEventHandler(this Dropdown dropdown)
	{
		return null;
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x294A530", Offset = "0x2948B30", VA = "0x18294A530")]
	public static IAsyncValueChangedEventHandler<int> GetAsyncValueChangedEventHandler(this Dropdown dropdown, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x294BD70", Offset = "0x294A370", VA = "0x18294BD70")]
	public static UniTask<int> OnValueChangedAsync(this Dropdown dropdown)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x294C1B0", Offset = "0x294A7B0", VA = "0x18294C1B0")]
	public static UniTask<int> OnValueChangedAsync(this Dropdown dropdown, CancellationToken cancellationToken)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x294B670", Offset = "0x2949C70", VA = "0x18294B670")]
	public static IUniTaskAsyncEnumerable<int> OnValueChangedAsAsyncEnumerable(this Dropdown dropdown)
	{
		return null;
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x294B9F0", Offset = "0x2949FF0", VA = "0x18294B9F0")]
	public static IUniTaskAsyncEnumerable<int> OnValueChangedAsAsyncEnumerable(this Dropdown dropdown, CancellationToken cancellationToken)
	{
		return null;
	}
}
