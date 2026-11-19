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
using UnityEngine.Bindings;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000C6")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class EnumField : BaseField<Enum>
{
	[Token(Token = "0x20000C7")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<EnumField, UxmlTraits>
	{
		[Token(Token = "0x60005B6")]
		[Address(RVA = "0x6BDE0D0", Offset = "0x6BDD0D0", VA = "0x6BDE0D0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000C8")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseField<Enum>.UxmlTraits
	{
		[Token(Token = "0x400035D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		private UxmlTypeAttributeDescription<Enum> m_Type;

		[Token(Token = "0x400035E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
		private UxmlStringAttributeDescription m_Value;

		[Token(Token = "0x400035F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
		private UxmlBoolAttributeDescription m_IncludeObsoleteValues;

		[Token(Token = "0x60005B7")]
		[Address(RVA = "0x6BDE110", Offset = "0x6BDD110", VA = "0x6BDE110", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60005B8")]
		[Address(RVA = "0x6BDE3D0", Offset = "0x6BDD3D0", VA = "0x6BDE3D0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000351")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId textProperty;

	[Token(Token = "0x4000352")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x358")]
	private Type m_EnumType;

	[Token(Token = "0x4000353")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x360")]
	private bool m_IncludeObsoleteValues;

	[Token(Token = "0x4000354")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x368")]
	private TextElement m_TextElement;

	[Token(Token = "0x4000355")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x370")]
	private VisualElement m_ArrowElement;

	[Token(Token = "0x4000356")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x378")]
	private UnityEngine.EnumData m_EnumData;

	[Token(Token = "0x4000357")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3B8")]
	internal Func<AbstractGenericMenu> createMenuCallback;

	[Token(Token = "0x4000358")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000359")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	public static readonly string textUssClassName;

	[Token(Token = "0x400035A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public static readonly string arrowUssClassName;

	[Token(Token = "0x400035B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x400035C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x170000EF")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool includeObsoleteValues
	{
		[Token(Token = "0x60005A2")]
		[Address(RVA = "0x6BDCFB0", Offset = "0x6BDBFB0", VA = "0x6BDCFB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F0")]
	[CreateProperty(ReadOnly = true)]
	public string text
	{
		[Token(Token = "0x60005A3")]
		[Address(RVA = "0x6BDCFC0", Offset = "0x6BDBFC0", VA = "0x6BDCFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x6BDCFF0", Offset = "0x6BDBFF0", VA = "0x6BDCFF0")]
	private void Initialize(Enum defaultValue)
	{
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x6BDD1E0", Offset = "0x6BDC1E0", VA = "0x6BDD1E0")]
	public EnumField()
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x6BDD1F0", Offset = "0x6BDC1F0", VA = "0x6BDD1F0")]
	public EnumField(string label, [Optional] Enum defaultValue)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x6BDD1D0", Offset = "0x6BDC1D0", VA = "0x6BDD1D0")]
	public void Init(Enum defaultValue)
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x6BDD540", Offset = "0x6BDC540", VA = "0x6BDD540")]
	public void Init(Enum defaultValue, bool includeObsoleteValues)
	{
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x6BDD620", Offset = "0x6BDC620", VA = "0x6BDD620")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void PopulateDataFromType(Type enumType)
	{
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x6BDD7F0", Offset = "0x6BDC7F0", VA = "0x6BDD7F0", Slot = "159")]
	public override void SetValueWithoutNotify(Enum newValue)
	{
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x6BDD730", Offset = "0x6BDC730", VA = "0x6BDD730")]
	private void UpdateValueLabel(Enum value)
	{
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x6BDD8B0", Offset = "0x6BDC8B0", VA = "0x6BDD8B0")]
	private void OnPointerDownEvent(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x6BDD900", Offset = "0x6BDC900", VA = "0x6BDD900")]
	private void OnPointerMoveEvent(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x6BDD980", Offset = "0x6BDC980", VA = "0x6BDD980")]
	private bool ContainsPointer(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AF")]
	private void ProcessPointerDown<T>(PointerEventBase<T> evt) where T : PointerEventBase<T>, new()
	{
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x6BDD9F0", Offset = "0x6BDC9F0", VA = "0x6BDD9F0")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x6BDDA10", Offset = "0x6BDCA10", VA = "0x6BDDA10")]
	internal void ShowMenu()
	{
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x6BDDC80", Offset = "0x6BDCC80", VA = "0x6BDDC80")]
	private void ChangeValueFromMenu(object menuItem)
	{
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x6BDDCF0", Offset = "0x6BDCCF0", VA = "0x6BDDCF0", Slot = "158")]
	protected override void UpdateMixedValueContent()
	{
	}
}
