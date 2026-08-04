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
			[Address(RVA = "0x49FD8C0", Offset = "0x49FD8C0", VA = "0x49FD8C0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000845")]
		[Address(RVA = "0x49F83B0", Offset = "0x49F83B0", VA = "0x49F83B0")]
		public AssetBundleRequestAllAssetsAwaiter(AssetBundleRequest asyncOperation)
		{
		}

		[Token(Token = "0x6000846")]
		[Address(RVA = "0x49FD8B0", Offset = "0x49FD8B0", VA = "0x49FD8B0")]
		public AssetBundleRequestAllAssetsAwaiter GetAwaiter()
		{
			return default(AssetBundleRequestAllAssetsAwaiter);
		}

		[Token(Token = "0x6000848")]
		[Address(RVA = "0x49FD8E0", Offset = "0x49FD8E0", VA = "0x49FD8E0")]
		public UnityEngine.Object[] GetResult()
		{
			return null;
		}

		[Token(Token = "0x6000849")]
		[Address(RVA = "0x49FD950", Offset = "0x49FD950", VA = "0x49FD950", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600084A")]
		[Address(RVA = "0x49FD960", Offset = "0x49FD960", VA = "0x49FD960", Slot = "4")]
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
			[Address(RVA = "0x49FDA50", Offset = "0x49FDA50", VA = "0x49FDA50", Slot = "24")]
			get
			{
				return ref *(AssetBundleRequestAllAssetsConfiguredSource*)null;
			}
		}

		[Token(Token = "0x600084C")]
		[Address(RVA = "0x49FDA60", Offset = "0x49FDA60", VA = "0x49FDA60")]
		static AssetBundleRequestAllAssetsConfiguredSource()
		{
		}

		[Token(Token = "0x600084D")]
		[Address(RVA = "0x49FDB60", Offset = "0x49FDB60", VA = "0x49FDB60")]
		private AssetBundleRequestAllAssetsConfiguredSource()
		{
		}

		[Token(Token = "0x600084E")]
		[Address(RVA = "0x49F8640", Offset = "0x49F8640", VA = "0x49F8640")]
		public static IUniTaskSource<UnityEngine.Object[]> Create(AssetBundleRequest asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600084F")]
		[Address(RVA = "0x49FDBE0", Offset = "0x49FDBE0", VA = "0x49FDBE0", Slot = "22")]
		public UnityEngine.Object[] GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x6000850")]
		[Address(RVA = "0x49FDD20", Offset = "0x49FDD20", VA = "0x49FDD20", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000851")]
		[Address(RVA = "0x49FDD30", Offset = "0x49FDD30", VA = "0x49FDD30", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000852")]
		[Address(RVA = "0x49FDD80", Offset = "0x49FDD80", VA = "0x49FDD80", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000853")]
		[Address(RVA = "0x49FDE30", Offset = "0x49FDE30", VA = "0x49FDE30", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000854")]
		[Address(RVA = "0x49FDE90", Offset = "0x49FDE90", VA = "0x49FDE90", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000855")]
		[Address(RVA = "0x49FE030", Offset = "0x49FE030", VA = "0x49FE030")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x6000856")]
		[Address(RVA = "0x49FE100", Offset = "0x49FE100", VA = "0x49FE100")]
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
			[Address(RVA = "0x49FE330", Offset = "0x49FE330", VA = "0x49FE330", Slot = "24")]
			get
			{
				return ref *(AsyncGPUReadbackRequestAwaiterConfiguredSource*)null;
			}
		}

		[Token(Token = "0x600085C")]
		[Address(RVA = "0x49FE340", Offset = "0x49FE340", VA = "0x49FE340")]
		static AsyncGPUReadbackRequestAwaiterConfiguredSource()
		{
		}

		[Token(Token = "0x600085D")]
		[Address(RVA = "0x49FE440", Offset = "0x49FE440", VA = "0x49FE440")]
		private AsyncGPUReadbackRequestAwaiterConfiguredSource()
		{
		}

		[Token(Token = "0x600085E")]
		[Address(RVA = "0x49F8CF0", Offset = "0x49F8CF0", VA = "0x49F8CF0")]
		public static IUniTaskSource<AsyncGPUReadbackRequest> Create(AsyncGPUReadbackRequest asyncOperation, PlayerLoopTiming timing, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600085F")]
		[Address(RVA = "0x49FE450", Offset = "0x49FE450", VA = "0x49FE450", Slot = "22")]
		public AsyncGPUReadbackRequest GetResult(short token)
		{
			return default(AsyncGPUReadbackRequest);
		}

		[Token(Token = "0x6000860")]
		[Address(RVA = "0x49FE590", Offset = "0x49FE590", VA = "0x49FE590", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000861")]
		[Address(RVA = "0x49FE5A0", Offset = "0x49FE5A0", VA = "0x49FE5A0", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000862")]
		[Address(RVA = "0x49FE5F0", Offset = "0x49FE5F0", VA = "0x49FE5F0", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000863")]
		[Address(RVA = "0x49FE6A0", Offset = "0x49FE6A0", VA = "0x49FE6A0", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000864")]
		[Address(RVA = "0x49FE700", Offset = "0x49FE700", VA = "0x49FE700", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000865")]
		[Address(RVA = "0x49FE840", Offset = "0x49FE840", VA = "0x49FE840")]
		private bool TryReturn()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200015D")]
	public struct AsyncOperationAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000569")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private AsyncOperation asyncOperation;

		[Token(Token = "0x400056A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x1700005B")]
		public bool IsCompleted
		{
			[Token(Token = "0x600086B")]
			[Address(RVA = "0x49FEA80", Offset = "0x49FEA80", VA = "0x49FEA80")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600086A")]
		[Address(RVA = "0x49FEA50", Offset = "0x49FEA50", VA = "0x49FEA50")]
		public AsyncOperationAwaiter(AsyncOperation asyncOperation)
		{
		}

		[Token(Token = "0x600086C")]
		[Address(RVA = "0x49FEAA0", Offset = "0x49FEAA0", VA = "0x49FEAA0")]
		public void GetResult()
		{
		}

		[Token(Token = "0x600086D")]
		[Address(RVA = "0x49FEB00", Offset = "0x49FEB00", VA = "0x49FEB00", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600086E")]
		[Address(RVA = "0x49FEB10", Offset = "0x49FEB10", VA = "0x49FEB10", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x200015E")]
	private sealed class AsyncOperationConfiguredSource : IUniTaskSource, IValueTaskSource, IPlayerLoopItem, ITaskPoolNode<AsyncOperationConfiguredSource>
	{
		[Token(Token = "0x400056B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<AsyncOperationConfiguredSource> pool;

		[Token(Token = "0x400056C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private AsyncOperationConfiguredSource nextNode;

		[Token(Token = "0x400056D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private AsyncOperation asyncOperation;

		[Token(Token = "0x400056E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x400056F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x4000570")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x4000571")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x4000572")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x4000573")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x4000574")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x1700005C")]
		public unsafe ref AsyncOperationConfiguredSource NextNode
		{
			[Token(Token = "0x600086F")]
			[Address(RVA = "0x49FEC00", Offset = "0x49FEC00", VA = "0x49FEC00", Slot = "15")]
			get
			{
				return ref *(AsyncOperationConfiguredSource*)null;
			}
		}

		[Token(Token = "0x6000870")]
		[Address(RVA = "0x49FEC10", Offset = "0x49FEC10", VA = "0x49FEC10")]
		static AsyncOperationConfiguredSource()
		{
		}

		[Token(Token = "0x6000871")]
		[Address(RVA = "0x49FED10", Offset = "0x49FED10", VA = "0x49FED10")]
		private AsyncOperationConfiguredSource()
		{
		}

		[Token(Token = "0x6000872")]
		[Address(RVA = "0x49F9200", Offset = "0x49F9200", VA = "0x49F9200")]
		public static IUniTaskSource Create(AsyncOperation asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000873")]
		[Address(RVA = "0x49FED90", Offset = "0x49FED90", VA = "0x49FED90", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x6000874")]
		[Address(RVA = "0x49FEEB0", Offset = "0x49FEEB0", VA = "0x49FEEB0", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000875")]
		[Address(RVA = "0x49FEF00", Offset = "0x49FEF00", VA = "0x49FEF00", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x6000876")]
		[Address(RVA = "0x49FEFB0", Offset = "0x49FEFB0", VA = "0x49FEFB0", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x6000877")]
		[Address(RVA = "0x49FF010", Offset = "0x49FF010", VA = "0x49FF010", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000878")]
		[Address(RVA = "0x49FF1C0", Offset = "0x49FF1C0", VA = "0x49FF1C0")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x6000879")]
		[Address(RVA = "0x49FF2B0", Offset = "0x49FF2B0", VA = "0x49FF2B0")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x2000160")]
	public struct ResourceRequestAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000577")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ResourceRequest asyncOperation;

		[Token(Token = "0x4000578")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x1700005D")]
		public bool IsCompleted
		{
			[Token(Token = "0x600087F")]
			[Address(RVA = "0x49FF500", Offset = "0x49FF500", VA = "0x49FF500")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600087E")]
		[Address(RVA = "0x49F96A0", Offset = "0x49F96A0", VA = "0x49F96A0")]
		public ResourceRequestAwaiter(ResourceRequest asyncOperation)
		{
		}

		[Token(Token = "0x6000880")]
		[Address(RVA = "0x49FF520", Offset = "0x49FF520", VA = "0x49FF520")]
		public UnityEngine.Object GetResult()
		{
			return null;
		}

		[Token(Token = "0x6000881")]
		[Address(RVA = "0x49FF590", Offset = "0x49FF590", VA = "0x49FF590", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000882")]
		[Address(RVA = "0x49FF5A0", Offset = "0x49FF5A0", VA = "0x49FF5A0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x2000161")]
	private sealed class ResourceRequestConfiguredSource : IUniTaskSource<UnityEngine.Object>, IUniTaskSource, IValueTaskSource, IValueTaskSource<UnityEngine.Object>, IPlayerLoopItem, ITaskPoolNode<ResourceRequestConfiguredSource>
	{
		[Token(Token = "0x4000579")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<ResourceRequestConfiguredSource> pool;

		[Token(Token = "0x400057A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private ResourceRequestConfiguredSource nextNode;

		[Token(Token = "0x400057B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private ResourceRequest asyncOperation;

		[Token(Token = "0x400057C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x400057D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400057E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400057F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x4000580")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x4000581")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<UnityEngine.Object> core;

		[Token(Token = "0x4000582")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x1700005E")]
		public unsafe ref ResourceRequestConfiguredSource NextNode
		{
			[Token(Token = "0x6000883")]
			[Address(RVA = "0x49FF690", Offset = "0x49FF690", VA = "0x49FF690", Slot = "24")]
			get
			{
				return ref *(ResourceRequestConfiguredSource*)null;
			}
		}

		[Token(Token = "0x6000884")]
		[Address(RVA = "0x49FF6A0", Offset = "0x49FF6A0", VA = "0x49FF6A0")]
		static ResourceRequestConfiguredSource()
		{
		}

		[Token(Token = "0x6000885")]
		[Address(RVA = "0x49FF7A0", Offset = "0x49FF7A0", VA = "0x49FF7A0")]
		private ResourceRequestConfiguredSource()
		{
		}

		[Token(Token = "0x6000886")]
		[Address(RVA = "0x49F9930", Offset = "0x49F9930", VA = "0x49F9930")]
		public static IUniTaskSource<UnityEngine.Object> Create(ResourceRequest asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x6000887")]
		[Address(RVA = "0x49FF820", Offset = "0x49FF820", VA = "0x49FF820", Slot = "22")]
		public UnityEngine.Object GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x6000888")]
		[Address(RVA = "0x49FF960", Offset = "0x49FF960", VA = "0x49FF960", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x6000889")]
		[Address(RVA = "0x49FF970", Offset = "0x49FF970", VA = "0x49FF970", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600088A")]
		[Address(RVA = "0x49FF9C0", Offset = "0x49FF9C0", VA = "0x49FF9C0", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600088B")]
		[Address(RVA = "0x49FFA70", Offset = "0x49FFA70", VA = "0x49FFA70", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x600088C")]
		[Address(RVA = "0x49FFAD0", Offset = "0x49FFAD0", VA = "0x49FFAD0", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600088D")]
		[Address(RVA = "0x49FFC70", Offset = "0x49FFC70", VA = "0x49FFC70")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x600088E")]
		[Address(RVA = "0x49FFD60", Offset = "0x49FFD60", VA = "0x49FFD60")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x2000163")]
	public struct AssetBundleRequestAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000585")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private AssetBundleRequest asyncOperation;

		[Token(Token = "0x4000586")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x1700005F")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000894")]
			[Address(RVA = "0x49FFF90", Offset = "0x49FFF90", VA = "0x49FFF90")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000893")]
		[Address(RVA = "0x49F9DE0", Offset = "0x49F9DE0", VA = "0x49F9DE0")]
		public AssetBundleRequestAwaiter(AssetBundleRequest asyncOperation)
		{
		}

		[Token(Token = "0x6000895")]
		[Address(RVA = "0x49FFFB0", Offset = "0x49FFFB0", VA = "0x49FFFB0")]
		public UnityEngine.Object GetResult()
		{
			return null;
		}

		[Token(Token = "0x6000896")]
		[Address(RVA = "0x4A00020", Offset = "0x4A00020", VA = "0x4A00020", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000897")]
		[Address(RVA = "0x4A00030", Offset = "0x4A00030", VA = "0x4A00030", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x2000164")]
	private sealed class AssetBundleRequestConfiguredSource : IUniTaskSource<UnityEngine.Object>, IUniTaskSource, IValueTaskSource, IValueTaskSource<UnityEngine.Object>, IPlayerLoopItem, ITaskPoolNode<AssetBundleRequestConfiguredSource>
	{
		[Token(Token = "0x4000587")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<AssetBundleRequestConfiguredSource> pool;

		[Token(Token = "0x4000588")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private AssetBundleRequestConfiguredSource nextNode;

		[Token(Token = "0x4000589")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private AssetBundleRequest asyncOperation;

		[Token(Token = "0x400058A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x400058B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400058C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400058D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x400058E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x400058F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<UnityEngine.Object> core;

		[Token(Token = "0x4000590")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000060")]
		public unsafe ref AssetBundleRequestConfiguredSource NextNode
		{
			[Token(Token = "0x6000898")]
			[Address(RVA = "0x4A00120", Offset = "0x4A00120", VA = "0x4A00120", Slot = "24")]
			get
			{
				return ref *(AssetBundleRequestConfiguredSource*)null;
			}
		}

		[Token(Token = "0x6000899")]
		[Address(RVA = "0x4A00130", Offset = "0x4A00130", VA = "0x4A00130")]
		static AssetBundleRequestConfiguredSource()
		{
		}

		[Token(Token = "0x600089A")]
		[Address(RVA = "0x4A00230", Offset = "0x4A00230", VA = "0x4A00230")]
		private AssetBundleRequestConfiguredSource()
		{
		}

		[Token(Token = "0x600089B")]
		[Address(RVA = "0x49FA070", Offset = "0x49FA070", VA = "0x49FA070")]
		public static IUniTaskSource<UnityEngine.Object> Create(AssetBundleRequest asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x600089C")]
		[Address(RVA = "0x4A002B0", Offset = "0x4A002B0", VA = "0x4A002B0", Slot = "22")]
		public UnityEngine.Object GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x600089D")]
		[Address(RVA = "0x4A003F0", Offset = "0x4A003F0", VA = "0x4A003F0", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x600089E")]
		[Address(RVA = "0x4A00400", Offset = "0x4A00400", VA = "0x4A00400", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x600089F")]
		[Address(RVA = "0x4A00450", Offset = "0x4A00450", VA = "0x4A00450", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008A0")]
		[Address(RVA = "0x4A00500", Offset = "0x4A00500", VA = "0x4A00500", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60008A1")]
		[Address(RVA = "0x4A00560", Offset = "0x4A00560", VA = "0x4A00560", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008A2")]
		[Address(RVA = "0x4A00700", Offset = "0x4A00700", VA = "0x4A00700")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60008A3")]
		[Address(RVA = "0x4A007F0", Offset = "0x4A007F0", VA = "0x4A007F0")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x2000166")]
	public struct AssetBundleCreateRequestAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000593")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private AssetBundleCreateRequest asyncOperation;

		[Token(Token = "0x4000594")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000061")]
		public bool IsCompleted
		{
			[Token(Token = "0x60008A9")]
			[Address(RVA = "0x4A00A20", Offset = "0x4A00A20", VA = "0x4A00A20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60008A8")]
		[Address(RVA = "0x49FA520", Offset = "0x49FA520", VA = "0x49FA520")]
		public AssetBundleCreateRequestAwaiter(AssetBundleCreateRequest asyncOperation)
		{
		}

		[Token(Token = "0x60008AA")]
		[Address(RVA = "0x4A00A40", Offset = "0x4A00A40", VA = "0x4A00A40")]
		public AssetBundle GetResult()
		{
			return null;
		}

		[Token(Token = "0x60008AB")]
		[Address(RVA = "0x4A00AB0", Offset = "0x4A00AB0", VA = "0x4A00AB0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60008AC")]
		[Address(RVA = "0x4A00AC0", Offset = "0x4A00AC0", VA = "0x4A00AC0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x2000167")]
	private sealed class AssetBundleCreateRequestConfiguredSource : IUniTaskSource<AssetBundle>, IUniTaskSource, IValueTaskSource, IValueTaskSource<AssetBundle>, IPlayerLoopItem, ITaskPoolNode<AssetBundleCreateRequestConfiguredSource>
	{
		[Token(Token = "0x4000595")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<AssetBundleCreateRequestConfiguredSource> pool;

		[Token(Token = "0x4000596")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private AssetBundleCreateRequestConfiguredSource nextNode;

		[Token(Token = "0x4000597")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private AssetBundleCreateRequest asyncOperation;

		[Token(Token = "0x4000598")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x4000599")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x400059A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x400059B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x400059C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x400059D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<AssetBundle> core;

		[Token(Token = "0x400059E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000062")]
		public unsafe ref AssetBundleCreateRequestConfiguredSource NextNode
		{
			[Token(Token = "0x60008AD")]
			[Address(RVA = "0x4A00BB0", Offset = "0x4A00BB0", VA = "0x4A00BB0", Slot = "24")]
			get
			{
				return ref *(AssetBundleCreateRequestConfiguredSource*)null;
			}
		}

		[Token(Token = "0x60008AE")]
		[Address(RVA = "0x4A00BC0", Offset = "0x4A00BC0", VA = "0x4A00BC0")]
		static AssetBundleCreateRequestConfiguredSource()
		{
		}

		[Token(Token = "0x60008AF")]
		[Address(RVA = "0x4A00CC0", Offset = "0x4A00CC0", VA = "0x4A00CC0")]
		private AssetBundleCreateRequestConfiguredSource()
		{
		}

		[Token(Token = "0x60008B0")]
		[Address(RVA = "0x49FA7B0", Offset = "0x49FA7B0", VA = "0x49FA7B0")]
		public static IUniTaskSource<AssetBundle> Create(AssetBundleCreateRequest asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60008B1")]
		[Address(RVA = "0x4A00D40", Offset = "0x4A00D40", VA = "0x4A00D40", Slot = "22")]
		public AssetBundle GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x60008B2")]
		[Address(RVA = "0x4A00E80", Offset = "0x4A00E80", VA = "0x4A00E80", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60008B3")]
		[Address(RVA = "0x4A00E90", Offset = "0x4A00E90", VA = "0x4A00E90", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008B4")]
		[Address(RVA = "0x4A00EE0", Offset = "0x4A00EE0", VA = "0x4A00EE0", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008B5")]
		[Address(RVA = "0x4A00F90", Offset = "0x4A00F90", VA = "0x4A00F90", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60008B6")]
		[Address(RVA = "0x4A00FF0", Offset = "0x4A00FF0", VA = "0x4A00FF0", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008B7")]
		[Address(RVA = "0x4A01190", Offset = "0x4A01190", VA = "0x4A01190")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60008B8")]
		[Address(RVA = "0x4A01280", Offset = "0x4A01280", VA = "0x4A01280")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x2000169")]
	public struct UnityWebRequestAsyncOperationAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x40005A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UnityWebRequestAsyncOperation asyncOperation;

		[Token(Token = "0x40005A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000063")]
		public bool IsCompleted
		{
			[Token(Token = "0x60008BE")]
			[Address(RVA = "0x4A014B0", Offset = "0x4A014B0", VA = "0x4A014B0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60008BD")]
		[Address(RVA = "0x49FAC60", Offset = "0x49FAC60", VA = "0x49FAC60")]
		public UnityWebRequestAsyncOperationAwaiter(UnityWebRequestAsyncOperation asyncOperation)
		{
		}

		[Token(Token = "0x60008BF")]
		[Address(RVA = "0x4A014D0", Offset = "0x4A014D0", VA = "0x4A014D0")]
		public UnityWebRequest GetResult()
		{
			return null;
		}

		[Token(Token = "0x60008C0")]
		[Address(RVA = "0x4A01590", Offset = "0x4A01590", VA = "0x4A01590", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60008C1")]
		[Address(RVA = "0x4A015A0", Offset = "0x4A015A0", VA = "0x4A015A0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x200016A")]
	private sealed class UnityWebRequestAsyncOperationConfiguredSource : IUniTaskSource<UnityWebRequest>, IUniTaskSource, IValueTaskSource, IValueTaskSource<UnityWebRequest>, IPlayerLoopItem, ITaskPoolNode<UnityWebRequestAsyncOperationConfiguredSource>
	{
		[Token(Token = "0x40005A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static TaskPool<UnityWebRequestAsyncOperationConfiguredSource> pool;

		[Token(Token = "0x40005A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private UnityWebRequestAsyncOperationConfiguredSource nextNode;

		[Token(Token = "0x40005A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UnityWebRequestAsyncOperation asyncOperation;

		[Token(Token = "0x40005A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private IProgress<float> progress;

		[Token(Token = "0x40005A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x40005A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenRegistration cancellationTokenRegistration;

		[Token(Token = "0x40005A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool cancelImmediately;

		[Token(Token = "0x40005AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool completed;

		[Token(Token = "0x40005AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTaskCompletionSourceCore<UnityWebRequest> core;

		[Token(Token = "0x40005AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Action<AsyncOperation> continuationAction;

		[Token(Token = "0x17000064")]
		public unsafe ref UnityWebRequestAsyncOperationConfiguredSource NextNode
		{
			[Token(Token = "0x60008C2")]
			[Address(RVA = "0x4A01690", Offset = "0x4A01690", VA = "0x4A01690", Slot = "24")]
			get
			{
				return ref *(UnityWebRequestAsyncOperationConfiguredSource*)null;
			}
		}

		[Token(Token = "0x60008C3")]
		[Address(RVA = "0x4A016A0", Offset = "0x4A016A0", VA = "0x4A016A0")]
		static UnityWebRequestAsyncOperationConfiguredSource()
		{
		}

		[Token(Token = "0x60008C4")]
		[Address(RVA = "0x4A017A0", Offset = "0x4A017A0", VA = "0x4A017A0")]
		private UnityWebRequestAsyncOperationConfiguredSource()
		{
		}

		[Token(Token = "0x60008C5")]
		[Address(RVA = "0x49FB0F0", Offset = "0x49FB0F0", VA = "0x49FB0F0")]
		public static IUniTaskSource<UnityWebRequest> Create(UnityWebRequestAsyncOperation asyncOperation, PlayerLoopTiming timing, IProgress<float> progress, CancellationToken cancellationToken, bool cancelImmediately, out short token)
		{
			return null;
		}

		[Token(Token = "0x60008C6")]
		[Address(RVA = "0x4A01820", Offset = "0x4A01820", VA = "0x4A01820", Slot = "22")]
		public UnityWebRequest GetResult(short token)
		{
			return null;
		}

		[Token(Token = "0x60008C7")]
		[Address(RVA = "0x4A01960", Offset = "0x4A01960", VA = "0x4A01960", Slot = "12")]
		private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
		{
		}

		[Token(Token = "0x60008C8")]
		[Address(RVA = "0x4A01970", Offset = "0x4A01970", VA = "0x4A01970", Slot = "10")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008C9")]
		[Address(RVA = "0x4A019C0", Offset = "0x4A019C0", VA = "0x4A019C0", Slot = "13")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008CA")]
		[Address(RVA = "0x4A01A70", Offset = "0x4A01A70", VA = "0x4A01A70", Slot = "11")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60008CB")]
		[Address(RVA = "0x4A01AD0", Offset = "0x4A01AD0", VA = "0x4A01AD0", Slot = "23")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008CC")]
		[Address(RVA = "0x4A01CF0", Offset = "0x4A01CF0", VA = "0x4A01CF0")]
		private bool TryReturn()
		{
			return default(bool);
		}

		[Token(Token = "0x60008CD")]
		[Address(RVA = "0x4A01DE0", Offset = "0x4A01DE0", VA = "0x4A01DE0")]
		private void Continuation(AsyncOperation _)
		{
		}
	}

	[Token(Token = "0x200016C")]
	private sealed class JobHandlePromise : IUniTaskSource, IValueTaskSource, IPlayerLoopItem
	{
		[Token(Token = "0x40005AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private JobHandle jobHandle;

		[Token(Token = "0x40005B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTaskCompletionSourceCore<AsyncUnit> core;

		[Token(Token = "0x60008D2")]
		[Address(RVA = "0x49FB770", Offset = "0x49FB770", VA = "0x49FB770")]
		public static JobHandlePromise Create(JobHandle jobHandle, out short token)
		{
			return null;
		}

		[Token(Token = "0x60008D3")]
		[Address(RVA = "0x4A020B0", Offset = "0x4A020B0", VA = "0x4A020B0", Slot = "13")]
		public void GetResult(short token)
		{
		}

		[Token(Token = "0x60008D4")]
		[Address(RVA = "0x4A02100", Offset = "0x4A02100", VA = "0x4A02100", Slot = "4")]
		public UniTaskStatus GetStatus(short token)
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008D5")]
		[Address(RVA = "0x4A02150", Offset = "0x4A02150", VA = "0x4A02150", Slot = "7")]
		public UniTaskStatus UnsafeGetStatus()
		{
			return default(UniTaskStatus);
		}

		[Token(Token = "0x60008D6")]
		[Address(RVA = "0x4A02200", Offset = "0x4A02200", VA = "0x4A02200", Slot = "5")]
		public void OnCompleted(Action<object> continuation, object state, short token)
		{
		}

		[Token(Token = "0x60008D7")]
		[Address(RVA = "0x4A02260", Offset = "0x4A02260", VA = "0x4A02260", Slot = "14")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008D8")]
		[Address(RVA = "0x4A020A0", Offset = "0x4A020A0", VA = "0x4A020A0")]
		public JobHandlePromise()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200016D")]
	[CompilerGenerated]
	private struct _003CWaitAsync_003Ed__40 : IAsyncStateMachine
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
		[Address(RVA = "0x4A023A0", Offset = "0x4A023A0", VA = "0x4A023A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60008DA")]
		[Address(RVA = "0x4A026E0", Offset = "0x4A026E0", VA = "0x4A026E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x49F8320", Offset = "0x49F8320", VA = "0x49F8320")]
	public static AssetBundleRequestAllAssetsAwaiter AwaitForAllAssets(this AssetBundleRequest asyncOperation)
	{
		return default(AssetBundleRequestAllAssetsAwaiter);
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x49F83E0", Offset = "0x49F83E0", VA = "0x49F83E0")]
	public static UniTask<UnityEngine.Object[]> AwaitForAllAssets(this AssetBundleRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityEngine.Object[]>);
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x49F8600", Offset = "0x49F8600", VA = "0x49F8600")]
	public static UniTask<UnityEngine.Object[]> AwaitForAllAssets(this AssetBundleRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityEngine.Object[]>);
	}

	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x49F8420", Offset = "0x49F8420", VA = "0x49F8420")]
	public static UniTask<UnityEngine.Object[]> AwaitForAllAssets(this AssetBundleRequest asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityEngine.Object[]>);
	}

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x49F8A60", Offset = "0x49F8A60", VA = "0x49F8A60")]
	public static UniTask<AsyncGPUReadbackRequest>.Awaiter GetAwaiter(this AsyncGPUReadbackRequest asyncOperation)
	{
		return default(UniTask<AsyncGPUReadbackRequest>.Awaiter);
	}

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x49F8C70", Offset = "0x49F8C70", VA = "0x49F8C70")]
	public static UniTask<AsyncGPUReadbackRequest> WithCancellation(this AsyncGPUReadbackRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<AsyncGPUReadbackRequest>);
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x49F8CB0", Offset = "0x49F8CB0", VA = "0x49F8CB0")]
	public static UniTask<AsyncGPUReadbackRequest> WithCancellation(this AsyncGPUReadbackRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<AsyncGPUReadbackRequest>);
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x49F8B30", Offset = "0x49F8B30", VA = "0x49F8B30")]
	public static UniTask<AsyncGPUReadbackRequest> ToUniTask(this AsyncGPUReadbackRequest asyncOperation, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<AsyncGPUReadbackRequest>);
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x49F9030", Offset = "0x49F9030", VA = "0x49F9030")]
	public static UniTask WithCancellation(this AsyncOperation asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x49F91E0", Offset = "0x49F91E0", VA = "0x49F91E0")]
	public static UniTask WithCancellation(this AsyncOperation asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x49F9040", Offset = "0x49F9040", VA = "0x49F9040")]
	public static UniTask ToUniTask(this AsyncOperation asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x49F9610", Offset = "0x49F9610", VA = "0x49F9610")]
	public static ResourceRequestAwaiter GetAwaiter(this ResourceRequest asyncOperation)
	{
		return default(ResourceRequestAwaiter);
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x49F96D0", Offset = "0x49F96D0", VA = "0x49F96D0")]
	public static UniTask<UnityEngine.Object> WithCancellation(this ResourceRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x49F98F0", Offset = "0x49F98F0", VA = "0x49F98F0")]
	public static UniTask<UnityEngine.Object> WithCancellation(this ResourceRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x49F9710", Offset = "0x49F9710", VA = "0x49F9710")]
	public static UniTask<UnityEngine.Object> ToUniTask(this ResourceRequest asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x49F9D50", Offset = "0x49F9D50", VA = "0x49F9D50")]
	public static AssetBundleRequestAwaiter GetAwaiter(this AssetBundleRequest asyncOperation)
	{
		return default(AssetBundleRequestAwaiter);
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x49F9E10", Offset = "0x49F9E10", VA = "0x49F9E10")]
	public static UniTask<UnityEngine.Object> WithCancellation(this AssetBundleRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x49FA030", Offset = "0x49FA030", VA = "0x49FA030")]
	public static UniTask<UnityEngine.Object> WithCancellation(this AssetBundleRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x49F9E50", Offset = "0x49F9E50", VA = "0x49F9E50")]
	public static UniTask<UnityEngine.Object> ToUniTask(this AssetBundleRequest asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityEngine.Object>);
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x49FA490", Offset = "0x49FA490", VA = "0x49FA490")]
	public static AssetBundleCreateRequestAwaiter GetAwaiter(this AssetBundleCreateRequest asyncOperation)
	{
		return default(AssetBundleCreateRequestAwaiter);
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x49FA550", Offset = "0x49FA550", VA = "0x49FA550")]
	public static UniTask<AssetBundle> WithCancellation(this AssetBundleCreateRequest asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<AssetBundle>);
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x49FA770", Offset = "0x49FA770", VA = "0x49FA770")]
	public static UniTask<AssetBundle> WithCancellation(this AssetBundleCreateRequest asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<AssetBundle>);
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x49FA590", Offset = "0x49FA590", VA = "0x49FA590")]
	public static UniTask<AssetBundle> ToUniTask(this AssetBundleCreateRequest asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<AssetBundle>);
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x49FABD0", Offset = "0x49FABD0", VA = "0x49FABD0")]
	public static UnityWebRequestAsyncOperationAwaiter GetAwaiter(this UnityWebRequestAsyncOperation asyncOperation)
	{
		return default(UnityWebRequestAsyncOperationAwaiter);
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x49FAC90", Offset = "0x49FAC90", VA = "0x49FAC90")]
	public static UniTask<UnityWebRequest> WithCancellation(this UnityWebRequestAsyncOperation asyncOperation, CancellationToken cancellationToken)
	{
		return default(UniTask<UnityWebRequest>);
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x49FAF40", Offset = "0x49FAF40", VA = "0x49FAF40")]
	public static UniTask<UnityWebRequest> WithCancellation(this UnityWebRequestAsyncOperation asyncOperation, CancellationToken cancellationToken, bool cancelImmediately)
	{
		return default(UniTask<UnityWebRequest>);
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x49FACD0", Offset = "0x49FACD0", VA = "0x49FACD0")]
	public static UniTask<UnityWebRequest> ToUniTask(this UnityWebRequestAsyncOperation asyncOperation, [Optional] IProgress<float> progress, [Optional][DefaultParameterValue(8)] PlayerLoopTiming timing, [Optional] CancellationToken cancellationToken, bool cancelImmediately = false)
	{
		return default(UniTask<UnityWebRequest>);
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x49FB510", Offset = "0x49FB510", VA = "0x49FB510")]
	[AsyncStateMachine(typeof(_003CWaitAsync_003Ed__40))]
	public static UniTask WaitAsync(this JobHandle jobHandle, PlayerLoopTiming waitTiming, [Optional] CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x49FB5D0", Offset = "0x49FB5D0", VA = "0x49FB5D0")]
	public static UniTask.Awaiter GetAwaiter(this JobHandle jobHandle)
	{
		return default(UniTask.Awaiter);
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x49FB7F0", Offset = "0x49FB7F0", VA = "0x49FB7F0")]
	public static UniTask ToUniTask(this JobHandle jobHandle, PlayerLoopTiming waitTiming)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x49FB8D0", Offset = "0x49FB8D0", VA = "0x49FB8D0")]
	public static UniTask StartAsyncCoroutine(this MonoBehaviour monoBehaviour, Func<CancellationToken, UniTask> asyncCoroutine)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x49FB900", Offset = "0x49FB900", VA = "0x49FB900")]
	public static AsyncUnityEventHandler GetAsyncEventHandler(this UnityEvent unityEvent, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x49FBB40", Offset = "0x49FBB40", VA = "0x49FBB40")]
	public static UniTask OnInvokeAsync(this UnityEvent unityEvent, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x49FBC50", Offset = "0x49FBC50", VA = "0x49FBC50")]
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
	[Address(RVA = "0x49FBD00", Offset = "0x49FBD00", VA = "0x49FBD00")]
	public static IAsyncClickEventHandler GetAsyncClickEventHandler(this Button button)
	{
		return null;
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x49FBD70", Offset = "0x49FBD70", VA = "0x49FBD70")]
	public static IAsyncClickEventHandler GetAsyncClickEventHandler(this Button button, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x49FBDE0", Offset = "0x49FBDE0", VA = "0x49FBDE0")]
	public static UniTask OnClickAsync(this Button button)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x49FBE60", Offset = "0x49FBE60", VA = "0x49FBE60")]
	public static UniTask OnClickAsync(this Button button, CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x49FBED0", Offset = "0x49FBED0", VA = "0x49FBED0")]
	public static IUniTaskAsyncEnumerable<AsyncUnit> OnClickAsAsyncEnumerable(this Button button)
	{
		return null;
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x49FBF60", Offset = "0x49FBF60", VA = "0x49FBF60")]
	public static IUniTaskAsyncEnumerable<AsyncUnit> OnClickAsAsyncEnumerable(this Button button, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x49FBFE0", Offset = "0x49FBFE0", VA = "0x49FBFE0")]
	public static IAsyncValueChangedEventHandler<bool> GetAsyncValueChangedEventHandler(this Toggle toggle)
	{
		return null;
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x49FC070", Offset = "0x49FC070", VA = "0x49FC070")]
	public static IAsyncValueChangedEventHandler<bool> GetAsyncValueChangedEventHandler(this Toggle toggle, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x49FC0F0", Offset = "0x49FC0F0", VA = "0x49FC0F0")]
	public static UniTask<bool> OnValueChangedAsync(this Toggle toggle)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x49FC1A0", Offset = "0x49FC1A0", VA = "0x49FC1A0")]
	public static UniTask<bool> OnValueChangedAsync(this Toggle toggle, CancellationToken cancellationToken)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x49FC240", Offset = "0x49FC240", VA = "0x49FC240")]
	public static IUniTaskAsyncEnumerable<bool> OnValueChangedAsAsyncEnumerable(this Toggle toggle)
	{
		return null;
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x49FC2D0", Offset = "0x49FC2D0", VA = "0x49FC2D0")]
	public static IUniTaskAsyncEnumerable<bool> OnValueChangedAsAsyncEnumerable(this Toggle toggle, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x49FC350", Offset = "0x49FC350", VA = "0x49FC350")]
	public static IAsyncValueChangedEventHandler<float> GetAsyncValueChangedEventHandler(this Scrollbar scrollbar)
	{
		return null;
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x49FC3E0", Offset = "0x49FC3E0", VA = "0x49FC3E0")]
	public static IAsyncValueChangedEventHandler<float> GetAsyncValueChangedEventHandler(this Scrollbar scrollbar, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x49FC460", Offset = "0x49FC460", VA = "0x49FC460")]
	public static UniTask<float> OnValueChangedAsync(this Scrollbar scrollbar)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x49FC510", Offset = "0x49FC510", VA = "0x49FC510")]
	public static UniTask<float> OnValueChangedAsync(this Scrollbar scrollbar, CancellationToken cancellationToken)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x49FC5B0", Offset = "0x49FC5B0", VA = "0x49FC5B0")]
	public static IUniTaskAsyncEnumerable<float> OnValueChangedAsAsyncEnumerable(this Scrollbar scrollbar)
	{
		return null;
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x49FC640", Offset = "0x49FC640", VA = "0x49FC640")]
	public static IUniTaskAsyncEnumerable<float> OnValueChangedAsAsyncEnumerable(this Scrollbar scrollbar, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x49FC6C0", Offset = "0x49FC6C0", VA = "0x49FC6C0")]
	public static IAsyncValueChangedEventHandler<Vector2> GetAsyncValueChangedEventHandler(this ScrollRect scrollRect)
	{
		return null;
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x49FC740", Offset = "0x49FC740", VA = "0x49FC740")]
	public static IAsyncValueChangedEventHandler<Vector2> GetAsyncValueChangedEventHandler(this ScrollRect scrollRect, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x49FC7C0", Offset = "0x49FC7C0", VA = "0x49FC7C0")]
	public static UniTask<Vector2> OnValueChangedAsync(this ScrollRect scrollRect)
	{
		return default(UniTask<Vector2>);
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x49FC890", Offset = "0x49FC890", VA = "0x49FC890")]
	public static UniTask<Vector2> OnValueChangedAsync(this ScrollRect scrollRect, CancellationToken cancellationToken)
	{
		return default(UniTask<Vector2>);
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x49FC950", Offset = "0x49FC950", VA = "0x49FC950")]
	public static IUniTaskAsyncEnumerable<Vector2> OnValueChangedAsAsyncEnumerable(this ScrollRect scrollRect)
	{
		return null;
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x49FC9D0", Offset = "0x49FC9D0", VA = "0x49FC9D0")]
	public static IUniTaskAsyncEnumerable<Vector2> OnValueChangedAsAsyncEnumerable(this ScrollRect scrollRect, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x49FCA50", Offset = "0x49FCA50", VA = "0x49FCA50")]
	public static IAsyncValueChangedEventHandler<float> GetAsyncValueChangedEventHandler(this Slider slider)
	{
		return null;
	}

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x49FCAE0", Offset = "0x49FCAE0", VA = "0x49FCAE0")]
	public static IAsyncValueChangedEventHandler<float> GetAsyncValueChangedEventHandler(this Slider slider, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x49FCB60", Offset = "0x49FCB60", VA = "0x49FCB60")]
	public static UniTask<float> OnValueChangedAsync(this Slider slider)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x49FCC10", Offset = "0x49FCC10", VA = "0x49FCC10")]
	public static UniTask<float> OnValueChangedAsync(this Slider slider, CancellationToken cancellationToken)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x49FCCB0", Offset = "0x49FCCB0", VA = "0x49FCCB0")]
	public static IUniTaskAsyncEnumerable<float> OnValueChangedAsAsyncEnumerable(this Slider slider)
	{
		return null;
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x49FCD40", Offset = "0x49FCD40", VA = "0x49FCD40")]
	public static IUniTaskAsyncEnumerable<float> OnValueChangedAsAsyncEnumerable(this Slider slider, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x49FCDC0", Offset = "0x49FCDC0", VA = "0x49FCDC0")]
	public static IAsyncEndEditEventHandler<string> GetAsyncEndEditEventHandler(this InputField inputField)
	{
		return null;
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x49FCE50", Offset = "0x49FCE50", VA = "0x49FCE50")]
	public static IAsyncEndEditEventHandler<string> GetAsyncEndEditEventHandler(this InputField inputField, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x49FCED0", Offset = "0x49FCED0", VA = "0x49FCED0")]
	public static UniTask<string> OnEndEditAsync(this InputField inputField)
	{
		return default(UniTask<string>);
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x49FCFA0", Offset = "0x49FCFA0", VA = "0x49FCFA0")]
	public static UniTask<string> OnEndEditAsync(this InputField inputField, CancellationToken cancellationToken)
	{
		return default(UniTask<string>);
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x49FD070", Offset = "0x49FD070", VA = "0x49FD070")]
	public static IUniTaskAsyncEnumerable<string> OnEndEditAsAsyncEnumerable(this InputField inputField)
	{
		return null;
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x49FD100", Offset = "0x49FD100", VA = "0x49FD100")]
	public static IUniTaskAsyncEnumerable<string> OnEndEditAsAsyncEnumerable(this InputField inputField, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x49FD180", Offset = "0x49FD180", VA = "0x49FD180")]
	public static IAsyncValueChangedEventHandler<string> GetAsyncValueChangedEventHandler(this InputField inputField)
	{
		return null;
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x49FD210", Offset = "0x49FD210", VA = "0x49FD210")]
	public static IAsyncValueChangedEventHandler<string> GetAsyncValueChangedEventHandler(this InputField inputField, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x49FD290", Offset = "0x49FD290", VA = "0x49FD290")]
	public static UniTask<string> OnValueChangedAsync(this InputField inputField)
	{
		return default(UniTask<string>);
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x49FD360", Offset = "0x49FD360", VA = "0x49FD360")]
	public static UniTask<string> OnValueChangedAsync(this InputField inputField, CancellationToken cancellationToken)
	{
		return default(UniTask<string>);
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x49FD430", Offset = "0x49FD430", VA = "0x49FD430")]
	public static IUniTaskAsyncEnumerable<string> OnValueChangedAsAsyncEnumerable(this InputField inputField)
	{
		return null;
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x49FD4C0", Offset = "0x49FD4C0", VA = "0x49FD4C0")]
	public static IUniTaskAsyncEnumerable<string> OnValueChangedAsAsyncEnumerable(this InputField inputField, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x49FD540", Offset = "0x49FD540", VA = "0x49FD540")]
	public static IAsyncValueChangedEventHandler<int> GetAsyncValueChangedEventHandler(this Dropdown dropdown)
	{
		return null;
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x49FD5D0", Offset = "0x49FD5D0", VA = "0x49FD5D0")]
	public static IAsyncValueChangedEventHandler<int> GetAsyncValueChangedEventHandler(this Dropdown dropdown, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x49FD650", Offset = "0x49FD650", VA = "0x49FD650")]
	public static UniTask<int> OnValueChangedAsync(this Dropdown dropdown)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x49FD700", Offset = "0x49FD700", VA = "0x49FD700")]
	public static UniTask<int> OnValueChangedAsync(this Dropdown dropdown, CancellationToken cancellationToken)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x49FD7A0", Offset = "0x49FD7A0", VA = "0x49FD7A0")]
	public static IUniTaskAsyncEnumerable<int> OnValueChangedAsAsyncEnumerable(this Dropdown dropdown)
	{
		return null;
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x49FD830", Offset = "0x49FD830", VA = "0x49FD830")]
	public static IUniTaskAsyncEnumerable<int> OnValueChangedAsAsyncEnumerable(this Dropdown dropdown, CancellationToken cancellationToken)
	{
		return null;
	}
}
