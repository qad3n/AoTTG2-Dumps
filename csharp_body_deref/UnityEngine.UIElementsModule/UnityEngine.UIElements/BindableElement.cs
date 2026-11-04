// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BindableElement
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200001C")]
public class BindableElement : VisualElement, IBindable
{
	[Token(Token = "0x200001D")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<BindableElement, UxmlTraits>
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x30974C0", Offset = "0x3095AC0", VA = "0x1830974C0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200001E")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x4000041")]
		[FieldOffset(Offset = "0x88")]
		private UxmlStringAttributeDescription m_PropertyPath;

		[Token(Token = "0x600008F")]
		[Address(RVA = "0x3097670", Offset = "0x3095C70", VA = "0x183097670")]
		public UxmlTraits()
		{
		}

		[Token(Token = "0x6000090")]
		[Address(RVA = "0x3097500", Offset = "0x3095B00", VA = "0x183097500", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}
	}

	[Token(Token = "0x400003E")]
	internal const string k_BindingPathTooltip = "Default method to define a path to a serialized property. Most often used for Editor extensions and inspectors.";

	[Token(Token = "0x17000020")]
	public IBinding binding
	{
		[Token(Token = "0x600008B")]
		[Address(RVA = "0xDB75F0", Offset = "0xDB5BF0", VA = "0x180DB75F0", Slot = "141")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000021")]
	public string bindingPath
	{
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x3084970", Offset = "0x3082F70", VA = "0x183084970", Slot = "142")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x3084920", Offset = "0x3082F20", VA = "0x183084920")]
	public BindableElement()
	{
	}
}
