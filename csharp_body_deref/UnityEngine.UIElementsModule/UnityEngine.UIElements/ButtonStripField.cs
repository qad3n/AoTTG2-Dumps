using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000063")]
internal class ButtonStripField : BaseField<int>
{
	[Token(Token = "0x2000064")]
	public new class UxmlFactory : UxmlFactory<ButtonStripField, UxmlTraits>
	{
		[Token(Token = "0x600034D")]
		[Address(RVA = "0x4C0A120", Offset = "0x4C0A120", VA = "0x4C0A120")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000065")]
	public new class UxmlTraits : BaseField<int>.UxmlTraits
	{
		[Token(Token = "0x600034E")]
		[Address(RVA = "0x4C0A160", Offset = "0x4C0A160", VA = "0x4C0A160")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x450")]
	private List<Button> m_Buttons;

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x4C09F20", Offset = "0x4C09F20", VA = "0x4C09F20")]
	public ButtonStripField()
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x4C09FE0", Offset = "0x4C09FE0", VA = "0x4C09FE0", Slot = "114")]
	public override void SetValueWithoutNotify(int newValue)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x4C0A050", Offset = "0x4C0A050", VA = "0x4C0A050")]
	private void RefreshButtonsState()
	{
	}
}
