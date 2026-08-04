// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShadowDrawingSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002FD")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct ShadowDrawingSettings : IEquatable<ShadowDrawingSettings>
{
	[Token(Token = "0x4000914")]
	[FieldOffset(Offset = "0x0")]
	private CullingResults m_CullingResults;

	[Token(Token = "0x4000915")]
	[FieldOffset(Offset = "0x10")]
	private int m_LightIndex;

	[Token(Token = "0x4000916")]
	[FieldOffset(Offset = "0x14")]
	private int m_UseRenderingLayerMaskTest;

	[Token(Token = "0x4000917")]
	[FieldOffset(Offset = "0x18")]
	private ShadowSplitData m_SplitData;

	[Token(Token = "0x4000918")]
	[FieldOffset(Offset = "0x114")]
	private ShadowObjectsFilter m_ObjectsFilter;

	[Token(Token = "0x4000919")]
	[FieldOffset(Offset = "0x118")]
	private BatchCullingProjectionType m_ProjectionType;

	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x4E32D50", Offset = "0x4E32D50", VA = "0x4E32D50", Slot = "4")]
	public bool Equals(ShadowDrawingSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x4E33080", Offset = "0x4E33080", VA = "0x4E33080", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x4E33100", Offset = "0x4E33100", VA = "0x4E33100", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
