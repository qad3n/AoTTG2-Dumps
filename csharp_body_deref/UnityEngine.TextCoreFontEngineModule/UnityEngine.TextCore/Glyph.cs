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
	[UnityEngine.Bindings.NativeName("scale")]
	[SerializeField]
	private float m_Scale;

	[Token(Token = "0x400002A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("atlasIndex")]
	private int m_AtlasIndex;

	[Token(Token = "0x400002B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[UnityEngine.Bindings.NativeName("type")]
	[SerializeField]
	private GlyphClassDefinitionType m_ClassDefinitionType;

	[Token(Token = "0x1700001F")]
	public uint index
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x4B7BDF0", Offset = "0x4B7BDF0", VA = "0x4B7BDF0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x4B7BE00", Offset = "0x4B7BE00", VA = "0x4B7BE00")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public GlyphMetrics metrics
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x4B7BE10", Offset = "0x4B7BE10", VA = "0x4B7BE10")]
		get
		{
			return default(GlyphMetrics);
		}
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x4B7BE30", Offset = "0x4B7BE30", VA = "0x4B7BE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public GlyphRect glyphRect
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x4B7BE50", Offset = "0x4B7BE50", VA = "0x4B7BE50")]
		get
		{
			return default(GlyphRect);
		}
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x4B7BE60", Offset = "0x4B7BE60", VA = "0x4B7BE60")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public float scale
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x4B7BE70", Offset = "0x4B7BE70", VA = "0x4B7BE70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x4B7BE80", Offset = "0x4B7BE80", VA = "0x4B7BE80")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public int atlasIndex
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x4B7BE90", Offset = "0x4B7BE90", VA = "0x4B7BE90")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x4B7BEA0", Offset = "0x4B7BEA0", VA = "0x4B7BEA0")]
		set
		{
		}
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4B7BEB0", Offset = "0x4B7BEB0", VA = "0x4B7BEB0")]
	public Glyph()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4B7BEE0", Offset = "0x4B7BEE0", VA = "0x4B7BEE0")]
	internal Glyph(GlyphMarshallingStruct glyphStruct)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4B7BFA0", Offset = "0x4B7BFA0", VA = "0x4B7BFA0")]
	public Glyph(uint index, GlyphMetrics metrics, GlyphRect glyphRect, float scale, int atlasIndex)
	{
	}
}
