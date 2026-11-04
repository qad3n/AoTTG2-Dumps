// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceOcclusionEventDebugArray
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000047")]
internal struct InstanceOcclusionEventDebugArray : IDisposable
{
	[Token(Token = "0x2000048")]
	internal struct Info
	{
		[Token(Token = "0x4000147")]
		[FieldOffset(Offset = "0x0")]
		public int viewInstanceID;

		[Token(Token = "0x4000148")]
		[FieldOffset(Offset = "0x4")]
		public InstanceOcclusionEventType eventType;

		[Token(Token = "0x4000149")]
		[FieldOffset(Offset = "0x8")]
		public int occluderVersion;

		[Token(Token = "0x400014A")]
		[FieldOffset(Offset = "0xC")]
		public int subviewMask;

		[Token(Token = "0x400014B")]
		[FieldOffset(Offset = "0x10")]
		public OcclusionTest occlusionTest;

		[Token(Token = "0x6000149")]
		[Address(RVA = "0x2BC9EC0", Offset = "0x2BC84C0", VA = "0x182BC9EC0")]
		public bool HasVersion()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000049")]
	internal struct Request
	{
		[Token(Token = "0x400014C")]
		[FieldOffset(Offset = "0x0")]
		public UnsafeList<Info> info;

		[Token(Token = "0x400014D")]
		[FieldOffset(Offset = "0x18")]
		public AsyncGPUReadbackRequest readback;
	}

	[Token(Token = "0x400013F")]
	private const int InitialPassCount = 4;

	[Token(Token = "0x4000140")]
	private const int MaxPassCount = 64;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x0")]
	private GraphicsBuffer m_CounterBuffer;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x8")]
	private UnsafeList<Info> m_PendingInfo;

	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x20")]
	private NativeQueue<Request> m_Requests;

	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x28")]
	private UnsafeList<Info> m_LatestInfo;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x40")]
	private NativeArray<int> m_LatestCounters;

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x50")]
	private bool m_HasLatest;

	[Token(Token = "0x17000023")]
	public GraphicsBuffer CounterBuffer
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x2BCDEE0", Offset = "0x2BCC4E0", VA = "0x182BCDEE0")]
	public void Init()
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x2BCDDB0", Offset = "0x2BCC3B0", VA = "0x182BCDDB0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x2BCE530", Offset = "0x2BCCB30", VA = "0x182BCE530")]
	public int TryAdd(int viewInstanceID, InstanceOcclusionEventType eventType, int occluderVersion, int subviewMask, OcclusionTest occlusionTest)
	{
		return default(int);
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x2BCDFF0", Offset = "0x2BCC5F0", VA = "0x182BCDFF0")]
	public void MoveToDebugStatsAndClear(DebugRendererBatcherStats debugStats)
	{
	}
}
