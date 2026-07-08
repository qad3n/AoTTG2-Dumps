using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000A1")]
public class HelpBox : VisualElement
{
	[Token(Token = "0x20000A2")]
	public new class UxmlFactory : UxmlFactory<HelpBox, UxmlTraits>
	{
		[Token(Token = "0x6000451")]
		[Address(RVA = "0x4C190E0", Offset = "0x4C190E0", VA = "0x4C190E0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000A3")]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x400027C")]
		[FieldOffset(Offset = "0x70")]
		private UxmlStringAttributeDescription m_Text;

		[Token(Token = "0x400027D")]
		[FieldOffset(Offset = "0x78")]
		private UxmlEnumAttributeDescription<HelpBoxMessageType> m_MessageType;

		[Token(Token = "0x6000452")]
		[Address(RVA = "0x4C19120", Offset = "0x4C19120", VA = "0x4C19120", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000453")]
		[Address(RVA = "0x4C19300", Offset = "0x4C19300", VA = "0x4C19300")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000270")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty textProperty;

	[Token(Token = "0x4000271")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly DataBindingProperty messageTypeProperty;

	[Token(Token = "0x4000272")]
	[FieldOffset(Offset = "0x140")]
	public static readonly string ussClassName;

	[Token(Token = "0x4000273")]
	[FieldOffset(Offset = "0x148")]
	public static readonly string labelUssClassName;

	[Token(Token = "0x4000274")]
	[FieldOffset(Offset = "0x150")]
	public static readonly string iconUssClassName;

	[Token(Token = "0x4000275")]
	[FieldOffset(Offset = "0x158")]
	public static readonly string iconInfoUssClassName;

	[Token(Token = "0x4000276")]
	[FieldOffset(Offset = "0x160")]
	public static readonly string iconwarningUssClassName;

	[Token(Token = "0x4000277")]
	[FieldOffset(Offset = "0x168")]
	public static readonly string iconErrorUssClassName;

	[Token(Token = "0x4000278")]
	[FieldOffset(Offset = "0x3D8")]
	private HelpBoxMessageType m_HelpBoxMessageType;

	[Token(Token = "0x4000279")]
	[FieldOffset(Offset = "0x3E0")]
	private VisualElement m_Icon;

	[Token(Token = "0x400027A")]
	[FieldOffset(Offset = "0x3E8")]
	private string m_IconClass;

	[Token(Token = "0x400027B")]
	[FieldOffset(Offset = "0x3F0")]
	private Label m_Label;

	[Token(Token = "0x17000099")]
	[CreateProperty]
	public string text
	{
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x4C188F0", Offset = "0x4C188F0", VA = "0x4C188F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x4C18920", Offset = "0x4C18920", VA = "0x4C18920")]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	[CreateProperty]
	public HelpBoxMessageType messageType
	{
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x4C18A30", Offset = "0x4C18A30", VA = "0x4C18A30")]
		get
		{
			return default(HelpBoxMessageType);
		}
		[Token(Token = "0x600044B")]
		[Address(RVA = "0x4C18A40", Offset = "0x4C18A40", VA = "0x4C18A40")]
		set
		{
		}
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x4C18BA0", Offset = "0x4C18BA0", VA = "0x4C18BA0")]
	public HelpBox()
	{
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x4C18BC0", Offset = "0x4C18BC0", VA = "0x4C18BC0")]
	public HelpBox(string text, HelpBoxMessageType messageType)
	{
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x4C18D50", Offset = "0x4C18D50", VA = "0x4C18D50")]
	private string GetIconClass(HelpBoxMessageType messageType)
	{
		return null;
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x4C18AE0", Offset = "0x4C18AE0", VA = "0x4C18AE0")]
	private void UpdateIcon(HelpBoxMessageType messageType)
	{
	}
}
