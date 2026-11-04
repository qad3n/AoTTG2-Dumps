// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Internal.ColumnResizer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Internal;

[Token(Token = "0x2000667")]
internal class ColumnResizer : PointerManipulator
{
	[Token(Token = "0x400186C")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 m_Start;

	[Token(Token = "0x400186D")]
	[FieldOffset(Offset = "0x30")]
	protected bool m_Active;

	[Token(Token = "0x400186E")]
	[FieldOffset(Offset = "0x31")]
	private bool m_Resizing;

	[Token(Token = "0x400186F")]
	[FieldOffset(Offset = "0x38")]
	private MultiColumnCollectionHeader m_Header;

	[Token(Token = "0x4001870")]
	[FieldOffset(Offset = "0x40")]
	private Column m_Column;

	[Token(Token = "0x4001871")]
	[FieldOffset(Offset = "0x48")]
	private VisualElement m_PreviewElement;

	[Token(Token = "0x17000BB7")]
	public ColumnLayout columnLayout
	{
		[Token(Token = "0x6002EE2")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002EE3")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000BB8")]
	public bool preview
	{
		[Token(Token = "0x6002EE4")]
		[Address(RVA = "0x1937790", Offset = "0x1935D90", VA = "0x181937790")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002EE5")]
		[Address(RVA = "0x19377D0", Offset = "0x1935DD0", VA = "0x1819377D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002EE6")]
	[Address(RVA = "0x31FE290", Offset = "0x31FC890", VA = "0x1831FE290")]
	public ColumnResizer(Column column)
	{
	}

	[Token(Token = "0x6002EE7")]
	[Address(RVA = "0x31FDD50", Offset = "0x31FC350", VA = "0x1831FDD50", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x6002EE8")]
	[Address(RVA = "0x31FDF50", Offset = "0x31FC550", VA = "0x1831FDF50", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x6002EE9")]
	[Address(RVA = "0x31FD620", Offset = "0x31FBC20", VA = "0x1831FD620")]
	private void OnKeyDown(KeyDownEvent e)
	{
	}

	[Token(Token = "0x6002EEA")]
	[Address(RVA = "0x31FD6C0", Offset = "0x31FBCC0", VA = "0x1831FD6C0")]
	private void OnPointerDown(PointerDownEvent e)
	{
	}

	[Token(Token = "0x6002EEB")]
	[Address(RVA = "0x31FDA60", Offset = "0x31FC060", VA = "0x1831FDA60")]
	private void OnPointerMove(PointerMoveEvent e)
	{
	}

	[Token(Token = "0x6002EEC")]
	[Address(RVA = "0x31FDBB0", Offset = "0x31FC1B0", VA = "0x1831FDBB0")]
	private void OnPointerUp(PointerUpEvent e)
	{
	}

	[Token(Token = "0x6002EED")]
	[Address(RVA = "0x31FD510", Offset = "0x31FBB10", VA = "0x1831FD510")]
	private void BeginDragResize(float pos)
	{
	}

	[Token(Token = "0x6002EEE")]
	[Address(RVA = "0x31FD560", Offset = "0x31FBB60", VA = "0x1831FD560")]
	private void DragResize(float pos)
	{
	}

	[Token(Token = "0x6002EEF")]
	[Address(RVA = "0x31FE150", Offset = "0x31FC750", VA = "0x1831FE150")]
	private void UpdatePreviewPosition()
	{
	}

	[Token(Token = "0x6002EF0")]
	[Address(RVA = "0x31FD5B0", Offset = "0x31FBBB0", VA = "0x1831FD5B0")]
	private void EndDragResize(float pos, bool cancelled)
	{
	}
}
