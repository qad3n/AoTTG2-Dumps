// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.GlyphRect
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore;

[Serializable]
[Token(Token = "0x2000004")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct GlyphRect : IEquatable<GlyphRect>
{
	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("x")]
	[SerializeField]
	private int m_X;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.NativeName("y")]
	[SerializeField]
	private int m_Y;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("width")]
	[SerializeField]
	private int m_Width;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("height")]
	[SerializeField]
	private int m_Height;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x0")]
	private static readonly GlyphRect s_ZeroGlyphRect;

	[Token(Token = "0x17000015")]
	public int x
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x69F7800", Offset = "0x69F6800", VA = "0x69F7800")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000016")]
	public int y
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x69F7810", Offset = "0x69F6810", VA = "0x69F7810")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000017")]
	public int width
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x69F7820", Offset = "0x69F6820", VA = "0x69F7820")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000018")]
	public int height
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x69F7830", Offset = "0x69F6830", VA = "0x69F7830")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000019")]
	public static GlyphRect zero
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x69F7840", Offset = "0x69F6840", VA = "0x69F7840")]
		get
		{
			return default(GlyphRect);
		}
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x69F7890", Offset = "0x69F6890", VA = "0x69F7890")]
	public GlyphRect(int x, int y, int width, int height)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x69F78A0", Offset = "0x69F68A0", VA = "0x69F78A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x69F78F0", Offset = "0x69F68F0", VA = "0x69F78F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x69F7950", Offset = "0x69F6950", VA = "0x69F7950", Slot = "4")]
	public bool Equals(GlyphRect other)
	{
		return default(bool);
	}
}
