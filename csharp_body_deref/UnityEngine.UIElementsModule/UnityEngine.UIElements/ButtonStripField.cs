// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ButtonStripField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F31A50", Offset = "0x4F31A50", VA = "0x4F31A50")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000065")]
	public new class UxmlTraits : BaseField<int>.UxmlTraits
	{
		[Token(Token = "0x600034E")]
		[Address(RVA = "0x4F31A90", Offset = "0x4F31A90", VA = "0x4F31A90")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x450")]
	private List<Button> m_Buttons;

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x4F31850", Offset = "0x4F31850", VA = "0x4F31850")]
	public ButtonStripField()
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x4F31910", Offset = "0x4F31910", VA = "0x4F31910", Slot = "114")]
	public override void SetValueWithoutNotify(int newValue)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x4F31980", Offset = "0x4F31980", VA = "0x4F31980")]
	private void RefreshButtonsState()
	{
	}
}
