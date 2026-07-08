using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000018")]
public class BindableElement : VisualElement, IBindable
{
	[Token(Token = "0x2000019")]
	public new class UxmlFactory : UxmlFactory<BindableElement, UxmlTraits>
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x4BE6980", Offset = "0x4BE6980", VA = "0x4BE6980")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200001A")]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x400002F")]
		[FieldOffset(Offset = "0x70")]
		private UxmlStringAttributeDescription m_PropertyPath;

		[Token(Token = "0x6000063")]
		[Address(RVA = "0x4BE69C0", Offset = "0x4BE69C0", VA = "0x4BE69C0")]
		public UxmlTraits()
		{
		}

		[Token(Token = "0x6000064")]
		[Address(RVA = "0x4BE6A60", Offset = "0x4BE6A60", VA = "0x4BE6A60", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}
	}

	[Token(Token = "0x17000012")]
	public IBinding binding
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x4BE68E0", Offset = "0x4BE68E0", VA = "0x4BE68E0", Slot = "98")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000013")]
	public string bindingPath
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x4BE68F0", Offset = "0x4BE68F0", VA = "0x4BE68F0", Slot = "99")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4BE6910", Offset = "0x4BE6910", VA = "0x4BE6910")]
	public BindableElement()
	{
	}
}
