// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ButtonStripField
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x31E3A00", Offset = "0x31E2000", VA = "0x1831E3A00")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000A1")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseField<int>.UxmlTraits
	{
		[Token(Token = "0x600051E")]
		[Address(RVA = "0x31E76C0", Offset = "0x31E5CC0", VA = "0x1831E76C0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40002EA")]
	[FieldOffset(Offset = "0x358")]
	private readonly List<Button> m_Buttons;

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x31CE1D0", Offset = "0x31CC7D0", VA = "0x1831CE1D0")]
	public ButtonStripField()
	{
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x31CE0A0", Offset = "0x31CC6A0", VA = "0x1831CE0A0", Slot = "159")]
	public override void SetValueWithoutNotify(int newValue)
	{
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x31CDFD0", Offset = "0x31CC5D0", VA = "0x1831CDFD0")]
	private void RefreshButtonsState()
	{
	}
}
