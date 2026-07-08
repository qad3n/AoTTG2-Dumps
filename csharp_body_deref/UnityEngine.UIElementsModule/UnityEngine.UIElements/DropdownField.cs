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
		[Address(RVA = "0x4C10A70", Offset = "0x4C10A70", VA = "0x4C10A70")]
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
		[Address(RVA = "0x4C10AB0", Offset = "0x4C10AB0", VA = "0x4C10AB0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x4C10C60", Offset = "0x4C10C60", VA = "0x4C10C60")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x4C10900", Offset = "0x4C10900", VA = "0x4C10900")]
	public DropdownField()
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x4C10960", Offset = "0x4C10960", VA = "0x4C10960")]
	public DropdownField(string label)
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x4C109D0", Offset = "0x4C109D0", VA = "0x4C109D0")]
	public DropdownField(string label, List<string> choices, int defaultIndex, [Optional] Func<string, string> formatSelectedValueCallback, [Optional] Func<string, string> formatListItemCallback)
	{
	}
}
