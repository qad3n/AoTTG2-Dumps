// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ButtonStripField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200009F")]
internal class ButtonStripField : BaseField<int>
{
	[Token(Token = "0x20000A0")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<ButtonStripField, UxmlTraits>
	{
		[Token(Token = "0x600051D")]
		[Address(RVA = "0x6BD5A10", Offset = "0x6BD4A10", VA = "0x6BD5A10")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000A1")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseField<int>.UxmlTraits
	{
		[Token(Token = "0x600051E")]
		[Address(RVA = "0x6BD5A50", Offset = "0x6BD4A50", VA = "0x6BD5A50")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40002EA")]
	[FieldOffset(Offset = "0x358")]
	private readonly List<Button> m_Buttons;

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x6BD5820", Offset = "0x6BD4820", VA = "0x6BD5820")]
	public ButtonStripField()
	{
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x6BD58E0", Offset = "0x6BD48E0", VA = "0x6BD58E0", Slot = "159")]
	public override void SetValueWithoutNotify(int newValue)
	{
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x6BD5960", Offset = "0x6BD4960", VA = "0x6BD5960")]
	private void RefreshButtonsState()
	{
	}
}
