// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ToggleButtonGroup
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000165")]
[UxmlElement(null, new Type[] { typeof(Button) })]
public class ToggleButtonGroup : BaseField<ToggleButtonGroupState>
{
	[Token(Token = "0x2000166")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<ToggleButtonGroup, UxmlTraits>
	{
		[Token(Token = "0x6000A54")]
		[Address(RVA = "0x3254BC0", Offset = "0x32531C0", VA = "0x183254BC0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000167")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseField<ToggleButtonGroupState>.UxmlTraits
	{
		[Token(Token = "0x400068F")]
		[FieldOffset(Offset = "0x98")]
		private UxmlBoolAttributeDescription m_IsMultipleSelection;

		[Token(Token = "0x4000690")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlBoolAttributeDescription m_AllowEmptySelection;

		[Token(Token = "0x6000A55")]
		[Address(RVA = "0x3255070", Offset = "0x3253670", VA = "0x183255070", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000A56")]
		[Address(RVA = "0x3255650", Offset = "0x3253C50", VA = "0x183255650")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x2000168")]
	private class ButtonGroupContainer : VisualElement
	{
		[Token(Token = "0x4000691")]
		[FieldOffset(Offset = "0x2C8")]
		private readonly ToggleButtonGroup m_Group;

		[Token(Token = "0x6000A57")]
		[Address(RVA = "0x323EAC0", Offset = "0x323D0C0", VA = "0x18323EAC0")]
		public ButtonGroupContainer(ToggleButtonGroup group)
		{
		}

		[Token(Token = "0x6000A58")]
		[Address(RVA = "0x323EA60", Offset = "0x323D060", VA = "0x18323EA60", Slot = "139")]
		internal override void OnChildAdded(VisualElement ve)
		{
		}

		[Token(Token = "0x6000A59")]
		[Address(RVA = "0x323EA90", Offset = "0x323D090", VA = "0x18323EA90", Slot = "140")]
		internal override void OnChildRemoved(VisualElement ve)
		{
		}
	}

	[Token(Token = "0x400067E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string k_MaxToggleButtonGroupMessage;

	[Token(Token = "0x400067F")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly BindingId isMultipleSelectionProperty;

	[Token(Token = "0x4000680")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly BindingId allowEmptySelectionProperty;

	[Token(Token = "0x4000681")]
	[FieldOffset(Offset = "0x138")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000682")]
	[FieldOffset(Offset = "0x140")]
	public static readonly string containerUssClassName;

	[Token(Token = "0x4000683")]
	[FieldOffset(Offset = "0x148")]
	public static readonly string buttonGroupClassName;

	[Token(Token = "0x4000684")]
	[FieldOffset(Offset = "0x150")]
	public static readonly string buttonClassName;

	[Token(Token = "0x4000685")]
	[FieldOffset(Offset = "0x158")]
	public static readonly string buttonLeftClassName;

	[Token(Token = "0x4000686")]
	[FieldOffset(Offset = "0x160")]
	public static readonly string buttonMidClassName;

	[Token(Token = "0x4000687")]
	[FieldOffset(Offset = "0x168")]
	public static readonly string buttonRightClassName;

	[Token(Token = "0x4000688")]
	[FieldOffset(Offset = "0x170")]
	public static readonly string buttonStandaloneClassName;

	[Token(Token = "0x4000689")]
	[FieldOffset(Offset = "0x178")]
	public static readonly string emptyStateLabelClassName;

	[Token(Token = "0x400068A")]
	[FieldOffset(Offset = "0x360")]
	private VisualElement m_ButtonGroupContainer;

	[Token(Token = "0x400068B")]
	[FieldOffset(Offset = "0x368")]
	private List<Button> m_Buttons;

	[Token(Token = "0x400068C")]
	[FieldOffset(Offset = "0x370")]
	private VisualElement m_EmptyLabel;

	[Token(Token = "0x400068D")]
	[FieldOffset(Offset = "0x378")]
	private bool m_IsMultipleSelection;

	[Token(Token = "0x400068E")]
	[FieldOffset(Offset = "0x379")]
	private bool m_AllowEmptySelection;

	[Token(Token = "0x170001E5")]
	[CreateProperty]
	public bool isMultipleSelection
	{
		[Token(Token = "0x6000A43")]
		[Address(RVA = "0x324B0F0", Offset = "0x32496F0", VA = "0x18324B0F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A44")]
		[Address(RVA = "0x324B360", Offset = "0x3249960", VA = "0x18324B360")]
		set
		{
		}
	}

	[Token(Token = "0x170001E6")]
	[CreateProperty]
	public bool allowEmptySelection
	{
		[Token(Token = "0x6000A45")]
		[Address(RVA = "0x324B0E0", Offset = "0x32496E0", VA = "0x18324B0E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A46")]
		[Address(RVA = "0x324B100", Offset = "0x3249700", VA = "0x18324B100")]
		set
		{
		}
	}

	[Token(Token = "0x170001E7")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x6000A4A")]
		[Address(RVA = "0x32229A0", Offset = "0x3220FA0", VA = "0x1832229A0", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x324ADB0", Offset = "0x32493B0", VA = "0x18324ADB0")]
	public ToggleButtonGroup()
	{
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x324ADF0", Offset = "0x32493F0", VA = "0x18324ADF0")]
	public ToggleButtonGroup(string label)
	{
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x324AE30", Offset = "0x3249430", VA = "0x18324AE30")]
	public ToggleButtonGroup(string label, ToggleButtonGroupState toggleButtonGroupState)
	{
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x3249F60", Offset = "0x3248560", VA = "0x183249F60", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x324A690", Offset = "0x3248C90", VA = "0x18324A690", Slot = "158")]
	protected override void UpdateMixedValueContent()
	{
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x3249FD0", Offset = "0x32485D0", VA = "0x183249FD0", Slot = "159")]
	public override void SetValueWithoutNotify(ToggleButtonGroupState newValue)
	{
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x3249440", Offset = "0x3247A40", VA = "0x183249440")]
	private void OnButtonGroupContainerElementAdded(VisualElement ve)
	{
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x3249880", Offset = "0x3247E80", VA = "0x183249880")]
	private void OnButtonGroupContainerElementRemoved(VisualElement ve)
	{
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x324A1A0", Offset = "0x32487A0", VA = "0x18324A1A0")]
	private void UpdateButtonStates(ToggleButtonGroupState options)
	{
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x3249C90", Offset = "0x3248290", VA = "0x183249C90")]
	private void OnOptionChange(EventBase evt)
	{
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x324A4A0", Offset = "0x3248AA0", VA = "0x18324A4A0")]
	private void UpdateButtonsStyling()
	{
	}
}
