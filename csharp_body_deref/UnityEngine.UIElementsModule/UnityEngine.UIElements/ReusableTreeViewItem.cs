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
		[Address(RVA = "0x4BF7370", Offset = "0x4BF7370", VA = "0x4BF7370", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1400000A")]
	public event Action<PointerUpEvent> onPointerUp
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x4BEF860", Offset = "0x4BEF860", VA = "0x4BEF860")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x4BEF6C0", Offset = "0x4BEF6C0", VA = "0x4BEF6C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000B")]
	public event Action<ChangeEvent<bool>> onToggleValueChanged
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x4BEF910", Offset = "0x4BEF910", VA = "0x4BEF910")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x4BEF770", Offset = "0x4BEF770", VA = "0x4BEF770")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4BF71D0", Offset = "0x4BF71D0", VA = "0x4BF71D0")]
	public ReusableTreeViewItem()
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4BF7380", Offset = "0x4BF7380", VA = "0x4BF7380", Slot = "5")]
	public override void Init(VisualElement item)
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4BF6C20", Offset = "0x4BF6C20", VA = "0x4BF6C20")]
	protected void InitExpandHierarchy(VisualElement root, VisualElement item)
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4BF7460", Offset = "0x4BF7460", VA = "0x4BF7460", Slot = "6")]
	public override void PreAttachElement()
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x4BF7610", Offset = "0x4BF7610", VA = "0x4BF7610", Slot = "7")]
	public override void DetachElement()
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4BEF2B0", Offset = "0x4BEF2B0", VA = "0x4BEF2B0")]
	public void Indent(int depth)
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4BEF380", Offset = "0x4BEF380", VA = "0x4BEF380")]
	public void SetExpandedWithoutNotify(bool expanded)
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x4BEF460", Offset = "0x4BEF460", VA = "0x4BEF460")]
	public void SetToggleVisibility(bool visible)
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x4BF78F0", Offset = "0x4BF78F0", VA = "0x4BF78F0")]
	private void OnToggleGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x4BF77C0", Offset = "0x4BF77C0", VA = "0x4BF77C0")]
	private void UpdateIndentLayout()
	{
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x4BF7B60", Offset = "0x4BF7B60", VA = "0x4BF7B60")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x4BF7B80", Offset = "0x4BF7B80", VA = "0x4BF7B80")]
	private void OnToggleValueChanged(ChangeEvent<bool> evt)
	{
	}
}
