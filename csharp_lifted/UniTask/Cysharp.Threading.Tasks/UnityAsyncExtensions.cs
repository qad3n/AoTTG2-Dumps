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
			[Address(RVA = "0x62EAAD0", Offset = "0x62E9AD0", VA = "0x62EAAD0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000843")]
		[Address(RVA = "0x62E56B0", Offset = "0x62E46B0", VA = "0x62E56B0")]
		public AssetBundleRequestAllAssetsAwaiter(AssetBundleRequest asyncOperation)
		{
		}

		[Token(Token = "0x6000844")]
		[Address(RVA = "0x62EAAC0", Offset = "0x62E9AC0", VA = "0x62EAAC0")]
		public AssetBundleRequestAllAssetsAwaiter GetAwaiter()
		{
			return default(AssetBundleRequestAllAssetsAwaiter);
		}

		[Token(Token = "0x6000846")]
		[Address(RVA = "0x62EAAF0", Offset = "0x62E9AF0", VA = "0x62EAAF0")]
		public UnityEngine.Object[] GetResult()
		{
			return null;
		}

		[Token(Token = "0x6000847")]
		[Address(RVA = "0x62EAB60", Offset = "0x62E9B60", VA = "0x62EAB60", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000848")]
		[Address(RVA = "0x62EAB70", Offset = "0x62E9B70", VA = "0x62EAB70", Slot = "4")]
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
			[Address(RVA = "0x62EAC60", Offset = "0x62E9C60", VA = "0x62EAC60", Slot = "24")]
			get
			{
				return ref *(AssetBundleRequestAllAssetsConfiguredSource*)null;
			}
		}

		[Token(Token = "0x600084A")]
		[Address(RVA = "0x62EAC70", Offset = "0x62E9C70", VA = "0x62EAC70")]
		static AssetBundleRequestAllAssetsConfiguredSource()
		{
		}

		[Token(Token = "0x600084B")]
		[Address(RVA = "0x62EAD70", Offset = "0x62E9D70", VA = "0x62EAD70")]
		private AssetBundleRequestAllAssetsConfiguredSource()
		{
		}

		[Token(Token = "0x600084C")]
		[Address(RVA = "0x62E5940", Offset = "0x62E4940", VA = "0x62E5940")]
		public static IUniTaskSource<UnityEngine.Object[]> Create(AssetBundleRequest asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600084D")]
		[Address(RVA = "0x62EADF0", Offset = "0x62E9DF0", VA = "0x62EADF0", Slot = "22")]
		public UnityEngine.Object[] GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x600084E")]
		[Address(RVA = "0x62EAF00", Offset = "0x62E9F00", VA = "0x62EAF00", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600084F")]
		[Address(RVA = "0x62EAF10", Offset = "0x62E9F10", VA = "0x62EAF10", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000850")]
		[Address(RVA = "0x62EAF60", Offset = "0x62E9F60", VA = "0x62EAF60", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000851")]
		[Address(RVA = "0x62EB010", Offset = "0x62EA010", VA = "0x62EB010", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000852")]
		[Address(RVA = "0x62EB070", Offset = "0x62EA070", VA = "0x62EB070", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000853")]
		[Address(RVA = "0x62EB210", Offset = "0x62EA210", VA = "0x62EB210")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x6000854")]
		[Address(RVA = "0x62EB2E0", Offset = "0x62EA2E0", VA = "0x62EB2E0")]
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
			[Address(RVA = "0x62EB510", Offset = "0x62EA510", VA = "0x62EB510", Slot = "24")]
			get
			{
				return ref *(AsyncGPUReadbackRequestAwaiterConfiguredSource*)null;
			}
		}

		[Token(Token = "0x600085A")]
		[Address(RVA = "0x62EB520", Offset = "0x62EA520", VA = "0x62EB520")]
		static AsyncGPUReadbackRequestAwaiterConfiguredSource()
		{
		}

		[Token(Token = "0x600085B")]
		[Address(RVA = "0x62EB620", Offset = "0x62EA620", VA = "0x62EB620")]
		private AsyncGPUReadbackRequestAwaiterConfiguredSource()
		{
		}

		[Token(Token = "0x600085C")]
		[Address(RVA = "0x62E5FC0", Offset = "0x62E4FC0", VA = "0x62E5FC0")]
		public static IUniTaskSource<AsyncGPUReadbackRequest> Create(AsyncGPUReadbackRequest asyncOperation, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600085D")]
		[Address(RVA = "0x62EB630", Offset = "0x62EA630", VA = "0x62EB630", Slot = "22")]
		public AsyncGPUReadbackRequest GetResult(short token)
		{
			return default(AsyncGPUReadbackRequest);
		}

		[Token(Token = "0x600085E")]
		[Address(RVA = "0x62EB750", Offset = "0x62EA750", VA = "0x62EB750", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600085F")]
		[Address(RVA = "0x62EB760", Offset = "0x62EA760", VA = "0x62EB760", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000860")]
		[Address(RVA = "0x62EB7B0", Offset = "0x62EA7B0", VA = "0x62EB7B0", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000861")]
		[Address(RVA = "0x62EB860", Offset = "0x62EA860", VA = "0x62EB860", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000862")]
		[Address(RVA = "0x62EB8C0", Offset = "0x62EA8C0", VA = "0x62EB8C0", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000863")]
		[Address(RVA = "0x62EBA00", Offset = "0x62EAA00", VA = "0x62EBA00")]
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
		[Address(RVA = "0x62E6550", Offset = "0x62E5550", VA = "0x62E6550")]
		public static JobHandlePromise Create(JobHandle jobHandle, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000869")]
		[Address(RVA = "0x62EBC20", Offset = "0x62EAC20", VA = "0x62EBC20", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x600086A")]
		[Address(RVA = "0x62EBC70", Offset = "0x62EAC70", VA = "0x62EBC70", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600086B")]
		[Address(RVA = "0x62EBCC0", Offset = "0x62EACC0", VA = "0x62EBCC0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600086C")]
		[Address(RVA = "0x62EBD70", Offset = "0x62EAD70", VA = "0x62EBD70", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600086D")]
		[Address(RVA = "0x62EBDD0", Offset = "0x62EADD0", VA = "0x62EBDD0", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600086E")]
		[Address(RVA = "0x62EBC10", Offset = "0x62EAC10", VA = "0x62EBC10")]
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
			[Address(RVA = "0x62EBF40", Offset = "0x62EAF40", VA = "0x62EBF40")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600086F")]
		[Address(RVA = "0x62EBF10", Offset = "0x62EAF10", VA = "0x62EBF10")]
		public AsyncOperationAwaiter(AsyncOperation asyncOperation)
		{
		}

		[Token(Token = "0x6000871")]
		[Address(RVA = "0x62EBF60", Offset = "0x62EAF60", VA = "0x62EBF60")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000872")]
		[Address(RVA = "0x62EBFC0", Offset = "0x62EAFC0", VA = "0x62EBFC0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000873")]
		[Address(RVA = "0x62EBFD0", Offset = "0x62EAFD0", VA = "0x62EBFD0", Slot = "4")]
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
			[Address(RVA = "0x62EC0C0", Offset = "0x62EB0C0", VA = "0x62EC0C0", Slot = "15")]
			get
			{
				return ref *(AsyncOperationConfiguredSource*)null;
			}
		}

		[Token(Token = "0x6000875")]
		[Address(RVA = "0x62EC0D0", Offset = "0x62EB0D0", VA = "0x62EC0D0")]
		static AsyncOperationConfiguredSource()
		{
		}

		[Token(Token = "0x6000876")]
		[Address(RVA = "0x62EC1D0", Offset = "0x62EB1D0", VA = "0x62EC1D0")]
		private AsyncOperationConfiguredSource()
		{
		}

		[Token(Token = "0x6000877")]
		[Address(RVA = "0x62E68C0", Offset = "0x62E58C0", VA = "0x62E68C0")]
		public static IUniTaskSource Create(AsyncOperation asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000878")]
		[Address(RVA = "0x62EC250", Offset = "0x62EB250", VA = "0x62EC250", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000879")]
		[Address(RVA = "0x62EC350", Offset = "0x62EB350", VA = "0x62EC350", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600087A")]
		[Address(RVA = "0x62EC3A0", Offset = "0x62EB3A0", VA = "0x62EC3A0", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600087B")]
		[Address(RVA = "0x62EC450", Offset = "0x62EB450", VA = "0x62EC450", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600087C")]
		[Address(RVA = "0x62EC4B0", Offset = "0x62EB4B0", VA = "0x62EC4B0", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600087D")]
		[Address(RVA = "0x62EC660", Offset = "0x62EB660", VA = "0x62EC660")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x600087E")]
		[Address(RVA = "0x62EC750", Offset = "0x62EB750", VA = "0x62EC750")]
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
			[Address(RVA = "0x62EC9A0", Offset = "0x62EB9A0", VA = "0x62EC9A0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000883")]
		[Address(RVA = "0x62E6D40", Offset = "0x62E5D40", VA = "0x62E6D40")]
		public ResourceRequestAwaiter(ResourceRequest asyncOperation)
		{
		}

		[Token(Token = "0x6000885")]
		[Address(RVA = "0x62EC9C0", Offset = "0x62EB9C0", VA = "0x62EC9C0")]
		public UnityEngine.Object GetResult()
		{
			return null;
		}

		[Token(Token = "0x6000886")]
		[Address(RVA = "0x62ECA30", Offset = "0x62EBA30", VA = "0x62ECA30", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000887")]
		[Address(RVA = "0x62ECA40", Offset = "0x62EBA40", VA = "0x62ECA40", Slot = "4")]
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
			[Address(RVA = "0x62ECB30", Offset = "0x62EBB30", VA = "0x62ECB30", Slot = "24")]
			get
			{
				return ref *(ResourceRequestConfiguredSource*)null;
			}
		}

		[Token(Token = "0x6000889")]
		[Address(RVA = "0x62ECB40", Offset = "0x62EBB40", VA = "0x62ECB40")]
		static ResourceRequestConfiguredSource()
		{
		}

		[Token(Token = "0x600088A")]
		[Address(RVA = "0x62ECC40", Offset = "0x62EBC40", VA = "0x62ECC40")]
		private ResourceRequestConfiguredSource()
		{
		}

		[Token(Token = "0x600088B")]
		[Address(RVA = "0x62E6FD0", Offset = "0x62E5FD0", VA = "0x62E6FD0")]
		public static IUniTaskSource<UnityEngine.Object> Create(ResourceRequest asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600088C")]
		[Address(RVA = "0x62ECCC0", Offset = "0x62EBCC0", VA = "0x62ECCC0", Slot = "22")]
		public UnityEngine.Object GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x600088D")]
		[Address(RVA = "0x62ECDD0", Offset = "0x62EBDD0", VA = "0x62ECDD0", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600088E")]
		[Address(RVA = "0x62ECDE0", Offset = "0x62EBDE0", VA = "0x62ECDE0", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600088F")]
		[Address(RVA = "0x62ECE30", Offset = "0x62EBE30", VA = "0x62ECE30", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000890")]
		[Address(RVA = "0x62ECEE0", Offset = "0x62EBEE0", VA = "0x62ECEE0", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000891")]
		[Address(RVA = "0x62ECF40", Offset = "0x62EBF40", VA = "0x62ECF40", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000892")]
		[Address(RVA = "0x62ED0E0", Offset = "0x62EC0E0", VA = "0x62ED0E0")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x6000893")]
		[Address(RVA = "0x62ED1D0", Offset = "0x62EC1D0", VA = "0x62ED1D0")]
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
			[Address(RVA = "0x62ED400", Offset = "0x62EC400", VA = "0x62ED400")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000898")]
		[Address(RVA = "0x62E7460", Offset = "0x62E6460", VA = "0x62E7460")]
		public AssetBundleRequestAwaiter(AssetBundleRequest asyncOperation)
		{
		}

		[Token(Token = "0x600089A")]
		[Address(RVA = "0x62ED420", Offset = "0x62EC420", VA = "0x62ED420")]
		public UnityEngine.Object GetResult()
		{
			return null;
		}

		[Token(Token = "0x600089B")]
		[Address(RVA = "0x62ED490", Offset = "0x62EC490", VA = "0x62ED490", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600089C")]
		[Address(RVA = "0x62ED4A0", Offset = "0x62EC4A0", VA = "0x62ED4A0", Slot = "4")]
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
			[Address(RVA = "0x62ED590", Offset = "0x62EC590", VA = "0x62ED590", Slot = "24")]
			get
			{
				return ref *(AssetBundleRequestConfiguredSource*)null;
			}
		}

		[Token(Token = "0x600089E")]
		[Address(RVA = "0x62ED5A0", Offset = "0x62EC5A0", VA = "0x62ED5A0")]
		static AssetBundleRequestConfiguredSource()
		{
		}

		[Token(Token = "0x600089F")]
		[Address(RVA = "0x62ED6A0", Offset = "0x62EC6A0", VA = "0x62ED6A0")]
		private AssetBundleRequestConfiguredSource()
		{
		}

		[Token(Token = "0x60008A0")]
		[Address(RVA = "0x62E76F0", Offset = "0x62E66F0", VA = "0x62E76F0")]
		public static IUniTaskSource<UnityEngine.Object> Create(AssetBundleRequest asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60008A1")]
		[Address(RVA = "0x62ED720", Offset = "0x62EC720", VA = "0x62ED720", Slot = "22")]
		public UnityEngine.Object GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x60008A2")]
		[Address(RVA = "0x62ED830", Offset = "0x62EC830", VA = "0x62ED830", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60008A3")]
		[Address(RVA = "0x62ED840", Offset = "0x62EC840", VA = "0x62ED840", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008A4")]
		[Address(RVA = "0x62ED890", Offset = "0x62EC890", VA = "0x62ED890", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008A5")]
		[Address(RVA = "0x62ED940", Offset = "0x62EC940", VA = "0x62ED940", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60008A6")]
		[Address(RVA = "0x62ED9A0", Offset = "0x62EC9A0", VA = "0x62ED9A0", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008A7")]
		[Address(RVA = "0x62EDB40", Offset = "0x62ECB40", VA = "0x62EDB40")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60008A8")]
		[Address(RVA = "0x62EDC30", Offset = "0x62ECC30", VA = "0x62EDC30")]
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
			[Address(RVA = "0x62EDE60", Offset = "0x62ECE60", VA = "0x62EDE60")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60008AD")]
		[Address(RVA = "0x62E7B80", Offset = "0x62E6B80", VA = "0x62E7B80")]
		public AssetBundleCreateRequestAwaiter(AssetBundleCreateRequest asyncOperation)
		{
		}

		[Token(Token = "0x60008AF")]
		[Address(RVA = "0x62EDE80", Offset = "0x62ECE80", VA = "0x62EDE80")]
		public AssetBundle GetResult()
		{
			return null;
		}

		[Token(Token = "0x60008B0")]
		[Address(RVA = "0x62EDEF0", Offset = "0x62ECEF0", VA = "0x62EDEF0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60008B1")]
		[Address(RVA = "0x62EDF00", Offset = "0x62ECF00", VA = "0x62EDF00", Slot = "4")]
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
			[Address(RVA = "0x62EDFF0", Offset = "0x62ECFF0", VA = "0x62EDFF0", Slot = "24")]
			get
			{
				return ref *(AssetBundleCreateRequestConfiguredSource*)null;
			}
		}

		[Token(Token = "0x60008B3")]
		[Address(RVA = "0x62EE000", Offset = "0x62ED000", VA = "0x62EE000")]
		static AssetBundleCreateRequestConfiguredSource()
		{
		}

		[Token(Token = "0x60008B4")]
		[Address(RVA = "0x62EE100", Offset = "0x62ED100", VA = "0x62EE100")]
		private AssetBundleCreateRequestConfiguredSource()
		{
		}

		[Token(Token = "0x60008B5")]
		[Address(RVA = "0x62E7E10", Offset = "0x62E6E10", VA = "0x62E7E10")]
		public static IUniTaskSource<AssetBundle> Create(AssetBundleCreateRequest asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60008B6")]
		[Address(RVA = "0x62EE180", Offset = "0x62ED180", VA = "0x62EE180", Slot = "22")]
		public AssetBundle GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x60008B7")]
		[Address(RVA = "0x62EE290", Offset = "0x62ED290", VA = "0x62EE290", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60008B8")]
		[Address(RVA = "0x62EE2A0", Offset = "0x62ED2A0", VA = "0x62EE2A0", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008B9")]
		[Address(RVA = "0x62EE2F0", Offset = "0x62ED2F0", VA = "0x62EE2F0", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008BA")]
		[Address(RVA = "0x62EE3A0", Offset = "0x62ED3A0", VA = "0x62EE3A0", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60008BB")]
		[Address(RVA = "0x62EE400", Offset = "0x62ED400", VA = "0x62EE400", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008BC")]
		[Address(RVA = "0x62EE5A0", Offset = "0x62ED5A0", VA = "0x62EE5A0")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60008BD")]
		[Address(RVA = "0x62EE690", Offset = "0x62ED690", VA = "0x62EE690")]
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
			[Address(RVA = "0x62EE8C0", Offset = "0x62ED8C0", VA = "0x62EE8C0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60008C2")]
		[Address(RVA = "0x62E82A0", Offset = "0x62E72A0", VA = "0x62E82A0")]
		public UnityWebRequestAsyncOperationAwaiter(UnityWebRequestAsyncOperation asyncOperation)
		{
		}

		[Token(Token = "0x60008C4")]
		[Address(RVA = "0x62EE8E0", Offset = "0x62ED8E0", VA = "0x62EE8E0")]
		public UnityWebRequest GetResult()
		{
			return null;
		}

		[Token(Token = "0x60008C5")]
		[Address(RVA = "0x62EE9A0", Offset = "0x62ED9A0", VA = "0x62EE9A0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60008C6")]
		[Address(RVA = "0x62EE9B0", Offset = "0x62ED9B0", VA = "0x62EE9B0", Slot = "4")]
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
			[Address(RVA = "0x62EEAA0", Offset = "0x62EDAA0", VA = "0x62EEAA0", Slot = "24")]
			get
			{
				return ref *(UnityWebRequestAsyncOperationConfiguredSource*)null;
			}
		}

		[Token(Token = "0x60008C8")]
		[Address(RVA = "0x62EEAB0", Offset = "0x62EDAB0", VA = "0x62EEAB0")]
		static UnityWebRequestAsyncOperationConfiguredSource()
		{
		}

		[Token(Token = "0x60008C9")]
		[Address(RVA = "0x62EEBB0", Offset = "0x62EDBB0", VA = "0x62EEBB0")]
		private UnityWebRequestAsyncOperationConfiguredSource()
		{
		}

		[Token(Token = "0x60008CA")]
		[Address(RVA = "0x62E8720", Offset = "0x62E7720", VA = "0x62E8720")]
		public static IUniTaskSource<UnityWebRequest> Create(UnityWebRequestAsyncOperation asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60008CB")]
		[Address(RVA = "0x62EEC30", Offset = "0x62EDC30", VA = "0x62EEC30", Slot = "22")]
		public UnityWebRequest GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x60008CC")]
		[Address(RVA = "0x62EED40", Offset = "0x62EDD40", VA = "0x62EED40", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60008CD")]
		[Address(RVA = "0x62EED50", Offset = "0x62EDD50", VA = "0x62EED50", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008CE")]
		[Address(RVA = "0x62EEDA0", Offset = "0x62EDDA0", VA = "0x62EEDA0", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008CF")]
		[Address(RVA = "0x62EEE50", Offset = "0x62EDE50", VA = "0x62EEE50", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60008D0")]
		[Address(RVA = "0x62EEEB0", Offset = "0x62EDEB0", VA = "0x62EEEB0", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008D1")]
		[Address(RVA = "0x62EF0E0", Offset = "0x62EE0E0", VA = "0x62EF0E0")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60008D2")]
		[Address(RVA = "0x62EF1D0", Offset = "0x62EE1D0", VA = "0x62EF1D0")]
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
		[Address(RVA = "0x62EF4A0", Offset = "0x62EE4A0", VA = "0x62EF4A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60008D8")]
		[Address(RVA = "0x62EF6E0", Offset = "0x62EE6E0", VA = "0x62EF6E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x62E5620", Offset = "0x62E4620", VA = "0x62E5620")]
	public static AssetBundleRequestAllAssetsAwaiter AwaitForAllAssets(this AssetBundleRequest asyncOperation)
	{
		return default(AssetBundleRequestAllAssetsAwaiter);
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x62E56E0", Offset = "0x62E46E0", VA = "0x62E56E0")]
	public static UniTask<UnityEngine.Object[]> AwaitForAllAssets(this AssetBundleRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityEngine.Object[]>);
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x62E5900", Offset = "0x62E4900", VA = "0x62E5900")]
	public static UniTask<UnityEngine.Object[]> AwaitForAllAssets(this AssetBundleRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityEngine.Object[]>);
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x62E5720", Offset = "0x62E4720", VA = "0x62E5720")]
	public static UniTask<UnityEngine.Object[]> AwaitForAllAssets(this AssetBundleRequest asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityEngine.Object[]>);
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x62E5D40", Offset = "0x62E4D40", VA = "0x62E5D40")]
	public static UniTask<AsyncGPUReadbackRequest>.Awaiter GetAwaiter(this AsyncGPUReadbackRequest asyncOperation)
	{
		return default(UniTask<AsyncGPUReadbackRequest>.Awaiter);
	}

	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x62E5F40", Offset = "0x62E4F40", VA = "0x62E5F40")]
	public static UniTask<AsyncGPUReadbackRequest> WithCancellation(this AsyncGPUReadbackRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<AsyncGPUReadbackRequest>);
	}

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x62E5F80", Offset = "0x62E4F80", VA = "0x62E5F80")]
	public static UniTask<AsyncGPUReadbackRequest> WithCancellation(this AsyncGPUReadbackRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<AsyncGPUReadbackRequest>);
	}

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x62E5E00", Offset = "0x62E4E00", VA = "0x62E5E00")]
	public static UniTask<AsyncGPUReadbackRequest> ToUniTask(this AsyncGPUReadbackRequest asyncOperation, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<AsyncGPUReadbackRequest>);
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x62E62F0", Offset = "0x62E52F0", VA = "0x62E62F0")]
	[AsyncStateMachine(typeof(_003CWaitAsync_003Ed__11))]
	public static UniTask WaitAsync(this JobHandle jobHandle, PlayerLoopTiming waitTiming, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x62E63B0", Offset = "0x62E53B0", VA = "0x62E63B0")]
	public static UniTask.Awaiter GetAwaiter(this JobHandle jobHandle)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x62E65D0", Offset = "0x62E55D0", VA = "0x62E65D0")]
	public static UniTask ToUniTask(this JobHandle jobHandle, PlayerLoopTiming waitTiming)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x62E66B0", Offset = "0x62E56B0", VA = "0x62E66B0")]
	public static UniTask StartAsyncCoroutine(this MonoBehaviour monoBehaviour, Func<CancellationToken, UniTask> asyncCoroutine)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x62E66E0", Offset = "0x62E56E0", VA = "0x62E66E0")]
	public static UniTask WithCancellation(this AsyncOperation asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x62E68A0", Offset = "0x62E58A0", VA = "0x62E68A0")]
	public static UniTask WithCancellation(this AsyncOperation asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x62E6700", Offset = "0x62E5700", VA = "0x62E6700")]
	public static UniTask ToUniTask(this AsyncOperation asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x62E6CB0", Offset = "0x62E5CB0", VA = "0x62E6CB0")]
	public static ResourceRequestAwaiter GetAwaiter(this ResourceRequest asyncOperation)
	{
		return default(ResourceRequestAwaiter);
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x62E6D70", Offset = "0x62E5D70", VA = "0x62E6D70")]
	public static UniTask<UnityEngine.Object> WithCancellation(this ResourceRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x62E6F90", Offset = "0x62E5F90", VA = "0x62E6F90")]
	public static UniTask<UnityEngine.Object> WithCancellation(this ResourceRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x62E6DB0", Offset = "0x62E5DB0", VA = "0x62E6DB0")]
	public static UniTask<UnityEngine.Object> ToUniTask(this ResourceRequest asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x62E73D0", Offset = "0x62E63D0", VA = "0x62E73D0")]
	public static AssetBundleRequestAwaiter GetAwaiter(this AssetBundleRequest asyncOperation)
	{
		return default(AssetBundleRequestAwaiter);
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x62E7490", Offset = "0x62E6490", VA = "0x62E7490")]
	public static UniTask<UnityEngine.Object> WithCancellation(this AssetBundleRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x62E76B0", Offset = "0x62E66B0", VA = "0x62E76B0")]
	public static UniTask<UnityEngine.Object> WithCancellation(this AssetBundleRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x62E74D0", Offset = "0x62E64D0", VA = "0x62E74D0")]
	public static UniTask<UnityEngine.Object> ToUniTask(this AssetBundleRequest asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x62E7AF0", Offset = "0x62E6AF0", VA = "0x62E7AF0")]
	public static AssetBundleCreateRequestAwaiter GetAwaiter(this AssetBundleCreateRequest asyncOperation)
	{
		return default(AssetBundleCreateRequestAwaiter);
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x62E7BB0", Offset = "0x62E6BB0", VA = "0x62E7BB0")]
	public static UniTask<AssetBundle> WithCancellation(this AssetBundleCreateRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<AssetBundle>);
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x62E7DD0", Offset = "0x62E6DD0", VA = "0x62E7DD0")]
	public static UniTask<AssetBundle> WithCancellation(this AssetBundleCreateRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<AssetBundle>);
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x62E7BF0", Offset = "0x62E6BF0", VA = "0x62E7BF0")]
	public static UniTask<AssetBundle> ToUniTask(this AssetBundleCreateRequest asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<AssetBundle>);
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x62E8210", Offset = "0x62E7210", VA = "0x62E8210")]
	public static UnityWebRequestAsyncOperationAwaiter GetAwaiter(this UnityWebRequestAsyncOperation asyncOperation)
	{
		return default(UnityWebRequestAsyncOperationAwaiter);
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x62E82D0", Offset = "0x62E72D0", VA = "0x62E82D0")]
	public static UniTask<UnityWebRequest> WithCancellation(this UnityWebRequestAsyncOperation asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityWebRequest>);
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x62E8580", Offset = "0x62E7580", VA = "0x62E8580")]
	public static UniTask<UnityWebRequest> WithCancellation(this UnityWebRequestAsyncOperation asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityWebRequest>);
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x62E8310", Offset = "0x62E7310", VA = "0x62E8310")]
	public static UniTask<UnityWebRequest> ToUniTask(this UnityWebRequestAsyncOperation asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityWebRequest>);
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x62E8B20", Offset = "0x62E7B20", VA = "0x62E8B20")]
	public static AsyncUnityEventHandler GetAsyncEventHandler(this UnityEvent unityEvent, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x62E8D50", Offset = "0x62E7D50", VA = "0x62E8D50")]
	public static UniTask OnInvokeAsync(this UnityEvent unityEvent, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x62E8E60", Offset = "0x62E7E60", VA = "0x62E8E60")]
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
	[Address(RVA = "0x62E8F10", Offset = "0x62E7F10", VA = "0x62E8F10")]
	public static IAsyncClickEventHandler GetAsyncClickEventHandler(this Button button)
	{
		return null;
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x62E8F80", Offset = "0x62E7F80", VA = "0x62E8F80")]
	public static IAsyncClickEventHandler GetAsyncClickEventHandler(this Button button, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x62E8FF0", Offset = "0x62E7FF0", VA = "0x62E8FF0")]
	public static UniTask OnClickAsync(this Button button)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x62E9070", Offset = "0x62E8070", VA = "0x62E9070")]
	public static UniTask OnClickAsync(this Button button, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x62E90E0", Offset = "0x62E80E0", VA = "0x62E90E0")]
	public static IUniTaskAsyncEnumerable<AsyncUnit> OnClickAsAsyncEnumerable(this Button button)
	{
		return null;
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x62E9170", Offset = "0x62E8170", VA = "0x62E9170")]
	public static IUniTaskAsyncEnumerable<AsyncUnit> OnClickAsAsyncEnumerable(this Button button, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x62E91F0", Offset = "0x62E81F0", VA = "0x62E91F0")]
	public static IAsyncValueChangedEventHandler<bool> GetAsyncValueChangedEventHandler(this Toggle toggle)
	{
		return null;
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x62E9280", Offset = "0x62E8280", VA = "0x62E9280")]
	public static IAsyncValueChangedEventHandler<bool> GetAsyncValueChangedEventHandler(this Toggle toggle, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x62E9300", Offset = "0x62E8300", VA = "0x62E9300")]
	public static UniTask<bool> OnValueChangedAsync(this Toggle toggle)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x62E93B0", Offset = "0x62E83B0", VA = "0x62E93B0")]
	public static UniTask<bool> OnValueChangedAsync(this Toggle toggle, CancellationToken cancellationToken)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x62E9450", Offset = "0x62E8450", VA = "0x62E9450")]
	public static IUniTaskAsyncEnumerable<bool> OnValueChangedAsAsyncEnumerable(this Toggle toggle)
	{
		return null;
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x62E94E0", Offset = "0x62E84E0", VA = "0x62E94E0")]
	public static IUniTaskAsyncEnumerable<bool> OnValueChangedAsAsyncEnumerable(this Toggle toggle, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x62E9560", Offset = "0x62E8560", VA = "0x62E9560")]
	public static IAsyncValueChangedEventHandler<float> GetAsyncValueChangedEventHandler(this Scrollbar scrollbar)
	{
		return null;
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x62E95F0", Offset = "0x62E85F0", VA = "0x62E95F0")]
	public static IAsyncValueChangedEventHandler<float> GetAsyncValueChangedEventHandler(this Scrollbar scrollbar, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x62E9670", Offset = "0x62E8670", VA = "0x62E9670")]
	public static UniTask<float> OnValueChangedAsync(this Scrollbar scrollbar)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x62E9720", Offset = "0x62E8720", VA = "0x62E9720")]
	public static UniTask<float> OnValueChangedAsync(this Scrollbar scrollbar, CancellationToken cancellationToken)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x62E97C0", Offset = "0x62E87C0", VA = "0x62E97C0")]
	public static IUniTaskAsyncEnumerable<float> OnValueChangedAsAsyncEnumerable(this Scrollbar scrollbar)
	{
		return null;
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x62E9850", Offset = "0x62E8850", VA = "0x62E9850")]
	public static IUniTaskAsyncEnumerable<float> OnValueChangedAsAsyncEnumerable(this Scrollbar scrollbar, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x62E98D0", Offset = "0x62E88D0", VA = "0x62E98D0")]
	public static IAsyncValueChangedEventHandler<Vector2> GetAsyncValueChangedEventHandler(this ScrollRect scrollRect)
	{
		return null;
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x62E9950", Offset = "0x62E8950", VA = "0x62E9950")]
	public static IAsyncValueChangedEventHandler<Vector2> GetAsyncValueChangedEventHandler(this ScrollRect scrollRect, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x62E99D0", Offset = "0x62E89D0", VA = "0x62E99D0")]
	public static UniTask<Vector2> OnValueChangedAsync(this ScrollRect scrollRect)
	{
		return default(UniTask<Vector2>);
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x62E9AA0", Offset = "0x62E8AA0", VA = "0x62E9AA0")]
	public static UniTask<Vector2> OnValueChangedAsync(this ScrollRect scrollRect, CancellationToken cancellationToken)
	{
		return default(UniTask<Vector2>);
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x62E9B60", Offset = "0x62E8B60", VA = "0x62E9B60")]
	public static IUniTaskAsyncEnumerable<Vector2> OnValueChangedAsAsyncEnumerable(this ScrollRect scrollRect)
	{
		return null;
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x62E9BE0", Offset = "0x62E8BE0", VA = "0x62E9BE0")]
	public static IUniTaskAsyncEnumerable<Vector2> OnValueChangedAsAsyncEnumerable(this ScrollRect scrollRect, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x62E9C60", Offset = "0x62E8C60", VA = "0x62E9C60")]
	public static IAsyncValueChangedEventHandler<float> GetAsyncValueChangedEventHandler(this Slider slider)
	{
		return null;
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x62E9CF0", Offset = "0x62E8CF0", VA = "0x62E9CF0")]
	public static IAsyncValueChangedEventHandler<float> GetAsyncValueChangedEventHandler(this Slider slider, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x62E9D70", Offset = "0x62E8D70", VA = "0x62E9D70")]
	public static UniTask<float> OnValueChangedAsync(this Slider slider)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x62E9E20", Offset = "0x62E8E20", VA = "0x62E9E20")]
	public static UniTask<float> OnValueChangedAsync(this Slider slider, CancellationToken cancellationToken)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x62E9EC0", Offset = "0x62E8EC0", VA = "0x62E9EC0")]
	public static IUniTaskAsyncEnumerable<float> OnValueChangedAsAsyncEnumerable(this Slider slider)
	{
		return null;
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x62E9F50", Offset = "0x62E8F50", VA = "0x62E9F50")]
	public static IUniTaskAsyncEnumerable<float> OnValueChangedAsAsyncEnumerable(this Slider slider, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x62E9FD0", Offset = "0x62E8FD0", VA = "0x62E9FD0")]
	public static IAsyncEndEditEventHandler<string> GetAsyncEndEditEventHandler(this InputField inputField)
	{
		return null;
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x62EA060", Offset = "0x62E9060", VA = "0x62EA060")]
	public static IAsyncEndEditEventHandler<string> GetAsyncEndEditEventHandler(this InputField inputField, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x62EA0E0", Offset = "0x62E90E0", VA = "0x62EA0E0")]
	public static UniTask<string> OnEndEditAsync(this InputField inputField)
	{
		return default(UniTask<string>);
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x62EA1B0", Offset = "0x62E91B0", VA = "0x62EA1B0")]
	public static UniTask<string> OnEndEditAsync(this InputField inputField, CancellationToken cancellationToken)
	{
		return default(UniTask<string>);
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x62EA280", Offset = "0x62E9280", VA = "0x62EA280")]
	public static IUniTaskAsyncEnumerable<string> OnEndEditAsAsyncEnumerable(this InputField inputField)
	{
		return null;
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x62EA310", Offset = "0x62E9310", VA = "0x62EA310")]
	public static IUniTaskAsyncEnumerable<string> OnEndEditAsAsyncEnumerable(this InputField inputField, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x62EA390", Offset = "0x62E9390", VA = "0x62EA390")]
	public static IAsyncValueChangedEventHandler<string> GetAsyncValueChangedEventHandler(this InputField inputField)
	{
		return null;
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x62EA420", Offset = "0x62E9420", VA = "0x62EA420")]
	public static IAsyncValueChangedEventHandler<string> GetAsyncValueChangedEventHandler(this InputField inputField, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x62EA4A0", Offset = "0x62E94A0", VA = "0x62EA4A0")]
	public static UniTask<string> OnValueChangedAsync(this InputField inputField)
	{
		return default(UniTask<string>);
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x62EA570", Offset = "0x62E9570", VA = "0x62EA570")]
	public static UniTask<string> OnValueChangedAsync(this InputField inputField, CancellationToken cancellationToken)
	{
		return default(UniTask<string>);
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x62EA640", Offset = "0x62E9640", VA = "0x62EA640")]
	public static IUniTaskAsyncEnumerable<string> OnValueChangedAsAsyncEnumerable(this InputField inputField)
	{
		return null;
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x62EA6D0", Offset = "0x62E96D0", VA = "0x62EA6D0")]
	public static IUniTaskAsyncEnumerable<string> OnValueChangedAsAsyncEnumerable(this InputField inputField, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x62EA750", Offset = "0x62E9750", VA = "0x62EA750")]
	public static IAsyncValueChangedEventHandler<int> GetAsyncValueChangedEventHandler(this Dropdown dropdown)
	{
		return null;
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x62EA7E0", Offset = "0x62E97E0", VA = "0x62EA7E0")]
	public static IAsyncValueChangedEventHandler<int> GetAsyncValueChangedEventHandler(this Dropdown dropdown, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x62EA860", Offset = "0x62E9860", VA = "0x62EA860")]
	public static UniTask<int> OnValueChangedAsync(this Dropdown dropdown)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x62EA910", Offset = "0x62E9910", VA = "0x62EA910")]
	public static UniTask<int> OnValueChangedAsync(this Dropdown dropdown, CancellationToken cancellationToken)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x62EA9B0", Offset = "0x62E99B0", VA = "0x62EA9B0")]
	public static IUniTaskAsyncEnumerable<int> OnValueChangedAsAsyncEnumerable(this Dropdown dropdown)
	{
		return null;
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x62EAA40", Offset = "0x62E9A40", VA = "0x62EAA40")]
	public static IUniTaskAsyncEnumerable<int> OnValueChangedAsAsyncEnumerable(this Dropdown dropdown, CancellationToken cancellationToken)
	{
		return null;
	}
}
