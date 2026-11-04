// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleRotate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000420")]
public struct StyleRotate : IStyleValue<Rotate>, IEquatable<StyleRotate>
{
	[Token(Token = "0x4000DD6")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Rotate m_Value;

	[Token(Token = "0x4000DD7")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008DD")]
	public Rotate value
	{
		[Token(Token = "0x600208D")]
		[Address(RVA = "0x3117700", Offset = "0x3115D00", VA = "0x183117700", Slot = "4")]
		get
		{
			return default(Rotate);
		}
		[Token(Token = "0x600208E")]
		[Address(RVA = "0x31176C0", Offset = "0x3115CC0", VA = "0x1831176C0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008DE")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x600208F")]
		[Address(RVA = "0xB3E0C0", Offset = "0xB3C6C0", VA = "0x180B3E0C0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6002090")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6002091")]
	[Address(RVA = "0x31176C0", Offset = "0x3115CC0", VA = "0x1831176C0")]
	public StyleRotate(Rotate v)
	{
	}

	[Token(Token = "0x6002092")]
	[Address(RVA = "0x31176B0", Offset = "0x3115CB0", VA = "0x1831176B0")]
	public StyleRotate(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002093")]
	[Address(RVA = "0x31176E0", Offset = "0x3115CE0", VA = "0x1831176E0")]
	internal StyleRotate(Rotate v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002094")]
	[Address(RVA = "0x3117800", Offset = "0x3115E00", VA = "0x183117800")]
	public static bool operator ==(StyleRotate lhs, StyleRotate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002095")]
	[Address(RVA = "0x3117960", Offset = "0x3115F60", VA = "0x183117960")]
	public static implicit operator StyleRotate(StyleKeyword keyword)
	{
		return default(StyleRotate);
	}

	[Token(Token = "0x6002096")]
	[Address(RVA = "0x3117920", Offset = "0x3115F20", VA = "0x183117920")]
	public static implicit operator StyleRotate(Rotate v)
	{
		return default(StyleRotate);
	}

	[Token(Token = "0x6002097")]
	[Address(RVA = "0x31174F0", Offset = "0x3115AF0", VA = "0x1831174F0", Slot = "8")]
	public bool Equals(StyleRotate other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002098")]
	[Address(RVA = "0x3117450", Offset = "0x3115A50", VA = "0x183117450", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002099")]
	[Address(RVA = "0x3117620", Offset = "0x3115C20", VA = "0x183117620", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600209A")]
	[Address(RVA = "0x3117640", Offset = "0x3115C40", VA = "0x183117640", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
