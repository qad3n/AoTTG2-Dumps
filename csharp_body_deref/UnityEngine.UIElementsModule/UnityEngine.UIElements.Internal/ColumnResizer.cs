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
		[Address(RVA = "0x4FD8500", Offset = "0x4FD8500", VA = "0x4FD8500")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002154")]
		[Address(RVA = "0x4FD8510", Offset = "0x4FD8510", VA = "0x4FD8510")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000893")]
	public bool preview
	{
		[Token(Token = "0x6002155")]
		[Address(RVA = "0x4FD8520", Offset = "0x4FD8520", VA = "0x4FD8520")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002156")]
		[Address(RVA = "0x4FD8530", Offset = "0x4FD8530", VA = "0x4FD8530")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002157")]
	[Address(RVA = "0x4FD8540", Offset = "0x4FD8540", VA = "0x4FD8540")]
	public ColumnResizer(Column column)
	{
	}

	[Token(Token = "0x6002158")]
	[Address(RVA = "0x4FD85F0", Offset = "0x4FD85F0", VA = "0x4FD85F0", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x6002159")]
	[Address(RVA = "0x4FD8800", Offset = "0x4FD8800", VA = "0x4FD8800", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x600215A")]
	[Address(RVA = "0x4FD8A10", Offset = "0x4FD8A10", VA = "0x4FD8A10")]
	private void OnKeyDown(KeyDownEvent e)
	{
	}

	[Token(Token = "0x600215B")]
	[Address(RVA = "0x4FD8B00", Offset = "0x4FD8B00", VA = "0x4FD8B00")]
	private void OnPointerDown(PointerDownEvent e)
	{
	}

	[Token(Token = "0x600215C")]
	[Address(RVA = "0x4FD8DC0", Offset = "0x4FD8DC0", VA = "0x4FD8DC0")]
	private void OnPointerMove(PointerMoveEvent e)
	{
	}

	[Token(Token = "0x600215D")]
	[Address(RVA = "0x4FD8F00", Offset = "0x4FD8F00", VA = "0x4FD8F00")]
	private void OnPointerUp(PointerUpEvent e)
	{
	}

	[Token(Token = "0x600215E")]
	[Address(RVA = "0x4FD8D80", Offset = "0x4FD8D80", VA = "0x4FD8D80")]
	private void BeginDragResize(float pos)
	{
	}

	[Token(Token = "0x600215F")]
	[Address(RVA = "0x4FD8ED0", Offset = "0x4FD8ED0", VA = "0x4FD8ED0")]
	private void DragResize(float pos)
	{
	}

	[Token(Token = "0x6002160")]
	[Address(RVA = "0x4FD9060", Offset = "0x4FD9060", VA = "0x4FD9060")]
	private void UpdatePreviewPosition()
	{
	}

	[Token(Token = "0x6002161")]
	[Address(RVA = "0x4FD8AA0", Offset = "0x4FD8AA0", VA = "0x4FD8AA0")]
	private void EndDragResize(float pos, bool cancelled)
	{
	}
}
