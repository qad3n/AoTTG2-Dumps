// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ToggleButtonGroup
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6C44040", Offset = "0x6C43040", VA = "0x6C44040")]
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
		[Address(RVA = "0x6C44080", Offset = "0x6C43080", VA = "0x6C44080", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000A56")]
		[Address(RVA = "0x6C441F0", Offset = "0x6C431F0", VA = "0x6C441F0")]
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
		[Address(RVA = "0x6C42AC0", Offset = "0x6C41AC0", VA = "0x6C42AC0")]
		public ButtonGroupContainer(ToggleButtonGroup group)
		{
		}

		[Token(Token = "0x6000A58")]
		[Address(RVA = "0x6C44300", Offset = "0x6C43300", VA = "0x6C44300", Slot = "139")]
		internal override void OnChildAdded(VisualElement ve)
		{
		}

		[Token(Token = "0x6000A59")]
		[Address(RVA = "0x6C44320", Offset = "0x6C43320", VA = "0x6C44320", Slot = "140")]
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
		[Address(RVA = "0x6C41F70", Offset = "0x6C40F70", VA = "0x6C41F70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A44")]
		[Address(RVA = "0x6C41F80", Offset = "0x6C40F80", VA = "0x6C41F80")]
		set
		{
		}
	}

	[Token(Token = "0x170001E6")]
	[CreateProperty]
	public bool allowEmptySelection
	{
		[Token(Token = "0x6000A45")]
		[Address(RVA = "0x6C42370", Offset = "0x6C41370", VA = "0x6C42370")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A46")]
		[Address(RVA = "0x6C42380", Offset = "0x6C41380", VA = "0x6C42380")]
		set
		{
		}
	}

	[Token(Token = "0x170001E7")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x6000A4A")]
		[Address(RVA = "0x6C42B30", Offset = "0x6C41B30", VA = "0x6C42B30", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x6C42500", Offset = "0x6C41500", VA = "0x6C42500")]
	public ToggleButtonGroup()
	{
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x6C42510", Offset = "0x6C41510", VA = "0x6C42510")]
	public ToggleButtonGroup(string label)
	{
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x6C42810", Offset = "0x6C41810", VA = "0x6C42810")]
	public ToggleButtonGroup(string label, ToggleButtonGroupState toggleButtonGroupState)
	{
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x6C42B40", Offset = "0x6C41B40", VA = "0x6C42B40", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x6C42D60", Offset = "0x6C41D60", VA = "0x6C42D60", Slot = "158")]
	protected override void UpdateMixedValueContent()
	{
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x6C42F10", Offset = "0x6C41F10", VA = "0x6C42F10", Slot = "159")]
	public override void SetValueWithoutNotify(ToggleButtonGroupState newValue)
	{
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x6C430F0", Offset = "0x6C420F0", VA = "0x6C430F0")]
	private void OnButtonGroupContainerElementAdded(VisualElement ve)
	{
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x6C435F0", Offset = "0x6C425F0", VA = "0x6C435F0")]
	private void OnButtonGroupContainerElementRemoved(VisualElement ve)
	{
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x6C42BA0", Offset = "0x6C41BA0", VA = "0x6C42BA0")]
	private void UpdateButtonStates(ToggleButtonGroupState options)
	{
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x6C438E0", Offset = "0x6C428E0", VA = "0x6C438E0")]
	private void OnOptionChange(EventBase evt)
	{
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x6C43420", Offset = "0x6C42420", VA = "0x6C43420")]
	private void UpdateButtonsStyling()
	{
	}
}
