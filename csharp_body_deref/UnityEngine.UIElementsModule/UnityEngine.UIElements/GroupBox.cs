using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000099")]
public class GroupBox : BindableElement, IGroupBox
{
	[Token(Token = "0x200009A")]
	public new class UxmlFactory : UxmlFactory<GroupBox, UxmlTraits>
	{
		[Token(Token = "0x6000433")]
		[Address(RVA = "0x4C17C30", Offset = "0x4C17C30", VA = "0x4C17C30")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200009B")]
	public new class UxmlTraits : BindableElement.UxmlTraits
	{
		[Token(Token = "0x4000266")]
		[FieldOffset(Offset = "0x78")]
		private UxmlStringAttributeDescription m_Text;

		[Token(Token = "0x6000434")]
		[Address(RVA = "0x4C17C70", Offset = "0x4C17C70", VA = "0x4C17C70", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000435")]
		[Address(RVA = "0x4C17D60", Offset = "0x4C17D60", VA = "0x4C17D60")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty textProperty;

	[Token(Token = "0x4000263")]
	[FieldOffset(Offset = "0xA0")]
	public static readonly string ussClassName;

	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0xA8")]
	public static readonly string labelUssClassName;

	[Token(Token = "0x4000265")]
	[FieldOffset(Offset = "0x3E8")]
	private Label m_TitleLabel;

	[Token(Token = "0x17000096")]
	[CreateProperty]
	public string text
	{
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x4C177D0", Offset = "0x4C177D0", VA = "0x4C177D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x4C17800", Offset = "0x4C17800", VA = "0x4C17800")]
		set
		{
		}
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x4C179E0", Offset = "0x4C179E0", VA = "0x4C179E0")]
	public GroupBox()
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x4C17A60", Offset = "0x4C17A60", VA = "0x4C17A60")]
	public GroupBox(string text)
	{
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x4C17AE0", Offset = "0x4C17AE0", VA = "0x4C17AE0", Slot = "100")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionAdded(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x4C17AF0", Offset = "0x4C17AF0", VA = "0x4C17AF0", Slot = "101")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionRemoved(IGroupBoxOption option)
	{
	}
}
