using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003E6")]
public class TemplateContainer : BindableElement
{
	[Token(Token = "0x20003E7")]
	public new class UxmlFactory : UxmlFactory<TemplateContainer, UxmlTraits>
	{
		[Token(Token = "0x17000693")]
		public override string uxmlName
		{
			[Token(Token = "0x60018A6")]
			[Address(RVA = "0x4C280A0", Offset = "0x4C280A0", VA = "0x4C280A0", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000694")]
		public override string uxmlQualifiedName
		{
			[Token(Token = "0x60018A7")]
			[Address(RVA = "0x4C280D0", Offset = "0x4C280D0", VA = "0x4C280D0", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60018A8")]
		[Address(RVA = "0x4C28140", Offset = "0x4C28140", VA = "0x4C28140")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20003E8")]
	public new class UxmlTraits : BindableElement.UxmlTraits
	{
		[Token(Token = "0x4000BCA")]
		[FieldOffset(Offset = "0x78")]
		private UxmlStringAttributeDescription m_Template;

		[Token(Token = "0x60018A9")]
		[Address(RVA = "0x4C28180", Offset = "0x4C28180", VA = "0x4C28180", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60018AA")]
		[Address(RVA = "0x4C288B0", Offset = "0x4C288B0", VA = "0x4C288B0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000BC5")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty templateIdProperty;

	[Token(Token = "0x4000BC6")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly DataBindingProperty templateSourceProperty;

	[Token(Token = "0x4000BC8")]
	[FieldOffset(Offset = "0x3F0")]
	private VisualElement m_ContentContainer;

	[Token(Token = "0x4000BC9")]
	[FieldOffset(Offset = "0x3F8")]
	private VisualTreeAsset m_TemplateSource;

	[Token(Token = "0x17000690")]
	[CreateProperty(ReadOnly = true)]
	public string templateId
	{
		[Token(Token = "0x600189D")]
		[Address(RVA = "0x4C27E60", Offset = "0x4C27E60", VA = "0x4C27E60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600189E")]
		[Address(RVA = "0x4C27E70", Offset = "0x4C27E70", VA = "0x4C27E70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000691")]
	[CreateProperty(ReadOnly = true)]
	public VisualTreeAsset templateSource
	{
		[Token(Token = "0x600189F")]
		[Address(RVA = "0x4C27E90", Offset = "0x4C27E90", VA = "0x4C27E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60018A0")]
		[Address(RVA = "0x4C27EA0", Offset = "0x4C27EA0", VA = "0x4C27EA0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000692")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x60018A3")]
		[Address(RVA = "0x4C27F50", Offset = "0x4C27F50", VA = "0x4C27F50", Slot = "97")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60018A1")]
	[Address(RVA = "0x4C27EC0", Offset = "0x4C27EC0", VA = "0x4C27EC0")]
	public TemplateContainer()
	{
	}

	[Token(Token = "0x60018A2")]
	[Address(RVA = "0x4C27F00", Offset = "0x4C27F00", VA = "0x4C27F00")]
	public TemplateContainer(string templateId)
	{
	}

	[Token(Token = "0x60018A4")]
	[Address(RVA = "0x4C27F60", Offset = "0x4C27F60", VA = "0x4C27F60")]
	internal void SetContentContainer(VisualElement content)
	{
	}
}
