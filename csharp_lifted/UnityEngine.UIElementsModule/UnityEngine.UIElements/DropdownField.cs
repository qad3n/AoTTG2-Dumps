// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DropdownField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000C2")]
public class DropdownField : PopupField<string>
{
	[Token(Token = "0x20000C3")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<DropdownField, UxmlTraits>
	{
		[Token(Token = "0x600059D")]
		[Address(RVA = "0x6BDC690", Offset = "0x6BDB690", VA = "0x6BDC690")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000C4")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseField<string>.UxmlTraits
	{
		[Token(Token = "0x400034C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		private UxmlIntAttributeDescription m_Index;

		[Token(Token = "0x400034D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
		private UxmlStringAttributeDescription m_Choices;

		[Token(Token = "0x600059E")]
		[Address(RVA = "0x6BDC6D0", Offset = "0x6BDB6D0", VA = "0x6BDC6D0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x600059F")]
		[Address(RVA = "0x6BDC890", Offset = "0x6BDB890", VA = "0x6BDC890")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x6BDC520", Offset = "0x6BDB520", VA = "0x6BDC520")]
	public DropdownField()
	{
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x6BDC580", Offset = "0x6BDB580", VA = "0x6BDC580")]
	public DropdownField(string label)
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x6BDC5F0", Offset = "0x6BDB5F0", VA = "0x6BDC5F0")]
	public DropdownField(string label, List<string> choices, int defaultIndex, [Optional] Func<string, string> formatSelectedValueCallback, [Optional] Func<string, string> formatListItemCallback)
	{
	}
}
