using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Internal;

[Token(Token = "0x200056C")]
internal class ColumnResizer : PointerManipulator
{
	[Token(Token = "0x40012B2")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 m_Start;

	[Token(Token = "0x40012B3")]
	[FieldOffset(Offset = "0x38")]
	protected bool m_Active;

	[Token(Token = "0x40012B4")]
	[FieldOffset(Offset = "0x39")]
	private bool m_Resizing;

	[Token(Token = "0x40012B5")]
	[FieldOffset(Offset = "0x40")]
	private MultiColumnCollectionHeader m_Header;

	[Token(Token = "0x40012B6")]
	[FieldOffset(Offset = "0x48")]
	private Column m_Column;

	[Token(Token = "0x40012B7")]
	[FieldOffset(Offset = "0x50")]
	private VisualElement m_PreviewElement;

	[Token(Token = "0x17000892")]
	public ColumnLayout columnLayout
	{
		[Token(Token = "0x6002153")]
		[Address(RVA = "0x4CB0BD0", Offset = "0x4CB0BD0", VA = "0x4CB0BD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002154")]
		[Address(RVA = "0x4CB0BE0", Offset = "0x4CB0BE0", VA = "0x4CB0BE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000893")]
	public bool preview
	{
		[Token(Token = "0x6002155")]
		[Address(RVA = "0x4CB0BF0", Offset = "0x4CB0BF0", VA = "0x4CB0BF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002156")]
		[Address(RVA = "0x4CB0C00", Offset = "0x4CB0C00", VA = "0x4CB0C00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002157")]
	[Address(RVA = "0x4CB0C10", Offset = "0x4CB0C10", VA = "0x4CB0C10")]
	public ColumnResizer(Column column)
	{
	}

	[Token(Token = "0x6002158")]
	[Address(RVA = "0x4CB0CC0", Offset = "0x4CB0CC0", VA = "0x4CB0CC0", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x6002159")]
	[Address(RVA = "0x4CB0ED0", Offset = "0x4CB0ED0", VA = "0x4CB0ED0", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x600215A")]
	[Address(RVA = "0x4CB10E0", Offset = "0x4CB10E0", VA = "0x4CB10E0")]
	private void OnKeyDown(KeyDownEvent e)
	{
	}

	[Token(Token = "0x600215B")]
	[Address(RVA = "0x4CB11D0", Offset = "0x4CB11D0", VA = "0x4CB11D0")]
	private void OnPointerDown(PointerDownEvent e)
	{
	}

	[Token(Token = "0x600215C")]
	[Address(RVA = "0x4CB1490", Offset = "0x4CB1490", VA = "0x4CB1490")]
	private void OnPointerMove(PointerMoveEvent e)
	{
	}

	[Token(Token = "0x600215D")]
	[Address(RVA = "0x4CB15D0", Offset = "0x4CB15D0", VA = "0x4CB15D0")]
	private void OnPointerUp(PointerUpEvent e)
	{
	}

	[Token(Token = "0x600215E")]
	[Address(RVA = "0x4CB1450", Offset = "0x4CB1450", VA = "0x4CB1450")]
	private void BeginDragResize(float pos)
	{
	}

	[Token(Token = "0x600215F")]
	[Address(RVA = "0x4CB15A0", Offset = "0x4CB15A0", VA = "0x4CB15A0")]
	private void DragResize(float pos)
	{
	}

	[Token(Token = "0x6002160")]
	[Address(RVA = "0x4CB1730", Offset = "0x4CB1730", VA = "0x4CB1730")]
	private void UpdatePreviewPosition()
	{
	}

	[Token(Token = "0x6002161")]
	[Address(RVA = "0x4CB1170", Offset = "0x4CB1170", VA = "0x4CB1170")]
	private void EndDragResize(float pos, bool cancelled)
	{
	}
}
