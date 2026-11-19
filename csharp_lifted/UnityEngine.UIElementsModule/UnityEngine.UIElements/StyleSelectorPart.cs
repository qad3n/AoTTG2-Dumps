// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSelectorPart
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6B1F940", Offset = "0x6B1E940", VA = "0x6B1F940")]
		get
		{
			return null;
		}
		[Token(Token = "0x600229D")]
		[Address(RVA = "0x6B21F20", Offset = "0x6B20F20", VA = "0x6B21F20")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x1700092D")]
	public StyleSelectorType type
	{
		[Token(Token = "0x600229E")]
		[Address(RVA = "0x6B1F170", Offset = "0x6B1E170", VA = "0x6B1F170")]
		get
		{
			return default(StyleSelectorType);
		}
		[Token(Token = "0x600229F")]
		[Address(RVA = "0x6B21F30", Offset = "0x6B20F30", VA = "0x6B21F30")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x60022A0")]
	[Address(RVA = "0x6B21EB0", Offset = "0x6B20EB0", VA = "0x6B21EB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60022A1")]
	[Address(RVA = "0x6B21F40", Offset = "0x6B20F40", VA = "0x6B21F40")]
	public static StyleSelectorPart CreateClass(string className)
	{
		return default(StyleSelectorPart);
	}

	[Token(Token = "0x60022A2")]
	[Address(RVA = "0x6B21F90", Offset = "0x6B20F90", VA = "0x6B21F90")]
	public static StyleSelectorPart CreateId(string Id)
	{
		return default(StyleSelectorPart);
	}

	[Token(Token = "0x60022A3")]
	[Address(RVA = "0x6B21FE0", Offset = "0x6B20FE0", VA = "0x6B21FE0")]
	public static StyleSelectorPart CreatePredicate(object predicate)
	{
		return default(StyleSelectorPart);
	}
}
