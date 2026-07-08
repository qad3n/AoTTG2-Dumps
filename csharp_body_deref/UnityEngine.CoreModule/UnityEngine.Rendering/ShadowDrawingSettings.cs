using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002FA")]
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

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x4B0B420", Offset = "0x4B0B420", VA = "0x4B0B420", Slot = "4")]
	public bool Equals(ShadowDrawingSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010BB")]
	[Address(RVA = "0x4B0B750", Offset = "0x4B0B750", VA = "0x4B0B750", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x4B0B7D0", Offset = "0x4B0B7D0", VA = "0x4B0B7D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
