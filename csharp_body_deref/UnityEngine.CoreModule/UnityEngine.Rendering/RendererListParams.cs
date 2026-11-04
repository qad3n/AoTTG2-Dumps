// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RendererListParams
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003B8")]
public struct RendererListParams : IEquatable<RendererListParams>
{
	[Token(Token = "0x4000BDA")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RendererListParams Invalid;

	[Token(Token = "0x4000BDB")]
	[FieldOffset(Offset = "0x0")]
	public CullingResults cullingResults;

	[Token(Token = "0x4000BDC")]
	[FieldOffset(Offset = "0x10")]
	public DrawingSettings drawSettings;

	[Token(Token = "0x4000BDD")]
	[FieldOffset(Offset = "0xD8")]
	public FilteringSettings filteringSettings;

	[Token(Token = "0x4000BDE")]
	[FieldOffset(Offset = "0xF8")]
	public ShaderTagId tagName;

	[Token(Token = "0x4000BDF")]
	[FieldOffset(Offset = "0xFC")]
	public bool isPassTagName;

	[Token(Token = "0x4000BE0")]
	[FieldOffset(Offset = "0x100")]
	public NativeArray<ShaderTagId>? tagValues;

	[Token(Token = "0x4000BE1")]
	[FieldOffset(Offset = "0x118")]
	public NativeArray<RenderStateBlock>? stateBlocks;

	[Token(Token = "0x17000365")]
	internal int numStateBlocks
	{
		[Token(Token = "0x600164D")]
		[Address(RVA = "0x2F6D5E0", Offset = "0x2F6BBE0", VA = "0x182F6D5E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000366")]
	internal IntPtr stateBlocksPtr
	{
		[Token(Token = "0x600164E")]
		[Address(RVA = "0x2F6D650", Offset = "0x2F6BC50", VA = "0x182F6D650")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000367")]
	internal IntPtr tagsValuePtr
	{
		[Token(Token = "0x600164F")]
		[Address(RVA = "0x2F6D6F0", Offset = "0x2F6BCF0", VA = "0x182F6D6F0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x600164C")]
	[Address(RVA = "0x2F6D4C0", Offset = "0x2F6BAC0", VA = "0x182F6D4C0")]
	public RendererListParams(CullingResults cullingResults, DrawingSettings drawSettings, FilteringSettings filteringSettings)
	{
	}

	[Token(Token = "0x6001650")]
	[Address(RVA = "0x2F6CF90", Offset = "0x2F6B590", VA = "0x182F6CF90")]
	internal void Validate()
	{
	}

	[Token(Token = "0x6001651")]
	[Address(RVA = "0x2F6C530", Offset = "0x2F6AB30", VA = "0x182F6C530", Slot = "4")]
	public bool Equals(RendererListParams other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001652")]
	[Address(RVA = "0x2F6C3F0", Offset = "0x2F6A9F0", VA = "0x182F6C3F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001653")]
	[Address(RVA = "0x2F6CDC0", Offset = "0x2F6B3C0", VA = "0x182F6CDC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
