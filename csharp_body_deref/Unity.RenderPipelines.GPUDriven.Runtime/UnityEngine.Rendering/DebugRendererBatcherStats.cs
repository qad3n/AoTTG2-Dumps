// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugRendererBatcherStats
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000029")]
internal class DebugRendererBatcherStats : IDisposable
{
	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x10")]
	public bool enabled;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x18")]
	public NativeList<InstanceCullerViewStats> instanceCullerStats;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x20")]
	public NativeList<InstanceOcclusionEventStats> instanceOcclusionEventStats;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x28")]
	public NativeList<DebugOccluderStats> occluderStats;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x30")]
	public bool occlusionOverlayEnabled;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x31")]
	public bool occlusionOverlayCountVisible;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x32")]
	public bool overrideOcclusionTestToAlwaysPass;

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x2BC02E0", Offset = "0x2BBE8E0", VA = "0x182BC02E0")]
	public DebugRendererBatcherStats()
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x2BBFE40", Offset = "0x2BBE440", VA = "0x182BBFE40")]
	public void FinalizeInstanceCullerViewStats()
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x2BC0170", Offset = "0x2BBE770", VA = "0x182BC0170")]
	private InstanceOcclusionEventStats GetLastInstanceOcclusionEventStatsForView(int viewIndex)
	{
		return default(InstanceOcclusionEventStats);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x2BBFD80", Offset = "0x2BBE380", VA = "0x182BBFD80", Slot = "4")]
	public void Dispose()
	{
	}
}
