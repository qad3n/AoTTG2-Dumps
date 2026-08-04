// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseBoolField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200003E")]
public abstract class BaseBoolField : BaseField<bool>
{
	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty textProperty;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x450")]
	protected Label m_Label;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x458")]
	protected readonly VisualElement m_CheckMark;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x460")]
	internal Clickable m_Clickable;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x468")]
	private string m_OriginalText;

	[Token(Token = "0x17000051")]
	[CreateProperty]
	public string text
	{
		[Token(Token = "0x600020B")]
		[Address(RVA = "0x4F20630", Offset = "0x4F20630", VA = "0x4F20630")]
		get
		{
			return null;
		}
		[Token(Token = "0x600020C")]
		[Address(RVA = "0x4F204B0", Offset = "0x4F204B0", VA = "0x4F204B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4F20270", Offset = "0x4F20270", VA = "0x4F20270")]
	public BaseBoolField(string label)
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x4F20600", Offset = "0x4F20600", VA = "0x4F20600")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4F20660", Offset = "0x4F20660", VA = "0x4F20660", Slot = "115")]
	protected virtual void InitLabel()
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4F20700", Offset = "0x4F20700", VA = "0x4F20700", Slot = "114")]
	public override void SetValueWithoutNotify(bool newValue)
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x4F207C0", Offset = "0x4F207C0", VA = "0x4F207C0")]
	private void OnClickEvent(EventBase evt)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x4F20A50", Offset = "0x4F20A50", VA = "0x4F20A50", Slot = "116")]
	protected virtual void ToggleValue()
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x4F20A90", Offset = "0x4F20A90", VA = "0x4F20A90", Slot = "113")]
	protected override void UpdateMixedValueContent()
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x4F20C40", Offset = "0x4F20C40", VA = "0x4F20C40", Slot = "111")]
	internal override void RegisterEditingCallbacks()
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x4F20D30", Offset = "0x4F20D30", VA = "0x4F20D30", Slot = "112")]
	internal override void UnregisterEditingCallbacks()
	{
	}
}
