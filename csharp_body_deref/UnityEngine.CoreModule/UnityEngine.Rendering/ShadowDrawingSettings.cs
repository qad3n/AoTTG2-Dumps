// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShadowDrawingSettings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003C6")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct ShadowDrawingSettings : IEquatable<ShadowDrawingSettings>
{
	[Token(Token = "0x4000C1B")]
	[FieldOffset(Offset = "0x0")]
	private CullingResults m_CullingResults;

	[Token(Token = "0x4000C1C")]
	[FieldOffset(Offset = "0x10")]
	private int m_LightIndex;

	[Token(Token = "0x4000C1D")]
	[FieldOffset(Offset = "0x14")]
	private int m_SplitIndex;

	[Token(Token = "0x4000C1E")]
	[FieldOffset(Offset = "0x18")]
	private int m_UseRenderingLayerMaskTest;

	[Token(Token = "0x4000C1F")]
	[FieldOffset(Offset = "0x1C")]
	private uint m_BatchLayerMask;

	[Token(Token = "0x4000C20")]
	[FieldOffset(Offset = "0x20")]
	private ShadowSplitData m_SplitData;

	[Token(Token = "0x4000C21")]
	[FieldOffset(Offset = "0x11C")]
	private ShadowObjectsFilter m_ObjectsFilter;

	[Token(Token = "0x4000C22")]
	[FieldOffset(Offset = "0x120")]
	private BatchCullingProjectionType m_ProjectionType;

	[Token(Token = "0x17000399")]
	public bool useRenderingLayerMaskTest
	{
		[Token(Token = "0x6001707")]
		[Address(RVA = "0x2F658D0", Offset = "0x2F63ED0", VA = "0x182F658D0")]
		set
		{
		}
	}

	[Token(Token = "0x6001708")]
	[Address(RVA = "0x2F72170", Offset = "0x2F70770", VA = "0x182F72170")]
	public ShadowDrawingSettings(CullingResults cullingResults, int lightIndex)
	{
	}

	[Token(Token = "0x6001709")]
	[Address(RVA = "0x2F71980", Offset = "0x2F6FF80", VA = "0x182F71980", Slot = "4")]
	public bool Equals(ShadowDrawingSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x600170A")]
	[Address(RVA = "0x2F71FA0", Offset = "0x2F705A0", VA = "0x182F71FA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600170B")]
	[Address(RVA = "0x2F720D0", Offset = "0x2F706D0", VA = "0x182F720D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
