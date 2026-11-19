// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Glyph
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.TextCore.LowLevel;

namespace UnityEngine.TextCore;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000006")]
[UnityEngine.Scripting.UsedByNativeCode]
public class Glyph
{
	[Token(Token = "0x4000026")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("index")]
	[SerializeField]
	private uint m_Index;

	[Token(Token = "0x4000027")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	[UnityEngine.Bindings.NativeName("metrics")]
	[SerializeField]
	private GlyphMetrics m_Metrics;

	[Token(Token = "0x4000028")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("glyphRect")]
	private GlyphRect m_GlyphRect;

	[Token(Token = "0x4000029")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("scale")]
	private float m_Scale;

	[Token(Token = "0x400002A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	[UnityEngine.Bindings.NativeName("atlasIndex")]
	[SerializeField]
	private int m_AtlasIndex;

	[Token(Token = "0x400002B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[UnityEngine.Bindings.NativeName("type")]
	[SerializeField]
	private GlyphClassDefinitionType m_ClassDefinitionType;

	[Token(Token = "0x1700001F")]
	public uint index
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x69F7BD0", Offset = "0x69F6BD0", VA = "0x69F7BD0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x69F7BE0", Offset = "0x69F6BE0", VA = "0x69F7BE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public GlyphMetrics metrics
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x69F7BF0", Offset = "0x69F6BF0", VA = "0x69F7BF0")]
		get
		{
			return default(GlyphMetrics);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x69F7C10", Offset = "0x69F6C10", VA = "0x69F7C10")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public GlyphRect glyphRect
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x69F7C30", Offset = "0x69F6C30", VA = "0x69F7C30")]
		get
		{
			return default(GlyphRect);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x69F7C40", Offset = "0x69F6C40", VA = "0x69F7C40")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public float scale
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x69F7C50", Offset = "0x69F6C50", VA = "0x69F7C50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x69F7C60", Offset = "0x69F6C60", VA = "0x69F7C60")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public int atlasIndex
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x69F7C70", Offset = "0x69F6C70", VA = "0x69F7C70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x69F7C80", Offset = "0x69F6C80", VA = "0x69F7C80")]
		set
		{
		}
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x69F7C90", Offset = "0x69F6C90", VA = "0x69F7C90")]
	public Glyph()
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x69F7CC0", Offset = "0x69F6CC0", VA = "0x69F7CC0")]
	internal Glyph(GlyphMarshallingStruct glyphStruct)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x69F7D80", Offset = "0x69F6D80", VA = "0x69F7D80")]
	public Glyph(uint index, GlyphMetrics metrics, GlyphRect glyphRect, float scale, int atlasIndex)
	{
	}
}
