// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EnumField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F3A310", Offset = "0x4F3A310", VA = "0x4F3A310")]
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
		[Address(RVA = "0x4F3A350", Offset = "0x4F3A350", VA = "0x4F3A350", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x4F3A670", Offset = "0x4F3A670", VA = "0x4F3A670")]
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
		[Address(RVA = "0x4F38CB0", Offset = "0x4F38CB0", VA = "0x4F38CB0")]
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
		[Address(RVA = "0x4F38CC0", Offset = "0x4F38CC0", VA = "0x4F38CC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x4F38CF0", Offset = "0x4F38CF0", VA = "0x4F38CF0")]
	private void Initialize(Enum defaultValue)
	{
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x4F38EE0", Offset = "0x4F38EE0", VA = "0x4F38EE0")]
	public EnumField()
	{
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x4F38EF0", Offset = "0x4F38EF0", VA = "0x4F38EF0")]
	public EnumField(string label, [Optional] Enum defaultValue)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x4F38ED0", Offset = "0x4F38ED0", VA = "0x4F38ED0")]
	public void Init(Enum defaultValue)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x4F39240", Offset = "0x4F39240", VA = "0x4F39240")]
	public void Init(Enum defaultValue, bool includeObsoleteValues)
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x4F393F0", Offset = "0x4F393F0", VA = "0x4F393F0")]
	internal void PopulateDataFromType(Type enumType)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x4F395A0", Offset = "0x4F395A0", VA = "0x4F395A0", Slot = "114")]
	public override void SetValueWithoutNotify(Enum newValue)
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x4F394D0", Offset = "0x4F394D0", VA = "0x4F394D0")]
	private void UpdateValueLabel(Enum value)
	{
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x4F39660", Offset = "0x4F39660", VA = "0x4F39660")]
	private void OnPointerDownEvent(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x4F396B0", Offset = "0x4F396B0", VA = "0x4F396B0")]
	private void OnPointerMoveEvent(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x4F39730", Offset = "0x4F39730", VA = "0x4F39730")]
	private bool ContainsPointer(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60003DF")]
	private void ProcessPointerDown<T>(PointerEventBase<T> evt) where T : PointerEventBase<T>, new()
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x4F397A0", Offset = "0x4F397A0", VA = "0x4F397A0")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x4F397C0", Offset = "0x4F397C0", VA = "0x4F397C0")]
	private void ShowMenu()
	{
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x4F39ED0", Offset = "0x4F39ED0", VA = "0x4F39ED0")]
	private void ChangeValueFromMenu(object menuItem)
	{
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x4F39F40", Offset = "0x4F39F40", VA = "0x4F39F40", Slot = "113")]
	protected override void UpdateMixedValueContent()
	{
	}
}
