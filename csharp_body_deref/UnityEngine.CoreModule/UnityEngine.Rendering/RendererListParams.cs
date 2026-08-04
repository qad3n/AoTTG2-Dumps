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

[Token(Token = "0x20002F9")]
public struct RendererListParams : IEquatable<RendererListParams>
{
	[Token(Token = "0x4000903")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RendererListParams Invalid;

	[Token(Token = "0x4000904")]
	[FieldOffset(Offset = "0x0")]
	public CullingResults cullingResults;

	[Token(Token = "0x4000905")]
	[FieldOffset(Offset = "0x10")]
	public DrawingSettings drawSettings;

	[Token(Token = "0x4000906")]
	[FieldOffset(Offset = "0xD4")]
	public FilteringSettings filteringSettings;

	[Token(Token = "0x4000907")]
	[FieldOffset(Offset = "0xEC")]
	public ShaderTagId tagName;

	[Token(Token = "0x4000908")]
	[FieldOffset(Offset = "0xF0")]
	public bool isPassTagName;

	[Token(Token = "0x4000909")]
	[FieldOffset(Offset = "0xF8")]
	public NativeArray<ShaderTagId>? tagValues;

	[Token(Token = "0x400090A")]
	[FieldOffset(Offset = "0x110")]
	public NativeArray<RenderStateBlock>? stateBlocks;

	[Token(Token = "0x1700029D")]
	internal int numStateBlocks
	{
		[Token(Token = "0x600108B")]
		[Address(RVA = "0x4E30C90", Offset = "0x4E30C90", VA = "0x4E30C90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029E")]
	internal IntPtr stateBlocksPtr
	{
		[Token(Token = "0x600108C")]
		[Address(RVA = "0x4E30CF0", Offset = "0x4E30CF0", VA = "0x4E30CF0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x1700029F")]
	internal IntPtr tagsValuePtr
	{
		[Token(Token = "0x600108D")]
		[Address(RVA = "0x4E30D80", Offset = "0x4E30D80", VA = "0x4E30D80")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x600108E")]
	[Address(RVA = "0x4E30E10", Offset = "0x4E30E10", VA = "0x4E30E10")]
	internal void Validate()
	{
	}

	[Token(Token = "0x600108F")]
	[Address(RVA = "0x4E31260", Offset = "0x4E31260", VA = "0x4E31260", Slot = "4")]
	public bool Equals(RendererListParams other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001090")]
	[Address(RVA = "0x4E31620", Offset = "0x4E31620", VA = "0x4E31620", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001091")]
	[Address(RVA = "0x4E316D0", Offset = "0x4E316D0", VA = "0x4E316D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
