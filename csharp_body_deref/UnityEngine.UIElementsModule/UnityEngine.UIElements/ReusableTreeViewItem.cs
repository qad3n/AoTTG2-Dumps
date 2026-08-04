// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ReusableTreeViewItem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000039")]
internal class ReusableTreeViewItem : ReusableCollectionItem
{
	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x40")]
	private Toggle m_Toggle;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x48")]
	private VisualElement m_Container;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x50")]
	private VisualElement m_IndentElement;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x58")]
	private VisualElement m_BindableContainer;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x60")]
	private VisualElement m_Checkmark;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x78")]
	private int m_Depth;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x7C")]
	private float m_IndentWidth;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x80")]
	private EventCallback<PointerUpEvent> m_PointerUpCallback;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x88")]
	private EventCallback<ChangeEvent<bool>> m_ToggleValueChangedCallback;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x90")]
	private EventCallback<GeometryChangedEvent> m_ToggleGeometryChangedCallback;

	[Token(Token = "0x17000046")]
	public override VisualElement rootElement
	{
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x4F1ECA0", Offset = "0x4F1ECA0", VA = "0x4F1ECA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1400000A")]
	public event Action<PointerUpEvent> onPointerUp
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x4F17190", Offset = "0x4F17190", VA = "0x4F17190")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x4F16FF0", Offset = "0x4F16FF0", VA = "0x4F16FF0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000B")]
	public event Action<ChangeEvent<bool>> onToggleValueChanged
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x4F17240", Offset = "0x4F17240", VA = "0x4F17240")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x4F170A0", Offset = "0x4F170A0", VA = "0x4F170A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4F1EB00", Offset = "0x4F1EB00", VA = "0x4F1EB00")]
	public ReusableTreeViewItem()
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4F1ECB0", Offset = "0x4F1ECB0", VA = "0x4F1ECB0", Slot = "5")]
	public override void Init(VisualElement item)
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4F1E550", Offset = "0x4F1E550", VA = "0x4F1E550")]
	protected void InitExpandHierarchy(VisualElement root, VisualElement item)
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4F1ED90", Offset = "0x4F1ED90", VA = "0x4F1ED90", Slot = "6")]
	public override void PreAttachElement()
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x4F1EF40", Offset = "0x4F1EF40", VA = "0x4F1EF40", Slot = "7")]
	public override void DetachElement()
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4F16BE0", Offset = "0x4F16BE0", VA = "0x4F16BE0")]
	public void Indent(int depth)
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4F16CB0", Offset = "0x4F16CB0", VA = "0x4F16CB0")]
	public void SetExpandedWithoutNotify(bool expanded)
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x4F16D90", Offset = "0x4F16D90", VA = "0x4F16D90")]
	public void SetToggleVisibility(bool visible)
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x4F1F220", Offset = "0x4F1F220", VA = "0x4F1F220")]
	private void OnToggleGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x4F1F0F0", Offset = "0x4F1F0F0", VA = "0x4F1F0F0")]
	private void UpdateIndentLayout()
	{
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x4F1F490", Offset = "0x4F1F490", VA = "0x4F1F490")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x4F1F4B0", Offset = "0x4F1F4B0", VA = "0x4F1F4B0")]
	private void OnToggleValueChanged(ChangeEvent<bool> evt)
	{
	}
}
