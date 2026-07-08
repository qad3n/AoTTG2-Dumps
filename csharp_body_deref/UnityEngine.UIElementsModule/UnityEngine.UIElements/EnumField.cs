using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x200008A")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class EnumField : BaseField<Enum>
{
	[Token(Token = "0x200008B")]
	public new class UxmlFactory : UxmlFactory<EnumField, UxmlTraits>
	{
		[Token(Token = "0x60003E6")]
		[Address(RVA = "0x4C129E0", Offset = "0x4C129E0", VA = "0x4C129E0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200008C")]
	public new class UxmlTraits : BaseField<Enum>.UxmlTraits
	{
		[Token(Token = "0x4000232")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private UxmlTypeAttributeDescription<Enum> m_Type;

		[Token(Token = "0x4000233")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private UxmlStringAttributeDescription m_Value;

		[Token(Token = "0x4000234")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		private UxmlBoolAttributeDescription m_IncludeObsoleteValues;

		[Token(Token = "0x60003E7")]
		[Address(RVA = "0x4C12A20", Offset = "0x4C12A20", VA = "0x4C12A20", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x4C12D40", Offset = "0x4C12D40", VA = "0x4C12D40")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000226")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty textProperty;

	[Token(Token = "0x4000227")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x450")]
	private Type m_EnumType;

	[Token(Token = "0x4000228")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x458")]
	private bool m_IncludeObsoleteValues;

	[Token(Token = "0x4000229")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x460")]
	private TextElement m_TextElement;

	[Token(Token = "0x400022A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x468")]
	private VisualElement m_ArrowElement;

	[Token(Token = "0x400022B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x470")]
	private UnityEngine.EnumData m_EnumData;

	[Token(Token = "0x400022C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4B0")]
	internal Func<IGenericMenu> createMenuCallback;

	[Token(Token = "0x400022D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x400022E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public static readonly string textUssClassName;

	[Token(Token = "0x400022F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public static readonly string arrowUssClassName;

	[Token(Token = "0x4000230")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000231")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x1700008B")]
	internal bool includeObsoleteValues
	{
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x4C11380", Offset = "0x4C11380", VA = "0x4C11380")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700008C")]
	[CreateProperty(ReadOnly = true)]
	public string text
	{
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x4C11390", Offset = "0x4C11390", VA = "0x4C11390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x4C113C0", Offset = "0x4C113C0", VA = "0x4C113C0")]
	private void Initialize(Enum defaultValue)
	{
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x4C115B0", Offset = "0x4C115B0", VA = "0x4C115B0")]
	public EnumField()
	{
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x4C115C0", Offset = "0x4C115C0", VA = "0x4C115C0")]
	public EnumField(string label, [Optional] Enum defaultValue)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x4C115A0", Offset = "0x4C115A0", VA = "0x4C115A0")]
	public void Init(Enum defaultValue)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x4C11910", Offset = "0x4C11910", VA = "0x4C11910")]
	public void Init(Enum defaultValue, bool includeObsoleteValues)
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x4C11AC0", Offset = "0x4C11AC0", VA = "0x4C11AC0")]
	internal void PopulateDataFromType(Type enumType)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x4C11C70", Offset = "0x4C11C70", VA = "0x4C11C70", Slot = "114")]
	public override void SetValueWithoutNotify(Enum newValue)
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x4C11BA0", Offset = "0x4C11BA0", VA = "0x4C11BA0")]
	private void UpdateValueLabel(Enum value)
	{
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x4C11D30", Offset = "0x4C11D30", VA = "0x4C11D30")]
	private void OnPointerDownEvent(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x4C11D80", Offset = "0x4C11D80", VA = "0x4C11D80")]
	private void OnPointerMoveEvent(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x4C11E00", Offset = "0x4C11E00", VA = "0x4C11E00")]
	private bool ContainsPointer(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60003DF")]
	private void ProcessPointerDown<T>(PointerEventBase<T> evt) where T : PointerEventBase<T>, new()
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x4C11E70", Offset = "0x4C11E70", VA = "0x4C11E70")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x4C11E90", Offset = "0x4C11E90", VA = "0x4C11E90")]
	private void ShowMenu()
	{
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x4C125A0", Offset = "0x4C125A0", VA = "0x4C125A0")]
	private void ChangeValueFromMenu(object menuItem)
	{
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x4C12610", Offset = "0x4C12610", VA = "0x4C12610", Slot = "113")]
	protected override void UpdateMixedValueContent()
	{
	}
}
