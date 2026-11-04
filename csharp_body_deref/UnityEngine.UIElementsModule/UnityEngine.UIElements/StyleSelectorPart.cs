// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSelectorPart
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200047F")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal struct StyleSelectorPart
{
	[Token(Token = "0x4000ED0")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private string m_Value;

	[Token(Token = "0x4000ED1")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private StyleSelectorType m_Type;

	[Token(Token = "0x4000ED2")]
	[FieldOffset(Offset = "0x10")]
	internal object tempData;

	[Token(Token = "0x1700092C")]
	public string value
	{
		[Token(Token = "0x600229C")]
		[Address(RVA = "0x737B90", Offset = "0x736190", VA = "0x180737B90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600229D")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x1700092D")]
	public StyleSelectorType type
	{
		[Token(Token = "0x600229E")]
		[Address(RVA = "0xA50840", Offset = "0xA4EE40", VA = "0x180A50840")]
		get
		{
			return default(StyleSelectorType);
		}
		[Token(Token = "0x600229F")]
		[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x60022A0")]
	[Address(RVA = "0x3118470", Offset = "0x3116A70", VA = "0x183118470", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60022A1")]
	[Address(RVA = "0x3118360", Offset = "0x3116960", VA = "0x183118360")]
	public static StyleSelectorPart CreateClass(string className)
	{
		return default(StyleSelectorPart);
	}

	[Token(Token = "0x60022A2")]
	[Address(RVA = "0x31183C0", Offset = "0x31169C0", VA = "0x1831183C0")]
	public static StyleSelectorPart CreateId(string Id)
	{
		return default(StyleSelectorPart);
	}

	[Token(Token = "0x60022A3")]
	[Address(RVA = "0x3118420", Offset = "0x3116A20", VA = "0x183118420")]
	public static StyleSelectorPart CreatePredicate(object predicate)
	{
		return default(StyleSelectorPart);
	}
}
