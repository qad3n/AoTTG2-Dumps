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
		[Address(RVA = "0x4EA3720", Offset = "0x4EA3720", VA = "0x4EA3720")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x4EA3730", Offset = "0x4EA3730", VA = "0x4EA3730")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public GlyphMetrics metrics
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x4EA3740", Offset = "0x4EA3740", VA = "0x4EA3740")]
		get
		{
			return default(GlyphMetrics);
		}
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x4EA3760", Offset = "0x4EA3760", VA = "0x4EA3760")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public GlyphRect glyphRect
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x4EA3780", Offset = "0x4EA3780", VA = "0x4EA3780")]
		get
		{
			return default(GlyphRect);
		}
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x4EA3790", Offset = "0x4EA3790", VA = "0x4EA3790")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public float scale
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x4EA37A0", Offset = "0x4EA37A0", VA = "0x4EA37A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x4EA37B0", Offset = "0x4EA37B0", VA = "0x4EA37B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public int atlasIndex
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x4EA37C0", Offset = "0x4EA37C0", VA = "0x4EA37C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x4EA37D0", Offset = "0x4EA37D0", VA = "0x4EA37D0")]
		set
		{
		}
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4EA37E0", Offset = "0x4EA37E0", VA = "0x4EA37E0")]
	public Glyph()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4EA3810", Offset = "0x4EA3810", VA = "0x4EA3810")]
	internal Glyph(GlyphMarshallingStruct glyphStruct)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4EA38D0", Offset = "0x4EA38D0", VA = "0x4EA38D0")]
	public Glyph(uint index, GlyphMetrics metrics, GlyphRect glyphRect, float scale, int atlasIndex)
	{
	}
}
