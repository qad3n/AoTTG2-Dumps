using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000092")]
public class Foldout : BindableElement, INotifyValueChanged<bool>
{
	[Token(Token = "0x2000093")]
	public new class UxmlFactory : UxmlFactory<Foldout, UxmlTraits>
	{
		[Token(Token = "0x6000407")]
		[Address(RVA = "0x4C14910", Offset = "0x4C14910", VA = "0x4C14910")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000094")]
	public new class UxmlTraits : BindableElement.UxmlTraits
	{
		[Token(Token = "0x4000248")]
		[FieldOffset(Offset = "0x78")]
		private UxmlStringAttributeDescription m_Text;

		[Token(Token = "0x4000249")]
		[FieldOffset(Offset = "0x80")]
		private UxmlBoolAttributeDescription m_Value;

		[Token(Token = "0x6000408")]
		[Address(RVA = "0x4C14950", Offset = "0x4C14950", VA = "0x4C14950", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000409")]
		[Address(RVA = "0x4C14AB0", Offset = "0x4C14AB0", VA = "0x4C14AB0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty textProperty;

	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly DataBindingProperty valueProperty;

	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x3E8")]
	private Toggle m_Toggle;

	[Token(Token = "0x400023D")]
	[FieldOffset(Offset = "0x3F0")]
	private VisualElement m_Container;

	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0x3F8")]
	[SerializeField]
	[DontCreateProperty]
	private bool m_Value;

	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0x140")]
	public static readonly string ussClassName;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0x148")]
	public static readonly string toggleUssClassName;

	[Token(Token = "0x4000241")]
	[FieldOffset(Offset = "0x150")]
	public static readonly string contentUssClassName;

	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0x158")]
	public static readonly string inputUssClassName;

	[Token(Token = "0x4000243")]
	[FieldOffset(Offset = "0x160")]
	public static readonly string checkmarkUssClassName;

	[Token(Token = "0x4000244")]
	[FieldOffset(Offset = "0x168")]
	public static readonly string textUssClassName;

	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x170")]
	internal static readonly string toggleInspectorUssClassName;

	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x178")]
	internal static readonly string ussFoldoutDepthClassName;

	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0x180")]
	internal static readonly int ussFoldoutMaxDepth;

	[Token(Token = "0x17000090")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x4C13970", Offset = "0x4C13970", VA = "0x4C13970", Slot = "97")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000091")]
	[CreateProperty]
	public string text
	{
		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x4C13980", Offset = "0x4C13980", VA = "0x4C13980")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003FE")]
		[Address(RVA = "0x4C139A0", Offset = "0x4C139A0", VA = "0x4C139A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000092")]
	[CreateProperty]
	public bool value
	{
		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x4C13B60", Offset = "0x4C13B60", VA = "0x4C13B60", Slot = "100")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x4C13B70", Offset = "0x4C13B70", VA = "0x4C13B70", Slot = "101")]
		set
		{
		}
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x4C13E00", Offset = "0x4C13E00", VA = "0x4C13E00", Slot = "102")]
	public void SetValueWithoutNotify(bool newValue)
	{
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x4C13F60", Offset = "0x4C13F60", VA = "0x4C13F60", Slot = "94")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x4C13FA0", Offset = "0x4C13FA0", VA = "0x4C13FA0")]
	public Foldout()
	{
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x4C14320", Offset = "0x4C14320", VA = "0x4C14320")]
	private void OnAttachToPanel(AttachToPanelEvent evt)
	{
	}
}
