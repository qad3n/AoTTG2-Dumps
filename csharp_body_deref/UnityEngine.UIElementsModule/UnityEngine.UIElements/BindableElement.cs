// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BindableElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F0E2B0", Offset = "0x4F0E2B0", VA = "0x4F0E2B0")]
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
		[Address(RVA = "0x4F0E2F0", Offset = "0x4F0E2F0", VA = "0x4F0E2F0")]
		public UxmlTraits()
		{
		}

		[Token(Token = "0x6000064")]
		[Address(RVA = "0x4F0E390", Offset = "0x4F0E390", VA = "0x4F0E390", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}
	}

	[Token(Token = "0x17000012")]
	public IBinding binding
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x4F0E210", Offset = "0x4F0E210", VA = "0x4F0E210", Slot = "98")]
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
		[Address(RVA = "0x4F0E220", Offset = "0x4F0E220", VA = "0x4F0E220", Slot = "99")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4F0E240", Offset = "0x4F0E240", VA = "0x4F0E240")]
	public BindableElement()
	{
	}
}
