// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RendererListParams
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000396")]
public struct RendererListParams : IEquatable<RendererListParams>
{
	[Token(Token = "0x4000AEA")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RendererListParams Invalid;

	[Token(Token = "0x4000AEB")]
	[FieldOffset(Offset = "0x0")]
	public CullingResults cullingResults;

	[Token(Token = "0x4000AEC")]
	[FieldOffset(Offset = "0x10")]
	public DrawingSettings drawSettings;

	[Token(Token = "0x4000AED")]
	[FieldOffset(Offset = "0xD8")]
	public FilteringSettings filteringSettings;

	[Token(Token = "0x4000AEE")]
	[FieldOffset(Offset = "0xF8")]
	public ShaderTagId tagName;

	[Token(Token = "0x4000AEF")]
	[FieldOffset(Offset = "0xFC")]
	public bool isPassTagName;

	[Token(Token = "0x4000AF0")]
	[FieldOffset(Offset = "0x100")]
	public NativeArray<ShaderTagId>? tagValues;

	[Token(Token = "0x4000AF1")]
	[FieldOffset(Offset = "0x118")]
	public NativeArray<RenderStateBlock>? stateBlocks;

	[Token(Token = "0x17000382")]
	internal int numStateBlocks
	{
		[Token(Token = "0x6001666")]
		[Address(RVA = "0x695E7E0", Offset = "0x695D7E0", VA = "0x695E7E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000383")]
	internal IntPtr stateBlocksPtr
	{
		[Token(Token = "0x6001667")]
		[Address(RVA = "0x695E840", Offset = "0x695D840", VA = "0x695E840")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000384")]
	internal IntPtr tagsValuePtr
	{
		[Token(Token = "0x6001668")]
		[Address(RVA = "0x695E8D0", Offset = "0x695D8D0", VA = "0x695E8D0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x6001665")]
	[Address(RVA = "0x695E730", Offset = "0x695D730", VA = "0x695E730")]
	public RendererListParams(CullingResults cullingResults, DrawingSettings drawSettings, FilteringSettings filteringSettings)
	{
	}

	[Token(Token = "0x6001669")]
	[Address(RVA = "0x695E960", Offset = "0x695D960", VA = "0x695E960")]
	internal void Validate()
	{
	}

	[Token(Token = "0x600166A")]
	[Address(RVA = "0x695ED60", Offset = "0x695DD60", VA = "0x695ED60", Slot = "4")]
	public bool Equals(RendererListParams other)
	{
		return default(bool);
	}

	[Token(Token = "0x600166B")]
	[Address(RVA = "0x695F0F0", Offset = "0x695E0F0", VA = "0x695F0F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600166C")]
	[Address(RVA = "0x695F1A0", Offset = "0x695E1A0", VA = "0x695F1A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
