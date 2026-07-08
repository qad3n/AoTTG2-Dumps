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

[Token(Token = "0x2000157")]
public static class UnityAsyncExtensions
{
	[Token(Token = "0x2000158")]
	public struct AssetBundleRequestAllAssetsAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000552")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private AssetBundleRequest asyncOperation;

		[Token(Token = "0x4000553")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000058")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000847")]
			[Address(RVA = "0x46D87C0", Offset = "0x46D87C0", VA = "0x46D87C0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000845")]
		[Address(RVA = "0x46D32B0", Offset = "0x46D32B0", VA = "0x46D32B0")]
		public AssetBundleRequestAllAssetsAwaiter(AssetBundleRequest asyncOperation)
		{
		}

		[Token(Token = "0x6000846")]
		[Address(RVA = "0x46D87B0", Offset = "0x46D87B0", VA = "0x46D87B0")]
		public AssetBundleRequestAllAssetsAwaiter GetAwaiter()
		{
			return default(AssetBundleRequestAllAssetsAwaiter);
		}

		[Token(Token = "0x6000848")]
		[Address(RVA = "0x46D87E0", Offset = "0x46D87E0", VA = "0x46D87E0")]
		public UnityEngine.Object[] GetResult()
		{
			return null;
		}

		[Token(Token = "0x6000849")]
		[Address(RVA = "0x46D8850", Offset = "0x46D8850", VA = "0x46D8850", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600084A")]
		[Address(RVA = "0x46D8860", Offset = "0x46D8860", VA = "0x46D8860", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x2000159")]
	private sealed class AssetBundleRequestAllAssetsConfiguredSource : IUniTaskSource<UnityEngine.Object[]>, IUniTaskSource, IValueTaskSource, IValueTaskSource<UnityEngine.Object[]>, IPlayerLoopItem, ITaskPoolNode<AssetBundleRequestAllAssetsConfiguredSource>
	{
		[Token(Token = "0x4000554")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<AssetBundleRequestAllAssetsConfiguredSource> pool;

		[Token(Token = "0x4000555")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private AssetBundleRequestAllAssetsConfiguredSource nextNode;

		[Token(Token = "0x4000556")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private AssetBundleRequest asyncOperation;

		[Token(Token = "0x4000557")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x4000558")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000559")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400055A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x400055B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x400055C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<UnityEngine.Object[]> core;

		[Token(Token = "0x400055D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000059")]
		public unsafe ref AssetBundleRequestAllAssetsConfiguredSource NextNode
		{
			[Token(Token = "0x600084B")]
			[Address(RVA = "0x46D8950", Offset = "0x46D8950", VA = "0x46D8950", Slot = "24")]
			get
			{
				return ref *(AssetBundleRequestAllAssetsConfiguredSource*)null;
			}
		}

		[Token(Token = "0x600084C")]
		[Address(RVA = "0x46D8960", Offset = "0x46D8960", VA = "0x46D8960")]
		static AssetBundleRequestAllAssetsConfiguredSource()
		{
		}

		[Token(Token = "0x600084D")]
		[Address(RVA = "0x46D8A60", Offset = "0x46D8A60", VA = "0x46D8A60")]
		private AssetBundleRequestAllAssetsConfiguredSource()
		{
		}

		[Token(Token = "0x600084E")]
		[Address(RVA = "0x46D3540", Offset = "0x46D3540", VA = "0x46D3540")]
		public static IUniTaskSource<UnityEngine.Object[]> Create(AssetBundleRequest asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600084F")]
		[Address(RVA = "0x46D8AE0", Offset = "0x46D8AE0", VA = "0x46D8AE0", Slot = "22")]
		public UnityEngine.Object[] GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x6000850")]
		[Address(RVA = "0x46D8C20", Offset = "0x46D8C20", VA = "0x46D8C20", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000851")]
		[Address(RVA = "0x46D8C30", Offset = "0x46D8C30", VA = "0x46D8C30", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000852")]
		[Address(RVA = "0x46D8C80", Offset = "0x46D8C80", VA = "0x46D8C80", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000853")]
		[Address(RVA = "0x46D8D30", Offset = "0x46D8D30", VA = "0x46D8D30", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000854")]
		[Address(RVA = "0x46D8D90", Offset = "0x46D8D90", VA = "0x46D8D90", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000855")]
		[Address(RVA = "0x46D8F30", Offset = "0x46D8F30", VA = "0x46D8F30")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x6000856")]
		[Address(RVA = "0x46D9000", Offset = "0x46D9000", VA = "0x46D9000")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x200015B")]
	private sealed class AsyncGPUReadbackRequestAwaiterConfiguredSource : IUniTaskSource<AsyncGPUReadbackRequest>, IUniTaskSource, IValueTaskSource, IValueTaskSource<AsyncGPUReadbackRequest>, IPlayerLoopItem, ITaskPoolNode<AsyncGPUReadbackRequestAwaiterConfiguredSource>
	{
		[Token(Token = "0x4000560")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<AsyncGPUReadbackRequestAwaiterConfiguredSource> pool;

		[Token(Token = "0x4000561")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private AsyncGPUReadbackRequestAwaiterConfiguredSource nextNode;

		[Token(Token = "0x4000562")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private AsyncGPUReadbackRequest asyncOperation;

		[Token(Token = "0x4000563")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000564")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000565")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x4000566")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<AsyncGPUReadbackRequest> core;

		[Token(Token = "0x1700005A")]
		public unsafe ref AsyncGPUReadbackRequestAwaiterConfiguredSource NextNode
		{
			[Token(Token = "0x600085B")]
			[Address(RVA = "0x46D9230", Offset = "0x46D9230", VA = "0x46D9230", Slot = "24")]
			get
			{
				return ref *(AsyncGPUReadbackRequestAwaiterConfiguredSource*)null;
			}
		}

		[Token(Token = "0x600085C")]
		[Address(RVA = "0x46D9240", Offset = "0x46D9240", VA = "0x46D9240")]
		static AsyncGPUReadbackRequestAwaiterConfiguredSource()
		{
		}

		[Token(Token = "0x600085D")]
		[Address(RVA = "0x46D9340", Offset = "0x46D9340", VA = "0x46D9340")]
		private AsyncGPUReadbackRequestAwaiterConfiguredSource()
		{
		}

		[Token(Token = "0x600085E")]
		[Address(RVA = "0x46D3BF0", Offset = "0x46D3BF0", VA = "0x46D3BF0")]
		public static IUniTaskSource<AsyncGPUReadbackRequest> Create(AsyncGPUReadbackRequest asyncOperation, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600085F")]
		[Address(RVA = "0x46D9350", Offset = "0x46D9350", VA = "0x46D9350", Slot = "22")]
		public AsyncGPUReadbackRequest GetResult(short token)
		{
			return default(AsyncGPUReadbackRequest);
		}

		[Token(Token = "0x6000860")]
		[Address(RVA = "0x46D9490", Offset = "0x46D9490", VA = "0x46D9490", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000861")]
		[Address(RVA = "0x46D94A0", Offset = "0x46D94A0", VA = "0x46D94A0", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000862")]
		[Address(RVA = "0x46D94F0", Offset = "0x46D94F0", VA = "0x46D94F0", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000863")]
		[Address(RVA = "0x46D95A0", Offset = "0x46D95A0", VA = "0x46D95A0", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000864")]
		[Address(RVA = "0x46D9600", Offset = "0x46D9600", VA = "0x46D9600", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000865")]
		[Address(RVA = "0x46D9740", Offset = "0x46D9740", VA = "0x46D9740")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200015D")]
	private sealed class JobHandlePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem
	{
		[Token(Token = "0x4000569")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private JobHandle jobHandle;

		[Token(Token = "0x400056A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x600086A")]
		[Address(RVA = "0x46D4190", Offset = "0x46D4190", VA = "0x46D4190")]
		public static JobHandlePromise Create(JobHandle jobHandle, out short token)
		{
			return null;
		}

		[Token(Token = "0x600086B")]
		[Address(RVA = "0x46D9960", Offset = "0x46D9960", VA = "0x46D9960", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600086C")]
		[Address(RVA = "0x46D99B0", Offset = "0x46D99B0", VA = "0x46D99B0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600086D")]
		[Address(RVA = "0x46D9A00", Offset = "0x46D9A00", VA = "0x46D9A00", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600086E")]
		[Address(RVA = "0x46D9AB0", Offset = "0x46D9AB0", VA = "0x46D9AB0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600086F")]
		[Address(RVA = "0x46D9B10", Offset = "0x46D9B10", VA = "0x46D9B10", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000870")]
		[Address(RVA = "0x46D9950", Offset = "0x46D9950", VA = "0x46D9950")]
		public JobHandlePromise()
		{
		}
	}

	[Token(Token = "0x200015E")]
	public struct AsyncOperationAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x400056B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private AsyncOperation asyncOperation;

		[Token(Token = "0x400056C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x1700005B")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000872")]
			[Address(RVA = "0x46D9C80", Offset = "0x46D9C80", VA = "0x46D9C80")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000871")]
		[Address(RVA = "0x46D9C50", Offset = "0x46D9C50", VA = "0x46D9C50")]
		public AsyncOperationAwaiter(AsyncOperation asyncOperation)
		{
		}

		[Token(Token = "0x6000873")]
		[Address(RVA = "0x46D9CA0", Offset = "0x46D9CA0", VA = "0x46D9CA0")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000874")]
		[Address(RVA = "0x46D9D00", Offset = "0x46D9D00", VA = "0x46D9D00", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000875")]
		[Address(RVA = "0x46D9D10", Offset = "0x46D9D10", VA = "0x46D9D10", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x200015F")]
	private sealed class AsyncOperationConfiguredSource : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<AsyncOperationConfiguredSource>
	{
		[Token(Token = "0x400056D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<AsyncOperationConfiguredSource> pool;

		[Token(Token = "0x400056E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private AsyncOperationConfiguredSource nextNode;

		[Token(Token = "0x400056F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private AsyncOperation asyncOperation;

		[Token(Token = "0x4000570")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x4000571")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000572")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000573")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x4000574")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x4000575")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x4000576")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x1700005C")]
		public unsafe ref AsyncOperationConfiguredSource NextNode
		{
			[Token(Token = "0x6000876")]
			[Address(RVA = "0x46D9E00", Offset = "0x46D9E00", VA = "0x46D9E00", Slot = "15")]
			get
			{
				return ref *(AsyncOperationConfiguredSource*)null;
			}
		}

		[Token(Token = "0x6000877")]
		[Address(RVA = "0x46D9E10", Offset = "0x46D9E10", VA = "0x46D9E10")]
		static AsyncOperationConfiguredSource()
		{
		}

		[Token(Token = "0x6000878")]
		[Address(RVA = "0x46D9F10", Offset = "0x46D9F10", VA = "0x46D9F10")]
		private AsyncOperationConfiguredSource()
		{
		}

		[Token(Token = "0x6000879")]
		[Address(RVA = "0x46D44F0", Offset = "0x46D44F0", VA = "0x46D44F0")]
		public static IUniTaskSource Create(AsyncOperation asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600087A")]
		[Address(RVA = "0x46D9F90", Offset = "0x46D9F90", VA = "0x46D9F90", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600087B")]
		[Address(RVA = "0x46DA0B0", Offset = "0x46DA0B0", VA = "0x46DA0B0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600087C")]
		[Address(RVA = "0x46DA100", Offset = "0x46DA100", VA = "0x46DA100", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600087D")]
		[Address(RVA = "0x46DA1B0", Offset = "0x46DA1B0", VA = "0x46DA1B0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600087E")]
		[Address(RVA = "0x46DA210", Offset = "0x46DA210", VA = "0x46DA210", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600087F")]
		[Address(RVA = "0x46DA3C0", Offset = "0x46DA3C0", VA = "0x46DA3C0")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x6000880")]
		[Address(RVA = "0x46DA4B0", Offset = "0x46DA4B0", VA = "0x46DA4B0")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x2000161")]
	public struct ResourceRequestAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000579")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ResourceRequest asyncOperation;

		[Token(Token = "0x400057A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x1700005D")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000886")]
			[Address(RVA = "0x46DA700", Offset = "0x46DA700", VA = "0x46DA700")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000885")]
		[Address(RVA = "0x46D4990", Offset = "0x46D4990", VA = "0x46D4990")]
		public ResourceRequestAwaiter(ResourceRequest asyncOperation)
		{
		}

		[Token(Token = "0x6000887")]
		[Address(RVA = "0x46DA720", Offset = "0x46DA720", VA = "0x46DA720")]
		public UnityEngine.Object GetResult()
		{
			return null;
		}

		[Token(Token = "0x6000888")]
		[Address(RVA = "0x46DA790", Offset = "0x46DA790", VA = "0x46DA790", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000889")]
		[Address(RVA = "0x46DA7A0", Offset = "0x46DA7A0", VA = "0x46DA7A0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x2000162")]
	private sealed class ResourceRequestConfiguredSource : IUniTaskSource<UnityEngine.Object>, IUniTaskSource, IValueTaskSource, IValueTaskSource<UnityEngine.Object>, IPlayerLoopItem, ITaskPoolNode<ResourceRequestConfiguredSource>
	{
		[Token(Token = "0x400057B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<ResourceRequestConfiguredSource> pool;

		[Token(Token = "0x400057C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private ResourceRequestConfiguredSource nextNode;

		[Token(Token = "0x400057D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private ResourceRequest asyncOperation;

		[Token(Token = "0x400057E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x400057F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000580")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000581")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x4000582")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x4000583")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<UnityEngine.Object> core;

		[Token(Token = "0x4000584")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x1700005E")]
		public unsafe ref ResourceRequestConfiguredSource NextNode
		{
			[Token(Token = "0x600088A")]
			[Address(RVA = "0x46DA890", Offset = "0x46DA890", VA = "0x46DA890", Slot = "24")]
			get
			{
				return ref *(ResourceRequestConfiguredSource*)null;
			}
		}

		[Token(Token = "0x600088B")]
		[Address(RVA = "0x46DA8A0", Offset = "0x46DA8A0", VA = "0x46DA8A0")]
		static ResourceRequestConfiguredSource()
		{
		}

		[Token(Token = "0x600088C")]
		[Address(RVA = "0x46DA9A0", Offset = "0x46DA9A0", VA = "0x46DA9A0")]
		private ResourceRequestConfiguredSource()
		{
		}

		[Token(Token = "0x600088D")]
		[Address(RVA = "0x46D4C20", Offset = "0x46D4C20", VA = "0x46D4C20")]
		public static IUniTaskSource<UnityEngine.Object> Create(ResourceRequest asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600088E")]
		[Address(RVA = "0x46DAA20", Offset = "0x46DAA20", VA = "0x46DAA20", Slot = "22")]
		public UnityEngine.Object GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x600088F")]
		[Address(RVA = "0x46DAB60", Offset = "0x46DAB60", VA = "0x46DAB60", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000890")]
		[Address(RVA = "0x46DAB70", Offset = "0x46DAB70", VA = "0x46DAB70", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000891")]
		[Address(RVA = "0x46DABC0", Offset = "0x46DABC0", VA = "0x46DABC0", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000892")]
		[Address(RVA = "0x46DAC70", Offset = "0x46DAC70", VA = "0x46DAC70", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000893")]
		[Address(RVA = "0x46DACD0", Offset = "0x46DACD0", VA = "0x46DACD0", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000894")]
		[Address(RVA = "0x46DAE70", Offset = "0x46DAE70", VA = "0x46DAE70")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x6000895")]
		[Address(RVA = "0x46DAF60", Offset = "0x46DAF60", VA = "0x46DAF60")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x2000164")]
	public struct AssetBundleRequestAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000587")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private AssetBundleRequest asyncOperation;

		[Token(Token = "0x4000588")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x1700005F")]
		public bool IsCompleted
		{
			[Token(Token = "0x600089B")]
			[Address(RVA = "0x46DB190", Offset = "0x46DB190", VA = "0x46DB190")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600089A")]
		[Address(RVA = "0x46D50D0", Offset = "0x46D50D0", VA = "0x46D50D0")]
		public AssetBundleRequestAwaiter(AssetBundleRequest asyncOperation)
		{
		}

		[Token(Token = "0x600089C")]
		[Address(RVA = "0x46DB1B0", Offset = "0x46DB1B0", VA = "0x46DB1B0")]
		public UnityEngine.Object GetResult()
		{
			return null;
		}

		[Token(Token = "0x600089D")]
		[Address(RVA = "0x46DB220", Offset = "0x46DB220", VA = "0x46DB220", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600089E")]
		[Address(RVA = "0x46DB230", Offset = "0x46DB230", VA = "0x46DB230", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x2000165")]
	private sealed class AssetBundleRequestConfiguredSource : IUniTaskSource<UnityEngine.Object>, IUniTaskSource, IValueTaskSource, IValueTaskSource<UnityEngine.Object>, IPlayerLoopItem, ITaskPoolNode<AssetBundleRequestConfiguredSource>
	{
		[Token(Token = "0x4000589")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<AssetBundleRequestConfiguredSource> pool;

		[Token(Token = "0x400058A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private AssetBundleRequestConfiguredSource nextNode;

		[Token(Token = "0x400058B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private AssetBundleRequest asyncOperation;

		[Token(Token = "0x400058C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x400058D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400058E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400058F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x4000590")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x4000591")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<UnityEngine.Object> core;

		[Token(Token = "0x4000592")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000060")]
		public unsafe ref AssetBundleRequestConfiguredSource NextNode
		{
			[Token(Token = "0x600089F")]
			[Address(RVA = "0x46DB320", Offset = "0x46DB320", VA = "0x46DB320", Slot = "24")]
			get
			{
				return ref *(AssetBundleRequestConfiguredSource*)null;
			}
		}

		[Token(Token = "0x60008A0")]
		[Address(RVA = "0x46DB330", Offset = "0x46DB330", VA = "0x46DB330")]
		static AssetBundleRequestConfiguredSource()
		{
		}

		[Token(Token = "0x60008A1")]
		[Address(RVA = "0x46DB430", Offset = "0x46DB430", VA = "0x46DB430")]
		private AssetBundleRequestConfiguredSource()
		{
		}

		[Token(Token = "0x60008A2")]
		[Address(RVA = "0x46D5360", Offset = "0x46D5360", VA = "0x46D5360")]
		public static IUniTaskSource<UnityEngine.Object> Create(AssetBundleRequest asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60008A3")]
		[Address(RVA = "0x46DB4B0", Offset = "0x46DB4B0", VA = "0x46DB4B0", Slot = "22")]
		public UnityEngine.Object GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x60008A4")]
		[Address(RVA = "0x46DB5F0", Offset = "0x46DB5F0", VA = "0x46DB5F0", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60008A5")]
		[Address(RVA = "0x46DB600", Offset = "0x46DB600", VA = "0x46DB600", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008A6")]
		[Address(RVA = "0x46DB650", Offset = "0x46DB650", VA = "0x46DB650", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008A7")]
		[Address(RVA = "0x46DB700", Offset = "0x46DB700", VA = "0x46DB700", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60008A8")]
		[Address(RVA = "0x46DB760", Offset = "0x46DB760", VA = "0x46DB760", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008A9")]
		[Address(RVA = "0x46DB900", Offset = "0x46DB900", VA = "0x46DB900")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60008AA")]
		[Address(RVA = "0x46DB9F0", Offset = "0x46DB9F0", VA = "0x46DB9F0")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x2000167")]
	public struct AssetBundleCreateRequestAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000595")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private AssetBundleCreateRequest asyncOperation;

		[Token(Token = "0x4000596")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000061")]
		public bool IsCompleted
		{
			[Token(Token = "0x60008B0")]
			[Address(RVA = "0x46DBC20", Offset = "0x46DBC20", VA = "0x46DBC20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60008AF")]
		[Address(RVA = "0x46D5810", Offset = "0x46D5810", VA = "0x46D5810")]
		public AssetBundleCreateRequestAwaiter(AssetBundleCreateRequest asyncOperation)
		{
		}

		[Token(Token = "0x60008B1")]
		[Address(RVA = "0x46DBC40", Offset = "0x46DBC40", VA = "0x46DBC40")]
		public AssetBundle GetResult()
		{
			return null;
		}

		[Token(Token = "0x60008B2")]
		[Address(RVA = "0x46DBCB0", Offset = "0x46DBCB0", VA = "0x46DBCB0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60008B3")]
		[Address(RVA = "0x46DBCC0", Offset = "0x46DBCC0", VA = "0x46DBCC0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x2000168")]
	private sealed class AssetBundleCreateRequestConfiguredSource : IUniTaskSource<AssetBundle>, IUniTaskSource, IValueTaskSource, IValueTaskSource<AssetBundle>, IPlayerLoopItem, ITaskPoolNode<AssetBundleCreateRequestConfiguredSource>
	{
		[Token(Token = "0x4000597")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<AssetBundleCreateRequestConfiguredSource> pool;

		[Token(Token = "0x4000598")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private AssetBundleCreateRequestConfiguredSource nextNode;

		[Token(Token = "0x4000599")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private AssetBundleCreateRequest asyncOperation;

		[Token(Token = "0x400059A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x400059B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400059C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400059D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x400059E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x400059F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<AssetBundle> core;

		[Token(Token = "0x40005A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000062")]
		public unsafe ref AssetBundleCreateRequestConfiguredSource NextNode
		{
			[Token(Token = "0x60008B4")]
			[Address(RVA = "0x46DBDB0", Offset = "0x46DBDB0", VA = "0x46DBDB0", Slot = "24")]
			get
			{
				return ref *(AssetBundleCreateRequestConfiguredSource*)null;
			}
		}

		[Token(Token = "0x60008B5")]
		[Address(RVA = "0x46DBDC0", Offset = "0x46DBDC0", VA = "0x46DBDC0")]
		static AssetBundleCreateRequestConfiguredSource()
		{
		}

		[Token(Token = "0x60008B6")]
		[Address(RVA = "0x46DBEC0", Offset = "0x46DBEC0", VA = "0x46DBEC0")]
		private AssetBundleCreateRequestConfiguredSource()
		{
		}

		[Token(Token = "0x60008B7")]
		[Address(RVA = "0x46D5AA0", Offset = "0x46D5AA0", VA = "0x46D5AA0")]
		public static IUniTaskSource<AssetBundle> Create(AssetBundleCreateRequest asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60008B8")]
		[Address(RVA = "0x46DBF40", Offset = "0x46DBF40", VA = "0x46DBF40", Slot = "22")]
		public AssetBundle GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x60008B9")]
		[Address(RVA = "0x46DC080", Offset = "0x46DC080", VA = "0x46DC080", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60008BA")]
		[Address(RVA = "0x46DC090", Offset = "0x46DC090", VA = "0x46DC090", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008BB")]
		[Address(RVA = "0x46DC0E0", Offset = "0x46DC0E0", VA = "0x46DC0E0", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008BC")]
		[Address(RVA = "0x46DC190", Offset = "0x46DC190", VA = "0x46DC190", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60008BD")]
		[Address(RVA = "0x46DC1F0", Offset = "0x46DC1F0", VA = "0x46DC1F0", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008BE")]
		[Address(RVA = "0x46DC390", Offset = "0x46DC390", VA = "0x46DC390")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60008BF")]
		[Address(RVA = "0x46DC480", Offset = "0x46DC480", VA = "0x46DC480")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x200016A")]
	public struct UnityWebRequestAsyncOperationAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x40005A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UnityWebRequestAsyncOperation asyncOperation;

		[Token(Token = "0x40005A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000063")]
		public bool IsCompleted
		{
			[Token(Token = "0x60008C5")]
			[Address(RVA = "0x46DC6B0", Offset = "0x46DC6B0", VA = "0x46DC6B0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60008C4")]
		[Address(RVA = "0x46D5F50", Offset = "0x46D5F50", VA = "0x46D5F50")]
		public UnityWebRequestAsyncOperationAwaiter(UnityWebRequestAsyncOperation asyncOperation)
		{
		}

		[Token(Token = "0x60008C6")]
		[Address(RVA = "0x46DC6D0", Offset = "0x46DC6D0", VA = "0x46DC6D0")]
		public UnityWebRequest GetResult()
		{
			return null;
		}

		[Token(Token = "0x60008C7")]
		[Address(RVA = "0x46DC790", Offset = "0x46DC790", VA = "0x46DC790", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60008C8")]
		[Address(RVA = "0x46DC7A0", Offset = "0x46DC7A0", VA = "0x46DC7A0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x200016B")]
	private sealed class UnityWebRequestAsyncOperationConfiguredSource : IUniTaskSource<UnityWebRequest>, IUniTaskSource, IValueTaskSource, IValueTaskSource<UnityWebRequest>, IPlayerLoopItem, ITaskPoolNode<UnityWebRequestAsyncOperationConfiguredSource>
	{
		[Token(Token = "0x40005A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<UnityWebRequestAsyncOperationConfiguredSource> pool;

		[Token(Token = "0x40005A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private UnityWebRequestAsyncOperationConfiguredSource nextNode;

		[Token(Token = "0x40005A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UnityWebRequestAsyncOperation asyncOperation;

		[Token(Token = "0x40005A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x40005A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x40005AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x40005AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x40005AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x40005AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<UnityWebRequest> core;

		[Token(Token = "0x40005AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000064")]
		public unsafe ref UnityWebRequestAsyncOperationConfiguredSource NextNode
		{
			[Token(Token = "0x60008C9")]
			[Address(RVA = "0x46DC890", Offset = "0x46DC890", VA = "0x46DC890", Slot = "24")]
			get
			{
				return ref *(UnityWebRequestAsyncOperationConfiguredSource*)null;
			}
		}

		[Token(Token = "0x60008CA")]
		[Address(RVA = "0x46DC8A0", Offset = "0x46DC8A0", VA = "0x46DC8A0")]
		static UnityWebRequestAsyncOperationConfiguredSource()
		{
		}

		[Token(Token = "0x60008CB")]
		[Address(RVA = "0x46DC9A0", Offset = "0x46DC9A0", VA = "0x46DC9A0")]
		private UnityWebRequestAsyncOperationConfiguredSource()
		{
		}

		[Token(Token = "0x60008CC")]
		[Address(RVA = "0x46D63E0", Offset = "0x46D63E0", VA = "0x46D63E0")]
		public static IUniTaskSource<UnityWebRequest> Create(UnityWebRequestAsyncOperation asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60008CD")]
		[Address(RVA = "0x46DCA20", Offset = "0x46DCA20", VA = "0x46DCA20", Slot = "22")]
		public UnityWebRequest GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x60008CE")]
		[Address(RVA = "0x46DCB60", Offset = "0x46DCB60", VA = "0x46DCB60", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60008CF")]
		[Address(RVA = "0x46DCB70", Offset = "0x46DCB70", VA = "0x46DCB70", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008D0")]
		[Address(RVA = "0x46DCBC0", Offset = "0x46DCBC0", VA = "0x46DCBC0", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008D1")]
		[Address(RVA = "0x46DCC70", Offset = "0x46DCC70", VA = "0x46DCC70", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60008D2")]
		[Address(RVA = "0x46DCCD0", Offset = "0x46DCCD0", VA = "0x46DCCD0", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008D3")]
		[Address(RVA = "0x46DCEF0", Offset = "0x46DCEF0", VA = "0x46DCEF0")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60008D4")]
		[Address(RVA = "0x46DCFE0", Offset = "0x46DCFE0", VA = "0x46DCFE0")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200016D")]
	[CompilerGenerated]
	private struct _003CWaitAsync_003Ed__11 : IAsyncStateMachine
	{
		[Token(Token = "0x40005B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40005B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40005B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public PlayerLoopTiming waitTiming;

		[Token(Token = "0x40005B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JobHandle jobHandle;

		[Token(Token = "0x40005B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40005B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private YieldAwaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60008D9")]
		[Address(RVA = "0x46DD2A0", Offset = "0x46DD2A0", VA = "0x46DD2A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60008DA")]
		[Address(RVA = "0x46DD5E0", Offset = "0x46DD5E0", VA = "0x46DD5E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x46D3220", Offset = "0x46D3220", VA = "0x46D3220")]
	public static AssetBundleRequestAllAssetsAwaiter AwaitForAllAssets(this AssetBundleRequest asyncOperation)
	{
		return default(AssetBundleRequestAllAssetsAwaiter);
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x46D32E0", Offset = "0x46D32E0", VA = "0x46D32E0")]
	public static UniTask<UnityEngine.Object[]> AwaitForAllAssets(this AssetBundleRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityEngine.Object[]>);
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x46D3500", Offset = "0x46D3500", VA = "0x46D3500")]
	public static UniTask<UnityEngine.Object[]> AwaitForAllAssets(this AssetBundleRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityEngine.Object[]>);
	}

	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x46D3320", Offset = "0x46D3320", VA = "0x46D3320")]
	public static UniTask<UnityEngine.Object[]> AwaitForAllAssets(this AssetBundleRequest asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityEngine.Object[]>);
	}

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x46D3960", Offset = "0x46D3960", VA = "0x46D3960")]
	public static UniTask<AsyncGPUReadbackRequest>.Awaiter GetAwaiter(this AsyncGPUReadbackRequest asyncOperation)
	{
		return default(UniTask<AsyncGPUReadbackRequest>.Awaiter);
	}

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x46D3B70", Offset = "0x46D3B70", VA = "0x46D3B70")]
	public static UniTask<AsyncGPUReadbackRequest> WithCancellation(this AsyncGPUReadbackRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<AsyncGPUReadbackRequest>);
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x46D3BB0", Offset = "0x46D3BB0", VA = "0x46D3BB0")]
	public static UniTask<AsyncGPUReadbackRequest> WithCancellation(this AsyncGPUReadbackRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<AsyncGPUReadbackRequest>);
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x46D3A30", Offset = "0x46D3A30", VA = "0x46D3A30")]
	public static UniTask<AsyncGPUReadbackRequest> ToUniTask(this AsyncGPUReadbackRequest asyncOperation, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<AsyncGPUReadbackRequest>);
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x46D3F30", Offset = "0x46D3F30", VA = "0x46D3F30")]
	[AsyncStateMachine(typeof(_003CWaitAsync_003Ed__11))]
	public static UniTask WaitAsync(this JobHandle jobHandle, PlayerLoopTiming waitTiming, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x46D3FF0", Offset = "0x46D3FF0", VA = "0x46D3FF0")]
	public static UniTask.Awaiter GetAwaiter(this JobHandle jobHandle)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x46D4210", Offset = "0x46D4210", VA = "0x46D4210")]
	public static UniTask ToUniTask(this JobHandle jobHandle, PlayerLoopTiming waitTiming)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x46D42F0", Offset = "0x46D42F0", VA = "0x46D42F0")]
	public static UniTask StartAsyncCoroutine(this MonoBehaviour monoBehaviour, Func<CancellationToken, UniTask> asyncCoroutine)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x46D4320", Offset = "0x46D4320", VA = "0x46D4320")]
	public static UniTask WithCancellation(this AsyncOperation asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x46D44D0", Offset = "0x46D44D0", VA = "0x46D44D0")]
	public static UniTask WithCancellation(this AsyncOperation asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x46D4330", Offset = "0x46D4330", VA = "0x46D4330")]
	public static UniTask ToUniTask(this AsyncOperation asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x46D4900", Offset = "0x46D4900", VA = "0x46D4900")]
	public static ResourceRequestAwaiter GetAwaiter(this ResourceRequest asyncOperation)
	{
		return default(ResourceRequestAwaiter);
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x46D49C0", Offset = "0x46D49C0", VA = "0x46D49C0")]
	public static UniTask<UnityEngine.Object> WithCancellation(this ResourceRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x46D4BE0", Offset = "0x46D4BE0", VA = "0x46D4BE0")]
	public static UniTask<UnityEngine.Object> WithCancellation(this ResourceRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x46D4A00", Offset = "0x46D4A00", VA = "0x46D4A00")]
	public static UniTask<UnityEngine.Object> ToUniTask(this ResourceRequest asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x46D5040", Offset = "0x46D5040", VA = "0x46D5040")]
	public static AssetBundleRequestAwaiter GetAwaiter(this AssetBundleRequest asyncOperation)
	{
		return default(AssetBundleRequestAwaiter);
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x46D5100", Offset = "0x46D5100", VA = "0x46D5100")]
	public static UniTask<UnityEngine.Object> WithCancellation(this AssetBundleRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x46D5320", Offset = "0x46D5320", VA = "0x46D5320")]
	public static UniTask<UnityEngine.Object> WithCancellation(this AssetBundleRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x46D5140", Offset = "0x46D5140", VA = "0x46D5140")]
	public static UniTask<UnityEngine.Object> ToUniTask(this AssetBundleRequest asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x46D5780", Offset = "0x46D5780", VA = "0x46D5780")]
	public static AssetBundleCreateRequestAwaiter GetAwaiter(this AssetBundleCreateRequest asyncOperation)
	{
		return default(AssetBundleCreateRequestAwaiter);
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x46D5840", Offset = "0x46D5840", VA = "0x46D5840")]
	public static UniTask<AssetBundle> WithCancellation(this AssetBundleCreateRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<AssetBundle>);
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x46D5A60", Offset = "0x46D5A60", VA = "0x46D5A60")]
	public static UniTask<AssetBundle> WithCancellation(this AssetBundleCreateRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<AssetBundle>);
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x46D5880", Offset = "0x46D5880", VA = "0x46D5880")]
	public static UniTask<AssetBundle> ToUniTask(this AssetBundleCreateRequest asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<AssetBundle>);
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x46D5EC0", Offset = "0x46D5EC0", VA = "0x46D5EC0")]
	public static UnityWebRequestAsyncOperationAwaiter GetAwaiter(this UnityWebRequestAsyncOperation asyncOperation)
	{
		return default(UnityWebRequestAsyncOperationAwaiter);
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x46D5F80", Offset = "0x46D5F80", VA = "0x46D5F80")]
	public static UniTask<UnityWebRequest> WithCancellation(this UnityWebRequestAsyncOperation asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityWebRequest>);
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x46D6230", Offset = "0x46D6230", VA = "0x46D6230")]
	public static UniTask<UnityWebRequest> WithCancellation(this UnityWebRequestAsyncOperation asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityWebRequest>);
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x46D5FC0", Offset = "0x46D5FC0", VA = "0x46D5FC0")]
	public static UniTask<UnityWebRequest> ToUniTask(this UnityWebRequestAsyncOperation asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityWebRequest>);
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x46D6800", Offset = "0x46D6800", VA = "0x46D6800")]
	public static AsyncUnityEventHandler GetAsyncEventHandler(this UnityEvent unityEvent, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x46D6A40", Offset = "0x46D6A40", VA = "0x46D6A40")]
	public static UniTask OnInvokeAsync(this UnityEvent unityEvent, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x46D6B50", Offset = "0x46D6B50", VA = "0x46D6B50")]
	public static IUniTaskAsyncEnumerable<AsyncUnit> OnInvokeAsAsyncEnumerable(this UnityEvent unityEvent, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000812")]
	public static AsyncUnityEventHandler<T> GetAsyncEventHandler<T>(this UnityEvent<T> unityEvent, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000813")]
	public static UniTask<T> OnInvokeAsync<T>(this UnityEvent<T> unityEvent, CancellationToken cancellationToken)
	{
		return default(UniTask<T>);
	}

	[Token(Token = "0x6000814")]
	public static IUniTaskAsyncEnumerable<T> OnInvokeAsAsyncEnumerable<T>(this UnityEvent<T> unityEvent, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x46D6C00", Offset = "0x46D6C00", VA = "0x46D6C00")]
	public static IAsyncClickEventHandler GetAsyncClickEventHandler(this Button button)
	{
		return null;
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x46D6C70", Offset = "0x46D6C70", VA = "0x46D6C70")]
	public static IAsyncClickEventHandler GetAsyncClickEventHandler(this Button button, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x46D6CE0", Offset = "0x46D6CE0", VA = "0x46D6CE0")]
	public static UniTask OnClickAsync(this Button button)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x46D6D60", Offset = "0x46D6D60", VA = "0x46D6D60")]
	public static UniTask OnClickAsync(this Button button, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x46D6DD0", Offset = "0x46D6DD0", VA = "0x46D6DD0")]
	public static IUniTaskAsyncEnumerable<AsyncUnit> OnClickAsAsyncEnumerable(this Button button)
	{
		return null;
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x46D6E60", Offset = "0x46D6E60", VA = "0x46D6E60")]
	public static IUniTaskAsyncEnumerable<AsyncUnit> OnClickAsAsyncEnumerable(this Button button, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x46D6EE0", Offset = "0x46D6EE0", VA = "0x46D6EE0")]
	public static IAsyncValueChangedEventHandler<bool> GetAsyncValueChangedEventHandler(this Toggle toggle)
	{
		return null;
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x46D6F70", Offset = "0x46D6F70", VA = "0x46D6F70")]
	public static IAsyncValueChangedEventHandler<bool> GetAsyncValueChangedEventHandler(this Toggle toggle, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x46D6FF0", Offset = "0x46D6FF0", VA = "0x46D6FF0")]
	public static UniTask<bool> OnValueChangedAsync(this Toggle toggle)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x46D70A0", Offset = "0x46D70A0", VA = "0x46D70A0")]
	public static UniTask<bool> OnValueChangedAsync(this Toggle toggle, CancellationToken cancellationToken)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x46D7140", Offset = "0x46D7140", VA = "0x46D7140")]
	public static IUniTaskAsyncEnumerable<bool> OnValueChangedAsAsyncEnumerable(this Toggle toggle)
	{
		return null;
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x46D71D0", Offset = "0x46D71D0", VA = "0x46D71D0")]
	public static IUniTaskAsyncEnumerable<bool> OnValueChangedAsAsyncEnumerable(this Toggle toggle, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x46D7250", Offset = "0x46D7250", VA = "0x46D7250")]
	public static IAsyncValueChangedEventHandler<float> GetAsyncValueChangedEventHandler(this Scrollbar scrollbar)
	{
		return null;
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x46D72E0", Offset = "0x46D72E0", VA = "0x46D72E0")]
	public static IAsyncValueChangedEventHandler<float> GetAsyncValueChangedEventHandler(this Scrollbar scrollbar, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x46D7360", Offset = "0x46D7360", VA = "0x46D7360")]
	public static UniTask<float> OnValueChangedAsync(this Scrollbar scrollbar)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x46D7410", Offset = "0x46D7410", VA = "0x46D7410")]
	public static UniTask<float> OnValueChangedAsync(this Scrollbar scrollbar, CancellationToken cancellationToken)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x46D74B0", Offset = "0x46D74B0", VA = "0x46D74B0")]
	public static IUniTaskAsyncEnumerable<float> OnValueChangedAsAsyncEnumerable(this Scrollbar scrollbar)
	{
		return null;
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x46D7540", Offset = "0x46D7540", VA = "0x46D7540")]
	public static IUniTaskAsyncEnumerable<float> OnValueChangedAsAsyncEnumerable(this Scrollbar scrollbar, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x46D75C0", Offset = "0x46D75C0", VA = "0x46D75C0")]
	public static IAsyncValueChangedEventHandler<Vector2> GetAsyncValueChangedEventHandler(this ScrollRect scrollRect)
	{
		return null;
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x46D7640", Offset = "0x46D7640", VA = "0x46D7640")]
	public static IAsyncValueChangedEventHandler<Vector2> GetAsyncValueChangedEventHandler(this ScrollRect scrollRect, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x46D76C0", Offset = "0x46D76C0", VA = "0x46D76C0")]
	public static UniTask<Vector2> OnValueChangedAsync(this ScrollRect scrollRect)
	{
		return default(UniTask<Vector2>);
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x46D7790", Offset = "0x46D7790", VA = "0x46D7790")]
	public static UniTask<Vector2> OnValueChangedAsync(this ScrollRect scrollRect, CancellationToken cancellationToken)
	{
		return default(UniTask<Vector2>);
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x46D7850", Offset = "0x46D7850", VA = "0x46D7850")]
	public static IUniTaskAsyncEnumerable<Vector2> OnValueChangedAsAsyncEnumerable(this ScrollRect scrollRect)
	{
		return null;
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x46D78D0", Offset = "0x46D78D0", VA = "0x46D78D0")]
	public static IUniTaskAsyncEnumerable<Vector2> OnValueChangedAsAsyncEnumerable(this ScrollRect scrollRect, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x46D7950", Offset = "0x46D7950", VA = "0x46D7950")]
	public static IAsyncValueChangedEventHandler<float> GetAsyncValueChangedEventHandler(this Slider slider)
	{
		return null;
	}

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x46D79E0", Offset = "0x46D79E0", VA = "0x46D79E0")]
	public static IAsyncValueChangedEventHandler<float> GetAsyncValueChangedEventHandler(this Slider slider, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x46D7A60", Offset = "0x46D7A60", VA = "0x46D7A60")]
	public static UniTask<float> OnValueChangedAsync(this Slider slider)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x46D7B10", Offset = "0x46D7B10", VA = "0x46D7B10")]
	public static UniTask<float> OnValueChangedAsync(this Slider slider, CancellationToken cancellationToken)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x46D7BB0", Offset = "0x46D7BB0", VA = "0x46D7BB0")]
	public static IUniTaskAsyncEnumerable<float> OnValueChangedAsAsyncEnumerable(this Slider slider)
	{
		return null;
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x46D7C40", Offset = "0x46D7C40", VA = "0x46D7C40")]
	public static IUniTaskAsyncEnumerable<float> OnValueChangedAsAsyncEnumerable(this Slider slider, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x46D7CC0", Offset = "0x46D7CC0", VA = "0x46D7CC0")]
	public static IAsyncEndEditEventHandler<string> GetAsyncEndEditEventHandler(this InputField inputField)
	{
		return null;
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x46D7D50", Offset = "0x46D7D50", VA = "0x46D7D50")]
	public static IAsyncEndEditEventHandler<string> GetAsyncEndEditEventHandler(this InputField inputField, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x46D7DD0", Offset = "0x46D7DD0", VA = "0x46D7DD0")]
	public static UniTask<string> OnEndEditAsync(this InputField inputField)
	{
		return default(UniTask<string>);
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x46D7EA0", Offset = "0x46D7EA0", VA = "0x46D7EA0")]
	public static UniTask<string> OnEndEditAsync(this InputField inputField, CancellationToken cancellationToken)
	{
		return default(UniTask<string>);
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x46D7F70", Offset = "0x46D7F70", VA = "0x46D7F70")]
	public static IUniTaskAsyncEnumerable<string> OnEndEditAsAsyncEnumerable(this InputField inputField)
	{
		return null;
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x46D8000", Offset = "0x46D8000", VA = "0x46D8000")]
	public static IUniTaskAsyncEnumerable<string> OnEndEditAsAsyncEnumerable(this InputField inputField, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x46D8080", Offset = "0x46D8080", VA = "0x46D8080")]
	public static IAsyncValueChangedEventHandler<string> GetAsyncValueChangedEventHandler(this InputField inputField)
	{
		return null;
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x46D8110", Offset = "0x46D8110", VA = "0x46D8110")]
	public static IAsyncValueChangedEventHandler<string> GetAsyncValueChangedEventHandler(this InputField inputField, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x46D8190", Offset = "0x46D8190", VA = "0x46D8190")]
	public static UniTask<string> OnValueChangedAsync(this InputField inputField)
	{
		return default(UniTask<string>);
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x46D8260", Offset = "0x46D8260", VA = "0x46D8260")]
	public static UniTask<string> OnValueChangedAsync(this InputField inputField, CancellationToken cancellationToken)
	{
		return default(UniTask<string>);
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x46D8330", Offset = "0x46D8330", VA = "0x46D8330")]
	public static IUniTaskAsyncEnumerable<string> OnValueChangedAsAsyncEnumerable(this InputField inputField)
	{
		return null;
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x46D83C0", Offset = "0x46D83C0", VA = "0x46D83C0")]
	public static IUniTaskAsyncEnumerable<string> OnValueChangedAsAsyncEnumerable(this InputField inputField, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x46D8440", Offset = "0x46D8440", VA = "0x46D8440")]
	public static IAsyncValueChangedEventHandler<int> GetAsyncValueChangedEventHandler(this Dropdown dropdown)
	{
		return null;
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x46D84D0", Offset = "0x46D84D0", VA = "0x46D84D0")]
	public static IAsyncValueChangedEventHandler<int> GetAsyncValueChangedEventHandler(this Dropdown dropdown, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x46D8550", Offset = "0x46D8550", VA = "0x46D8550")]
	public static UniTask<int> OnValueChangedAsync(this Dropdown dropdown)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x46D8600", Offset = "0x46D8600", VA = "0x46D8600")]
	public static UniTask<int> OnValueChangedAsync(this Dropdown dropdown, CancellationToken cancellationToken)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x46D86A0", Offset = "0x46D86A0", VA = "0x46D86A0")]
	public static IUniTaskAsyncEnumerable<int> OnValueChangedAsAsyncEnumerable(this Dropdown dropdown)
	{
		return null;
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x46D8730", Offset = "0x46D8730", VA = "0x46D8730")]
	public static IUniTaskAsyncEnumerable<int> OnValueChangedAsAsyncEnumerable(this Dropdown dropdown, CancellationToken cancellationToken)
	{
		return null;
	}
}
