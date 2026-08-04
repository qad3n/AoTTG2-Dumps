// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TemplateContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x4F4F9D0", Offset = "0x4F4F9D0", VA = "0x4F4F9D0", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000694")]
		public override string uxmlQualifiedName
		{
			[Token(Token = "0x60018A7")]
			[Address(RVA = "0x4F4FA00", Offset = "0x4F4FA00", VA = "0x4F4FA00", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60018A8")]
		[Address(RVA = "0x4F4FA70", Offset = "0x4F4FA70", VA = "0x4F4FA70")]
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
		[Address(RVA = "0x4F4FAB0", Offset = "0x4F4FAB0", VA = "0x4F4FAB0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60018AA")]
		[Address(RVA = "0x4F501E0", Offset = "0x4F501E0", VA = "0x4F501E0")]
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
		[Address(RVA = "0x4F4F790", Offset = "0x4F4F790", VA = "0x4F4F790")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600189E")]
		[Address(RVA = "0x4F4F7A0", Offset = "0x4F4F7A0", VA = "0x4F4F7A0")]
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
		[Address(RVA = "0x4F4F7C0", Offset = "0x4F4F7C0", VA = "0x4F4F7C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60018A0")]
		[Address(RVA = "0x4F4F7D0", Offset = "0x4F4F7D0", VA = "0x4F4F7D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000692")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x60018A3")]
		[Address(RVA = "0x4F4F880", Offset = "0x4F4F880", VA = "0x4F4F880", Slot = "97")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60018A1")]
	[Address(RVA = "0x4F4F7F0", Offset = "0x4F4F7F0", VA = "0x4F4F7F0")]
	public TemplateContainer()
	{
	}

	[Token(Token = "0x60018A2")]
	[Address(RVA = "0x4F4F830", Offset = "0x4F4F830", VA = "0x4F4F830")]
	public TemplateContainer(string templateId)
	{
	}

	[Token(Token = "0x60018A4")]
	[Address(RVA = "0x4F4F890", Offset = "0x4F4F890", VA = "0x4F4F890")]
	internal void SetContentContainer(VisualElement content)
	{
	}
}
