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

[Token(Token = "0x200039A")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct ShadowDrawingSettings : IEquatable<ShadowDrawingSettings>
{
	[Token(Token = "0x4000AFB")]
	[FieldOffset(Offset = "0x0")]
	private CullingResults m_CullingResults;

	[Token(Token = "0x4000AFC")]
	[FieldOffset(Offset = "0x10")]
	private int m_LightIndex;

	[Token(Token = "0x4000AFD")]
	[FieldOffset(Offset = "0x14")]
	private int m_SplitIndex;

	[Token(Token = "0x4000AFE")]
	[FieldOffset(Offset = "0x18")]
	private int m_UseRenderingLayerMaskTest;

	[Token(Token = "0x4000AFF")]
	[FieldOffset(Offset = "0x1C")]
	private uint m_BatchLayerMask;

	[Token(Token = "0x4000B00")]
	[FieldOffset(Offset = "0x20")]
	private ShadowSplitData m_SplitData;

	[Token(Token = "0x4000B01")]
	[FieldOffset(Offset = "0x11C")]
	private ShadowObjectsFilter m_ObjectsFilter;

	[Token(Token = "0x4000B02")]
	[FieldOffset(Offset = "0x120")]
	private BatchCullingProjectionType m_ProjectionType;

	[Token(Token = "0x17000387")]
	public bool useRenderingLayerMaskTest
	{
		[Token(Token = "0x60016AC")]
		[Address(RVA = "0x6961C20", Offset = "0x6960C20", VA = "0x6961C20")]
		set
		{
		}
	}

	[Token(Token = "0x60016AD")]
	[Address(RVA = "0x6961C30", Offset = "0x6960C30", VA = "0x6961C30")]
	public ShadowDrawingSettings(CullingResults cullingResults, int lightIndex)
	{
	}

	[Token(Token = "0x60016AE")]
	[Address(RVA = "0x6961E10", Offset = "0x6960E10", VA = "0x6961E10", Slot = "4")]
	public bool Equals(ShadowDrawingSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016AF")]
	[Address(RVA = "0x6962240", Offset = "0x6961240", VA = "0x6962240", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016B0")]
	[Address(RVA = "0x69622C0", Offset = "0x69612C0", VA = "0x69622C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
