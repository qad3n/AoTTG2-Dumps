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

[Token(Token = "0x2000086")]
public class DropdownField : PopupField<string>
{
	[Token(Token = "0x2000087")]
	public new class UxmlFactory : UxmlFactory<DropdownField, UxmlTraits>
	{
		[Token(Token = "0x60003CD")]
		[Address(RVA = "0x4F383A0", Offset = "0x4F383A0", VA = "0x4F383A0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000088")]
	public new class UxmlTraits : BaseField<string>.UxmlTraits
	{
		[Token(Token = "0x4000221")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private UxmlIntAttributeDescription m_Index;

		[Token(Token = "0x4000222")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private UxmlStringAttributeDescription m_Choices;

		[Token(Token = "0x60003CE")]
		[Address(RVA = "0x4F383E0", Offset = "0x4F383E0", VA = "0x4F383E0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x4F38590", Offset = "0x4F38590", VA = "0x4F38590")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x4F38230", Offset = "0x4F38230", VA = "0x4F38230")]
	public DropdownField()
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x4F38290", Offset = "0x4F38290", VA = "0x4F38290")]
	public DropdownField(string label)
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x4F38300", Offset = "0x4F38300", VA = "0x4F38300")]
	public DropdownField(string label, List<string> choices, int defaultIndex, [Optional] Func<string, string> formatSelectedValueCallback, [Optional] Func<string, string> formatListItemCallback)
	{
	}
}
