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
	[FieldOffset(Offset = "0x24")]
	private Vector2 m_Start;

	[Token(Token = "0x400186D")]
	[FieldOffset(Offset = "0x2C")]
	protected bool m_Active;

	[Token(Token = "0x400186E")]
	[FieldOffset(Offset = "0x2D")]
	private bool m_Resizing;

	[Token(Token = "0x400186F")]
	[FieldOffset(Offset = "0x30")]
	private MultiColumnCollectionHeader m_Header;

	[Token(Token = "0x4001870")]
	[FieldOffset(Offset = "0x38")]
	private Column m_Column;

	[Token(Token = "0x4001871")]
	[FieldOffset(Offset = "0x40")]
	private VisualElement m_PreviewElement;

	[Token(Token = "0x17000BB7")]
	public ColumnLayout columnLayout
	{
		[Token(Token = "0x6002EE2")]
		[Address(RVA = "0x6C03220", Offset = "0x6C02220", VA = "0x6C03220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002EE3")]
		[Address(RVA = "0x6C03230", Offset = "0x6C02230", VA = "0x6C03230")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000BB8")]
	public bool preview
	{
		[Token(Token = "0x6002EE4")]
		[Address(RVA = "0x6C03240", Offset = "0x6C02240", VA = "0x6C03240")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002EE5")]
		[Address(RVA = "0x6C03250", Offset = "0x6C02250", VA = "0x6C03250")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002EE6")]
	[Address(RVA = "0x6C03260", Offset = "0x6C02260", VA = "0x6C03260")]
	public ColumnResizer(Column column)
	{
	}

	[Token(Token = "0x6002EE7")]
	[Address(RVA = "0x6C03310", Offset = "0x6C02310", VA = "0x6C03310", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x6002EE8")]
	[Address(RVA = "0x6C03520", Offset = "0x6C02520", VA = "0x6C03520", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x6002EE9")]
	[Address(RVA = "0x6C03730", Offset = "0x6C02730", VA = "0x6C03730")]
	private void OnKeyDown(KeyDownEvent e)
	{
	}

	[Token(Token = "0x6002EEA")]
	[Address(RVA = "0x6C03820", Offset = "0x6C02820", VA = "0x6C03820")]
	private void OnPointerDown(PointerDownEvent e)
	{
	}

	[Token(Token = "0x6002EEB")]
	[Address(RVA = "0x6C03AF0", Offset = "0x6C02AF0", VA = "0x6C03AF0")]
	private void OnPointerMove(PointerMoveEvent e)
	{
	}

	[Token(Token = "0x6002EEC")]
	[Address(RVA = "0x6C03C30", Offset = "0x6C02C30", VA = "0x6C03C30")]
	private void OnPointerUp(PointerUpEvent e)
	{
	}

	[Token(Token = "0x6002EED")]
	[Address(RVA = "0x6C03AB0", Offset = "0x6C02AB0", VA = "0x6C03AB0")]
	private void BeginDragResize(float pos)
	{
	}

	[Token(Token = "0x6002EEE")]
	[Address(RVA = "0x6C03C00", Offset = "0x6C02C00", VA = "0x6C03C00")]
	private void DragResize(float pos)
	{
	}

	[Token(Token = "0x6002EEF")]
	[Address(RVA = "0x6C03D90", Offset = "0x6C02D90", VA = "0x6C03D90")]
	private void UpdatePreviewPosition()
	{
	}

	[Token(Token = "0x6002EF0")]
	[Address(RVA = "0x6C037C0", Offset = "0x6C027C0", VA = "0x6C037C0")]
	private void EndDragResize(float pos, bool cancelled)
	{
	}
}
