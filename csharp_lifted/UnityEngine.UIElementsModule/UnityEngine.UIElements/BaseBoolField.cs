// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseBoolField
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6A9F170", Offset = "0x6A9E170", VA = "0x6A9F170")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	[CreateProperty]
	public bool toggleOnLabelClick
	{
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x6A9F190", Offset = "0x6A9E190", VA = "0x6A9F190")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x6A9F1A0", Offset = "0x6A9E1A0", VA = "0x6A9F1A0")]
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
		[Address(RVA = "0x6A9F1B0", Offset = "0x6A9E1B0", VA = "0x6A9F1B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x6A9F1C0", Offset = "0x6A9E1C0", VA = "0x6A9F1C0")]
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
		[Address(RVA = "0x6A9F570", Offset = "0x6A9E570", VA = "0x6A9F570")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000379")]
		[Address(RVA = "0x6A9F450", Offset = "0x6A9E450", VA = "0x6A9F450")]
		set
		{
		}
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x6A9F1D0", Offset = "0x6A9E1D0", VA = "0x6A9F1D0")]
	public BaseBoolField(string label)
	{
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x6A9F540", Offset = "0x6A9E540", VA = "0x6A9F540")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x6A9F5A0", Offset = "0x6A9E5A0", VA = "0x6A9F5A0", Slot = "160")]
	protected virtual void InitLabel()
	{
	}

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x6A9F6E0", Offset = "0x6A9E6E0", VA = "0x6A9F6E0", Slot = "159")]
	public override void SetValueWithoutNotify(bool newValue)
	{
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x6A9F770", Offset = "0x6A9E770", VA = "0x6A9F770")]
	private void OnClickEvent(EventBase evt)
	{
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x6A9FB00", Offset = "0x6A9EB00", VA = "0x6A9FB00")]
	private bool ShouldIgnoreClick(Vector3 position)
	{
		return default(bool);
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x6A9FD70", Offset = "0x6A9ED70", VA = "0x6A9FD70", Slot = "161")]
	protected virtual void ToggleValue()
	{
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x6A9FDB0", Offset = "0x6A9EDB0", VA = "0x6A9FDB0", Slot = "158")]
	protected override void UpdateMixedValueContent()
	{
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x6A9FF40", Offset = "0x6A9EF40", VA = "0x6A9FF40", Slot = "156")]
	internal override void RegisterEditingCallbacks()
	{
	}

	[Token(Token = "0x6000381")]
	[Address(RVA = "0x6AA0030", Offset = "0x6A9F030", VA = "0x6AA0030", Slot = "157")]
	internal override void UnregisterEditingCallbacks()
	{
	}
}
