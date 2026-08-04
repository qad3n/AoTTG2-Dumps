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
		[Address(RVA = "0x4EA3350", Offset = "0x4EA3350", VA = "0x4EA3350")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000016")]
	public int y
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x4EA3360", Offset = "0x4EA3360", VA = "0x4EA3360")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000017")]
	public int width
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x4EA3370", Offset = "0x4EA3370", VA = "0x4EA3370")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000018")]
	public int height
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x4EA3380", Offset = "0x4EA3380", VA = "0x4EA3380")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000019")]
	public static GlyphRect zero
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x4EA3390", Offset = "0x4EA3390", VA = "0x4EA3390")]
		get
		{
			return default(GlyphRect);
		}
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4EA33E0", Offset = "0x4EA33E0", VA = "0x4EA33E0")]
	public GlyphRect(int x, int y, int width, int height)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4EA33F0", Offset = "0x4EA33F0", VA = "0x4EA33F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4EA3440", Offset = "0x4EA3440", VA = "0x4EA3440", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4EA34A0", Offset = "0x4EA34A0", VA = "0x4EA34A0", Slot = "4")]
	public bool Equals(GlyphRect other)
	{
		return default(bool);
	}
}
