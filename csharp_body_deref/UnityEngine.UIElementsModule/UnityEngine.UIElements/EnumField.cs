// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EnumField
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x31E3B40", Offset = "0x31E2140", VA = "0x1831E3B40")]
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
		[Address(RVA = "0x31E4C50", Offset = "0x31E3250", VA = "0x1831E4C50", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60005B8")]
		[Address(RVA = "0x31E7340", Offset = "0x31E5940", VA = "0x1831E7340")]
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
		[Address(RVA = "0x31D1E30", Offset = "0x31D0430", VA = "0x1831D1E30")]
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
		[Address(RVA = "0x31D1E40", Offset = "0x31D0440", VA = "0x1831D1E40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x31D0DF0", Offset = "0x31CF3F0", VA = "0x1831D0DF0")]
	private void Initialize(Enum defaultValue)
	{
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x31D1E20", Offset = "0x31D0420", VA = "0x1831D1E20")]
	public EnumField()
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x31D1AD0", Offset = "0x31D00D0", VA = "0x1831D1AD0")]
	public EnumField(string label, [Optional] Enum defaultValue)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x31D0BF0", Offset = "0x31CF1F0", VA = "0x1831D0BF0")]
	public void Init(Enum defaultValue)
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x31D0CE0", Offset = "0x31CF2E0", VA = "0x1831D0CE0")]
	public void Init(Enum defaultValue, bool includeObsoleteValues)
	{
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x31D1150", Offset = "0x31CF750", VA = "0x1831D1150")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void PopulateDataFromType(Type enumType)
	{
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x31D1260", Offset = "0x31CF860", VA = "0x1831D1260", Slot = "159")]
	public override void SetValueWithoutNotify(Enum newValue)
	{
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x31D16E0", Offset = "0x31CFCE0", VA = "0x1831D16E0")]
	private void UpdateValueLabel(Enum value)
	{
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x31D1080", Offset = "0x31CF680", VA = "0x1831D1080")]
	private void OnPointerDownEvent(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x31D10D0", Offset = "0x31CF6D0", VA = "0x1831D10D0")]
	private void OnPointerMoveEvent(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x31D0B60", Offset = "0x31CF160", VA = "0x1831D0B60")]
	private bool ContainsPointer(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AF")]
	private void ProcessPointerDown<T>(PointerEventBase<T> evt) where T : PointerEventBase<T>, new()
	{
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x31D1050", Offset = "0x31CF650", VA = "0x1831D1050")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x31D1320", Offset = "0x31CF920", VA = "0x1831D1320")]
	internal void ShowMenu()
	{
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x31D0B00", Offset = "0x31CF100", VA = "0x1831D0B00")]
	private void ChangeValueFromMenu(object menuItem)
	{
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x31D1570", Offset = "0x31CFB70", VA = "0x1831D1570", Slot = "158")]
	protected override void UpdateMixedValueContent()
	{
	}
}
