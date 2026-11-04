// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ReusableTreeViewItem
// Update status: CHANGED in this game update
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
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
		[Address(RVA = "0x30B1F40", Offset = "0x30B0540", VA = "0x1830B1F40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000088")]
	internal float indentWidth
	{
		[Token(Token = "0x6000327")]
		[Address(RVA = "0x30B1EE0", Offset = "0x30B04E0", VA = "0x1830B1EE0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1400000E")]
	public event Action<PointerUpEvent> onPointerUp
	{
		[Token(Token = "0x6000323")]
		[Address(RVA = "0x30B1D80", Offset = "0x30B0380", VA = "0x1830B1D80")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000324")]
		[Address(RVA = "0x30B1F60", Offset = "0x30B0560", VA = "0x1830B1F60")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000F")]
	public event Action<ChangeEvent<bool>> onToggleValueChanged
	{
		[Token(Token = "0x6000325")]
		[Address(RVA = "0x30B1E30", Offset = "0x30B0430", VA = "0x1830B1E30")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000326")]
		[Address(RVA = "0x30B2010", Offset = "0x30B0610", VA = "0x1830B2010")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x30B0F50", Offset = "0x30AF550", VA = "0x1830B0F50")]
	public ReusableTreeViewItem()
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x30B1750", Offset = "0x30AFD50", VA = "0x1830B1750", Slot = "5")]
	public override void Init(VisualElement item)
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x30B1250", Offset = "0x30AF850", VA = "0x1830B1250")]
	protected void InitExpandHierarchy(VisualElement root, VisualElement item)
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x30B19D0", Offset = "0x30AFFD0", VA = "0x1830B19D0", Slot = "6")]
	public override void PreAttachElement()
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x30B1080", Offset = "0x30AF680", VA = "0x1830B1080", Slot = "7")]
	public override void DetachElement()
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x30B1230", Offset = "0x30AF830", VA = "0x1830B1230")]
	public void Indent(int depth)
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x30B1B80", Offset = "0x30B0180", VA = "0x1830B1B80")]
	public void SetExpandedWithoutNotify(bool expanded)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x30B1BA0", Offset = "0x30B01A0", VA = "0x1830B1BA0")]
	public void SetToggleVisibility(bool visible)
	{
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x30B1860", Offset = "0x30AFE60", VA = "0x1830B1860")]
	private void OnToggleGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x30B1BC0", Offset = "0x30B01C0", VA = "0x1830B1BC0")]
	private void UpdateIndentLayout()
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x30B1840", Offset = "0x30AFE40", VA = "0x1830B1840")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x30B19B0", Offset = "0x30AFFB0", VA = "0x1830B19B0")]
	private void OnToggleValueChanged(ChangeEvent<bool> evt)
	{
	}
}
