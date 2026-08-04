// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleBackground
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200036F")]
public struct StyleBackground : IStyleValue<Background>, IEquatable<StyleBackground>
{
	[Token(Token = "0x4000A69")]
	[FieldOffset(Offset = "0x0")]
	private Background m_Value;

	[Token(Token = "0x4000A6A")]
	[FieldOffset(Offset = "0x20")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x1700062C")]
	public Background value
	{
		[Token(Token = "0x60015F0")]
		[Address(RVA = "0x50ADA00", Offset = "0x50ADA00", VA = "0x50ADA00", Slot = "4")]
		get
		{
			return default(Background);
		}
		[Token(Token = "0x60015F1")]
		[Address(RVA = "0x50ADA40", Offset = "0x50ADA40", VA = "0x50ADA40", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700062D")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60015F2")]
		[Address(RVA = "0x50ADA70", Offset = "0x50ADA70", VA = "0x50ADA70", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60015F3")]
		[Address(RVA = "0x50ADA80", Offset = "0x50ADA80", VA = "0x50ADA80", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60015F4")]
	[Address(RVA = "0x50ADA90", Offset = "0x50ADA90", VA = "0x50ADA90")]
	public StyleBackground(Texture2D v)
	{
	}

	[Token(Token = "0x60015F5")]
	[Address(RVA = "0x50ADB30", Offset = "0x50ADB30", VA = "0x50ADB30")]
	public StyleBackground(Sprite v)
	{
	}

	[Token(Token = "0x60015F6")]
	[Address(RVA = "0x50ADBD0", Offset = "0x50ADBD0", VA = "0x50ADBD0")]
	public StyleBackground(VectorImage v)
	{
	}

	[Token(Token = "0x60015F7")]
	[Address(RVA = "0x50ADAE0", Offset = "0x50ADAE0", VA = "0x50ADAE0")]
	internal StyleBackground(Texture2D v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60015F8")]
	[Address(RVA = "0x50ADB80", Offset = "0x50ADB80", VA = "0x50ADB80")]
	internal StyleBackground(Sprite v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60015F9")]
	[Address(RVA = "0x50ADC20", Offset = "0x50ADC20", VA = "0x50ADC20")]
	internal StyleBackground(VectorImage v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60015FA")]
	[Address(RVA = "0x50ADC70", Offset = "0x50ADC70", VA = "0x50ADC70")]
	internal StyleBackground(Background v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60015FB")]
	[Address(RVA = "0x50ADC90", Offset = "0x50ADC90", VA = "0x50ADC90")]
	public static bool operator ==(StyleBackground lhs, StyleBackground rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015FC")]
	[Address(RVA = "0x50ADCE0", Offset = "0x50ADCE0", VA = "0x50ADCE0", Slot = "8")]
	public bool Equals(StyleBackground other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015FD")]
	[Address(RVA = "0x50ADD80", Offset = "0x50ADD80", VA = "0x50ADD80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015FE")]
	[Address(RVA = "0x50ADE80", Offset = "0x50ADE80", VA = "0x50ADE80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60015FF")]
	[Address(RVA = "0x50ADEA0", Offset = "0x50ADEA0", VA = "0x50ADEA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
