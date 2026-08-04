// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.GroupBox
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F3F560", Offset = "0x4F3F560", VA = "0x4F3F560")]
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
		[Address(RVA = "0x4F3F5A0", Offset = "0x4F3F5A0", VA = "0x4F3F5A0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000435")]
		[Address(RVA = "0x4F3F690", Offset = "0x4F3F690", VA = "0x4F3F690")]
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
		[Address(RVA = "0x4F3F100", Offset = "0x4F3F100", VA = "0x4F3F100")]
		get
		{
			return null;
		}
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x4F3F130", Offset = "0x4F3F130", VA = "0x4F3F130")]
		set
		{
		}
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x4F3F310", Offset = "0x4F3F310", VA = "0x4F3F310")]
	public GroupBox()
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x4F3F390", Offset = "0x4F3F390", VA = "0x4F3F390")]
	public GroupBox(string text)
	{
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x4F3F410", Offset = "0x4F3F410", VA = "0x4F3F410", Slot = "100")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionAdded(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x4F3F420", Offset = "0x4F3F420", VA = "0x4F3F420", Slot = "101")]
	private void UnityEngine_002EUIElements_002EIGroupBox_002EOnOptionRemoved(IGroupBoxOption option)
	{
	}
}
