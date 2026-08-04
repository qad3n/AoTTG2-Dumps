// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSelectorPart
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x50B76F0", Offset = "0x50B76F0", VA = "0x50B76F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000683")]
	public StyleSelectorType type
	{
		[Token(Token = "0x600184B")]
		[Address(RVA = "0x50B76E0", Offset = "0x50B76E0", VA = "0x50B76E0")]
		get
		{
			return default(StyleSelectorType);
		}
		[Token(Token = "0x600184C")]
		[Address(RVA = "0x50B8340", Offset = "0x50B8340", VA = "0x50B8340")]
		internal set
		{
		}
	}

	[Token(Token = "0x600184D")]
	[Address(RVA = "0x50B8220", Offset = "0x50B8220", VA = "0x50B8220", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600184E")]
	[Address(RVA = "0x50B8350", Offset = "0x50B8350", VA = "0x50B8350")]
	public static StyleSelectorPart CreateClass(string className)
	{
		return default(StyleSelectorPart);
	}

	[Token(Token = "0x600184F")]
	[Address(RVA = "0x50B83A0", Offset = "0x50B83A0", VA = "0x50B83A0")]
	public static StyleSelectorPart CreateId(string Id)
	{
		return default(StyleSelectorPart);
	}

	[Token(Token = "0x6001850")]
	[Address(RVA = "0x50B83F0", Offset = "0x50B83F0", VA = "0x50B83F0")]
	public static StyleSelectorPart CreatePredicate(object predicate)
	{
		return default(StyleSelectorPart);
	}
}
