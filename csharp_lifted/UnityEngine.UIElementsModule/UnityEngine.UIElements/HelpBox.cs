// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.HelpBox
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000DE")]
public class HelpBox : VisualElement
{
	[Token(Token = "0x20000DF")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<HelpBox, UxmlTraits>
	{
		[Token(Token = "0x600062F")]
		[Address(RVA = "0x6BE63C0", Offset = "0x6BE53C0", VA = "0x6BE63C0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000E0")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x40003B5")]
		[FieldOffset(Offset = "0x88")]
		private UxmlStringAttributeDescription m_Text;

		[Token(Token = "0x40003B6")]
		[FieldOffset(Offset = "0x90")]
		private UxmlEnumAttributeDescription<HelpBoxMessageType> m_MessageType;

		[Token(Token = "0x6000630")]
		[Address(RVA = "0x6BE6400", Offset = "0x6BE5400", VA = "0x6BE6400", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000631")]
		[Address(RVA = "0x6BE65E0", Offset = "0x6BE55E0", VA = "0x6BE65E0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId textProperty;

	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId messageTypeProperty;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x130")]
	public static readonly string ussClassName;

	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0x138")]
	public static readonly string labelUssClassName;

	[Token(Token = "0x40003AD")]
	[FieldOffset(Offset = "0x140")]
	public static readonly string iconUssClassName;

	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0x148")]
	public static readonly string iconInfoUssClassName;

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x150")]
	public static readonly string iconwarningUssClassName;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x158")]
	public static readonly string iconErrorUssClassName;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x2C8")]
	private HelpBoxMessageType m_HelpBoxMessageType;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x2D0")]
	private VisualElement m_Icon;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x2D8")]
	private string m_IconClass;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x2E0")]
	private Label m_Label;

	[Token(Token = "0x17000100")]
	[CreateProperty]
	public string text
	{
		[Token(Token = "0x6000626")]
		[Address(RVA = "0x6BE5AC0", Offset = "0x6BE4AC0", VA = "0x6BE5AC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000627")]
		[Address(RVA = "0x6BE5AF0", Offset = "0x6BE4AF0", VA = "0x6BE5AF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000101")]
	[CreateProperty]
	public HelpBoxMessageType messageType
	{
		[Token(Token = "0x6000628")]
		[Address(RVA = "0x6BE5BD0", Offset = "0x6BE4BD0", VA = "0x6BE5BD0")]
		get
		{
			return default(HelpBoxMessageType);
		}
		[Token(Token = "0x6000629")]
		[Address(RVA = "0x6BE5BE0", Offset = "0x6BE4BE0", VA = "0x6BE5BE0")]
		set
		{
		}
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x6BE5DD0", Offset = "0x6BE4DD0", VA = "0x6BE5DD0")]
	public HelpBox()
	{
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x6BE5DF0", Offset = "0x6BE4DF0", VA = "0x6BE5DF0")]
	public HelpBox(string text, HelpBoxMessageType messageType)
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x6BE6020", Offset = "0x6BE5020", VA = "0x6BE6020")]
	private string GetIconClass(HelpBoxMessageType messageType)
	{
		return null;
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x6BE5C70", Offset = "0x6BE4C70", VA = "0x6BE5C70")]
	private void UpdateIcon(HelpBoxMessageType messageType)
	{
	}
}
