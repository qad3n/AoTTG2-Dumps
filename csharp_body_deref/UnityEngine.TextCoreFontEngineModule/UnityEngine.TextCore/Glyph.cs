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
		[Address(RVA = "0x1CBB700", Offset = "0x1CB9D00", VA = "0x181CBB700")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public GlyphMetrics metrics
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x1536FE0", Offset = "0x15355E0", VA = "0x181536FE0")]
		get
		{
			return default(GlyphMetrics);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x3002E50", Offset = "0x3001450", VA = "0x183002E50")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public GlyphRect glyphRect
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x2F8D0F0", Offset = "0x2F8B6F0", VA = "0x182F8D0F0")]
		get
		{
			return default(GlyphRect);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x1B040F0", Offset = "0x1B026F0", VA = "0x181B040F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public float scale
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x2FC65D0", Offset = "0x2FC4BD0", VA = "0x182FC65D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x1ED2F30", Offset = "0x1ED1530", VA = "0x181ED2F30")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public int atlasIndex
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x3002E40", Offset = "0x3001440", VA = "0x183002E40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x1CFE070", Offset = "0x1CFC670", VA = "0x181CFE070")]
		set
		{
		}
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x3002E00", Offset = "0x3001400", VA = "0x183002E00")]
	public Glyph()
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x3002D60", Offset = "0x3001360", VA = "0x183002D60")]
	internal Glyph(GlyphMarshallingStruct glyphStruct)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x3002DB0", Offset = "0x30013B0", VA = "0x183002DB0")]
	public Glyph(uint index, GlyphMetrics metrics, GlyphRect glyphRect, float scale, int atlasIndex)
	{
	}
}
