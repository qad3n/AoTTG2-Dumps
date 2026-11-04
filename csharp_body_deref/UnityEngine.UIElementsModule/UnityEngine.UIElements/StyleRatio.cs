// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleRatio
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200041F")]
public struct StyleRatio : IStyleValue<Ratio>, IEquatable<StyleRatio>
{
	[Token(Token = "0x4000DD4")]
	[FieldOffset(Offset = "0x0")]
	private Ratio m_Value;

	[Token(Token = "0x4000DD5")]
	[FieldOffset(Offset = "0x4")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008DB")]
	public Ratio value
	{
		[Token(Token = "0x600207B")]
		[Address(RVA = "0x3117390", Offset = "0x3115990", VA = "0x183117390", Slot = "4")]
		get
		{
			return default(Ratio);
		}
		[Token(Token = "0x600207C")]
		[Address(RVA = "0xD16C20", Offset = "0xD15220", VA = "0x180D16C20", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008DC")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x600207D")]
		[Address(RVA = "0xD161B0", Offset = "0xD147B0", VA = "0x180D161B0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x600207E")]
		[Address(RVA = "0x3117380", Offset = "0x3115980", VA = "0x183117380", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x600207F")]
	[Address(RVA = "0x31140F0", Offset = "0x31126F0", VA = "0x1831140F0")]
	public StyleRatio(Ratio value)
	{
	}

	[Token(Token = "0x6002080")]
	[Address(RVA = "0x3117380", Offset = "0x3115980", VA = "0x183117380")]
	public StyleRatio(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002081")]
	[Address(RVA = "0xD16150", Offset = "0xD14750", VA = "0x180D16150")]
	internal StyleRatio(Ratio value, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002082")]
	[Address(RVA = "0x3117170", Offset = "0x3115770", VA = "0x183117170")]
	public static StyleRatio Auto()
	{
		return default(StyleRatio);
	}

	[Token(Token = "0x6002083")]
	[Address(RVA = "0x310E0E0", Offset = "0x310C6E0", VA = "0x18310E0E0")]
	internal bool IsAuto()
	{
		return default(bool);
	}

	[Token(Token = "0x6002084")]
	[Address(RVA = "0x31173F0", Offset = "0x31159F0", VA = "0x1831173F0")]
	public static implicit operator StyleRatio(float value)
	{
		return default(StyleRatio);
	}

	[Token(Token = "0x6002085")]
	[Address(RVA = "0x3114120", Offset = "0x3112720", VA = "0x183114120")]
	public static implicit operator StyleRatio(Ratio value)
	{
		return default(StyleRatio);
	}

	[Token(Token = "0x6002086")]
	[Address(RVA = "0x3117410", Offset = "0x3115A10", VA = "0x183117410")]
	public static implicit operator Ratio(StyleRatio value)
	{
		return default(Ratio);
	}

	[Token(Token = "0x6002087")]
	[Address(RVA = "0x3117430", Offset = "0x3115A30", VA = "0x183117430")]
	public static implicit operator StyleRatio(StyleKeyword value)
	{
		return default(StyleRatio);
	}

	[Token(Token = "0x6002088")]
	[Address(RVA = "0x31173A0", Offset = "0x31159A0", VA = "0x1831173A0")]
	public static bool operator ==(StyleRatio lhs, StyleRatio rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002089")]
	[Address(RVA = "0x3117190", Offset = "0x3115790", VA = "0x183117190", Slot = "8")]
	public bool Equals(StyleRatio other)
	{
		return default(bool);
	}

	[Token(Token = "0x600208A")]
	[Address(RVA = "0x31171F0", Offset = "0x31157F0", VA = "0x1831171F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600208B")]
	[Address(RVA = "0x31172C0", Offset = "0x31158C0", VA = "0x1831172C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600208C")]
	[Address(RVA = "0x31172E0", Offset = "0x31158E0", VA = "0x1831172E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
