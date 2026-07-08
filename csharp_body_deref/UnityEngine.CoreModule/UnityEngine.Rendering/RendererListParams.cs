using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002F6")]
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

	[Token(Token = "0x1700029C")]
	internal int numStateBlocks
	{
		[Token(Token = "0x6001089")]
		[Address(RVA = "0x4B09360", Offset = "0x4B09360", VA = "0x4B09360")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029D")]
	internal IntPtr stateBlocksPtr
	{
		[Token(Token = "0x600108A")]
		[Address(RVA = "0x4B093C0", Offset = "0x4B093C0", VA = "0x4B093C0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x1700029E")]
	internal IntPtr tagsValuePtr
	{
		[Token(Token = "0x600108B")]
		[Address(RVA = "0x4B09450", Offset = "0x4B09450", VA = "0x4B09450")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x600108C")]
	[Address(RVA = "0x4B094E0", Offset = "0x4B094E0", VA = "0x4B094E0")]
	internal void Validate()
	{
	}

	[Token(Token = "0x600108D")]
	[Address(RVA = "0x4B09930", Offset = "0x4B09930", VA = "0x4B09930", Slot = "4")]
	public bool Equals(RendererListParams other)
	{
		return default(bool);
	}

	[Token(Token = "0x600108E")]
	[Address(RVA = "0x4B09CF0", Offset = "0x4B09CF0", VA = "0x4B09CF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600108F")]
	[Address(RVA = "0x4B09DA0", Offset = "0x4B09DA0", VA = "0x4B09DA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
