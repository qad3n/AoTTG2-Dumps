// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ReusableTreeViewItem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200006C")]
internal class ReusableTreeViewItem : ReusableCollectionItem
{
	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x48")]
	private Toggle m_Toggle;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x50")]
	private VisualElement m_Container;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x58")]
	internal VisualElement m_IndentElement;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x60")]
	private VisualElement m_BindableContainer;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x68")]
	private VisualElement m_Checkmark;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x70")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<PointerUpEvent> m_onPointerUp;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x78")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<ChangeEvent<bool>> m_onToggleValueChanged;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x80")]
	internal int m_Depth;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x84")]
	private float m_IndentWidth;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x88")]
	internal float? customIndentWidth;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x90")]
	private EventCallback<PointerUpEvent> m_PointerUpCallback;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x98")]
	private EventCallback<ChangeEvent<bool>> m_ToggleValueChangedCallback;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0xA0")]
	private EventCallback<GeometryChangedEvent> m_ToggleGeometryChangedCallback;

	[Token(Token = "0x17000087")]
	public override VisualElement rootElement
	{
		[Token(Token = "0x6000322")]
		[Address(RVA = "0x6A9D310", Offset = "0x6A9C310", VA = "0x6A9D310", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000088")]
	internal float indentWidth
	{
		[Token(Token = "0x6000327")]
		[Address(RVA = "0x6A9D5A0", Offset = "0x6A9C5A0", VA = "0x6A9D5A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1400000E")]
	public event Action<PointerUpEvent> onPointerUp
	{
		[Token(Token = "0x6000323")]
		[Address(RVA = "0x6A9D320", Offset = "0x6A9C320", VA = "0x6A9D320")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000324")]
		[Address(RVA = "0x6A9D3C0", Offset = "0x6A9C3C0", VA = "0x6A9D3C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000F")]
	public event Action<ChangeEvent<bool>> onToggleValueChanged
	{
		[Token(Token = "0x6000325")]
		[Address(RVA = "0x6A9D460", Offset = "0x6A9C460", VA = "0x6A9D460")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000326")]
		[Address(RVA = "0x6A9D500", Offset = "0x6A9C500", VA = "0x6A9D500")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x6A9D180", Offset = "0x6A9C180", VA = "0x6A9D180")]
	public ReusableTreeViewItem()
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x6A9D5F0", Offset = "0x6A9C5F0", VA = "0x6A9D5F0", Slot = "5")]
	public override void Init(VisualElement item)
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x6A9CBD0", Offset = "0x6A9BBD0", VA = "0x6A9CBD0")]
	protected void InitExpandHierarchy(VisualElement root, VisualElement item)
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x6A9D6D0", Offset = "0x6A9C6D0", VA = "0x6A9D6D0", Slot = "6")]
	public override void PreAttachElement()
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x6A9D880", Offset = "0x6A9C880", VA = "0x6A9D880", Slot = "7")]
	public override void DetachElement()
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x6A9DA30", Offset = "0x6A9CA30", VA = "0x6A9DA30")]
	public void Indent(int depth)
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x6A9DBC0", Offset = "0x6A9CBC0", VA = "0x6A9DBC0")]
	public void SetExpandedWithoutNotify(bool expanded)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x6A9DBF0", Offset = "0x6A9CBF0", VA = "0x6A9DBF0")]
	public void SetToggleVisibility(bool visible)
	{
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x6A9DC10", Offset = "0x6A9CC10", VA = "0x6A9DC10")]
	private void OnToggleGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x6A9DA50", Offset = "0x6A9CA50", VA = "0x6A9DA50")]
	private void UpdateIndentLayout()
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x6A9DE80", Offset = "0x6A9CE80", VA = "0x6A9DE80")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x6A9DEA0", Offset = "0x6A9CEA0", VA = "0x6A9DEA0")]
	private void OnToggleValueChanged(ChangeEvent<bool> evt)
	{
	}
}
