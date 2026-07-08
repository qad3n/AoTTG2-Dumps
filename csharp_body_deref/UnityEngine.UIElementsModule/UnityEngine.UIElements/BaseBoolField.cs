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
		[Address(RVA = "0x4BF8D00", Offset = "0x4BF8D00", VA = "0x4BF8D00")]
		get
		{
			return null;
		}
		[Token(Token = "0x600020C")]
		[Address(RVA = "0x4BF8B80", Offset = "0x4BF8B80", VA = "0x4BF8B80")]
		set
		{
		}
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4BF8940", Offset = "0x4BF8940", VA = "0x4BF8940")]
	public BaseBoolField(string label)
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x4BF8CD0", Offset = "0x4BF8CD0", VA = "0x4BF8CD0")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4BF8D30", Offset = "0x4BF8D30", VA = "0x4BF8D30", Slot = "115")]
	protected virtual void InitLabel()
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4BF8DD0", Offset = "0x4BF8DD0", VA = "0x4BF8DD0", Slot = "114")]
	public override void SetValueWithoutNotify(bool newValue)
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x4BF8E90", Offset = "0x4BF8E90", VA = "0x4BF8E90")]
	private void OnClickEvent(EventBase evt)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x4BF9120", Offset = "0x4BF9120", VA = "0x4BF9120", Slot = "116")]
	protected virtual void ToggleValue()
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x4BF9160", Offset = "0x4BF9160", VA = "0x4BF9160", Slot = "113")]
	protected override void UpdateMixedValueContent()
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x4BF9310", Offset = "0x4BF9310", VA = "0x4BF9310", Slot = "111")]
	internal override void RegisterEditingCallbacks()
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x4BF9400", Offset = "0x4BF9400", VA = "0x4BF9400", Slot = "112")]
	internal override void UnregisterEditingCallbacks()
	{
	}
}
