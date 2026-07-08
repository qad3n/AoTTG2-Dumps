using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x20003D5")]
internal struct StyleSelectorPart
{
	[Token(Token = "0x4000B6D")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private string m_Value;

	[Token(Token = "0x4000B6E")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private StyleSelectorType m_Type;

	[Token(Token = "0x4000B6F")]
	[FieldOffset(Offset = "0x10")]
	internal object tempData;

	[Token(Token = "0x17000682")]
	public string value
	{
		[Token(Token = "0x600184A")]
		[Address(RVA = "0x4D8FDC0", Offset = "0x4D8FDC0", VA = "0x4D8FDC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000683")]
	public StyleSelectorType type
	{
		[Token(Token = "0x600184B")]
		[Address(RVA = "0x4D8FDB0", Offset = "0x4D8FDB0", VA = "0x4D8FDB0")]
		get
		{
			return default(StyleSelectorType);
		}
		[Token(Token = "0x600184C")]
		[Address(RVA = "0x4D90A10", Offset = "0x4D90A10", VA = "0x4D90A10")]
		internal set
		{
		}
	}

	[Token(Token = "0x600184D")]
	[Address(RVA = "0x4D908F0", Offset = "0x4D908F0", VA = "0x4D908F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600184E")]
	[Address(RVA = "0x4D90A20", Offset = "0x4D90A20", VA = "0x4D90A20")]
	public static StyleSelectorPart CreateClass(string className)
	{
		return default(StyleSelectorPart);
	}

	[Token(Token = "0x600184F")]
	[Address(RVA = "0x4D90A70", Offset = "0x4D90A70", VA = "0x4D90A70")]
	public static StyleSelectorPart CreateId(string Id)
	{
		return default(StyleSelectorPart);
	}

	[Token(Token = "0x6001850")]
	[Address(RVA = "0x4D90AC0", Offset = "0x4D90AC0", VA = "0x4D90AC0")]
	public static StyleSelectorPart CreatePredicate(object predicate)
	{
		return default(StyleSelectorPart);
	}
}
