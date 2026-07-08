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
	[SerializeField]
	[UnityEngine.Bindings.NativeName("x")]
	private int m_X;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("y")]
	private int m_Y;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("width")]
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
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x4B7BA20", Offset = "0x4B7BA20", VA = "0x4B7BA20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000016")]
	public int y
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x4B7BA30", Offset = "0x4B7BA30", VA = "0x4B7BA30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000017")]
	public int width
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x4B7BA40", Offset = "0x4B7BA40", VA = "0x4B7BA40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000018")]
	public int height
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x4B7BA50", Offset = "0x4B7BA50", VA = "0x4B7BA50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000019")]
	public static GlyphRect zero
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x4B7BA60", Offset = "0x4B7BA60", VA = "0x4B7BA60")]
		get
		{
			return default(GlyphRect);
		}
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4B7BAB0", Offset = "0x4B7BAB0", VA = "0x4B7BAB0")]
	public GlyphRect(int x, int y, int width, int height)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4B7BAC0", Offset = "0x4B7BAC0", VA = "0x4B7BAC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4B7BB10", Offset = "0x4B7BB10", VA = "0x4B7BB10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4B7BB70", Offset = "0x4B7BB70", VA = "0x4B7BB70", Slot = "4")]
	public bool Equals(GlyphRect other)
	{
		return default(bool);
	}
}
