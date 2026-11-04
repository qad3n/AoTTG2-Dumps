// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseBoolField
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000071")]
public abstract class BaseBoolField : BaseField<bool>
{
	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId textProperty;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId toggleOnLabelClickProperty;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x358")]
	protected Label m_Label;

	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x360")]
	protected internal readonly VisualElement m_CheckMark;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x368")]
	internal readonly Clickable m_Clickable;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x378")]
	private string m_OriginalText;

	[Token(Token = "0x17000092")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool acceptClicksIfDisabled
	{
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x309E9F0", Offset = "0x309CFF0", VA = "0x18309E9F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	[CreateProperty]
	public bool toggleOnLabelClick
	{
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x309E9E0", Offset = "0x309CFE0", VA = "0x18309E9E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x309EB20", Offset = "0x309D120", VA = "0x18309EB20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000094")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool toggleOnTextClick
	{
		[Token(Token = "0x6000374")]
		[Address(RVA = "0xE32CF0", Offset = "0xE312F0", VA = "0x180E32CF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x309EB30", Offset = "0x309D130", VA = "0x18309EB30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	[CreateProperty]
	public string text
	{
		[Token(Token = "0x6000378")]
		[Address(RVA = "0x309E9B0", Offset = "0x309CFB0", VA = "0x18309E9B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000379")]
		[Address(RVA = "0x309EA20", Offset = "0x309D020", VA = "0x18309EA20")]
		set
		{
		}
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x309E730", Offset = "0x309CD30", VA = "0x18309E730")]
	public BaseBoolField(string label)
	{
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x309DE70", Offset = "0x309C470", VA = "0x18309DE70")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x309DA20", Offset = "0x309C020", VA = "0x18309DA20", Slot = "160")]
	protected virtual void InitLabel()
	{
	}

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x309DFA0", Offset = "0x309C5A0", VA = "0x18309DFA0", Slot = "159")]
	public override void SetValueWithoutNotify(bool newValue)
	{
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x309DB80", Offset = "0x309C180", VA = "0x18309DB80")]
	private void OnClickEvent(EventBase evt)
	{
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x309E030", Offset = "0x309C630", VA = "0x18309E030")]
	private bool ShouldIgnoreClick(Vector3 position)
	{
		return default(bool);
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x309E270", Offset = "0x309C870", VA = "0x18309E270", Slot = "161")]
	protected virtual void ToggleValue()
	{
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x309E3A0", Offset = "0x309C9A0", VA = "0x18309E3A0", Slot = "158")]
	protected override void UpdateMixedValueContent()
	{
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x309DEB0", Offset = "0x309C4B0", VA = "0x18309DEB0", Slot = "156")]
	internal override void RegisterEditingCallbacks()
	{
	}

	[Token(Token = "0x6000381")]
	[Address(RVA = "0x309E2B0", Offset = "0x309C8B0", VA = "0x18309E2B0", Slot = "157")]
	internal override void UnregisterEditingCallbacks()
	{
	}
}
