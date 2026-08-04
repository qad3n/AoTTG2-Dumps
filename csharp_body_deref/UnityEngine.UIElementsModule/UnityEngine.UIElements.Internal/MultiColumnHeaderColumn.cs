// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Internal.MultiColumnHeaderColumn
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Internal;

[Token(Token = "0x2000576")]
internal class MultiColumnHeaderColumn : VisualElement
{
	[Token(Token = "0x40012E4")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string ussClassName;

	[Token(Token = "0x40012E5")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string sortableUssClassName;

	[Token(Token = "0x40012E6")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string sortedAscendingUssClassName;

	[Token(Token = "0x40012E7")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string sortedDescendingUssClassName;

	[Token(Token = "0x40012E8")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string movingUssClassName;

	[Token(Token = "0x40012E9")]
	[FieldOffset(Offset = "0x28")]
	public static readonly string contentContainerUssClassName;

	[Token(Token = "0x40012EA")]
	[FieldOffset(Offset = "0x30")]
	public static readonly string contentUssClassName;

	[Token(Token = "0x40012EB")]
	[FieldOffset(Offset = "0x38")]
	public static readonly string defaultContentUssClassName;

	[Token(Token = "0x40012EC")]
	[FieldOffset(Offset = "0x40")]
	public static readonly string hasIconUssClassName;

	[Token(Token = "0x40012ED")]
	[FieldOffset(Offset = "0x48")]
	public static readonly string hasTitleUssClassName;

	[Token(Token = "0x40012EE")]
	[FieldOffset(Offset = "0x50")]
	public static readonly string titleUssClassName;

	[Token(Token = "0x40012EF")]
	[FieldOffset(Offset = "0x58")]
	public static readonly string iconElementName;

	[Token(Token = "0x40012F0")]
	[FieldOffset(Offset = "0x60")]
	public static readonly string titleElementName;

	[Token(Token = "0x40012F1")]
	[FieldOffset(Offset = "0x68")]
	private static readonly string s_BoundVEPropertyName;

	[Token(Token = "0x40012F2")]
	[FieldOffset(Offset = "0x70")]
	private static readonly string s_BindingCallbackVEPropertyName;

	[Token(Token = "0x40012F3")]
	[FieldOffset(Offset = "0x78")]
	private static readonly string s_UnbindingCallbackVEPropertyName;

	[Token(Token = "0x40012F4")]
	[FieldOffset(Offset = "0x80")]
	private static readonly string s_DestroyCallbackVEPropertyName;

	[Token(Token = "0x40012F5")]
	[FieldOffset(Offset = "0x3D8")]
	private VisualElement m_ContentContainer;

	[Token(Token = "0x40012F6")]
	[FieldOffset(Offset = "0x3E0")]
	private VisualElement m_Content;

	[Token(Token = "0x40012F7")]
	[FieldOffset(Offset = "0x3E8")]
	private MultiColumnHeaderColumnSortIndicator m_SortIndicatorContainer;

	[Token(Token = "0x40012F8")]
	[FieldOffset(Offset = "0x3F0")]
	private IVisualElementScheduledItem m_ScheduledHeaderTemplateUpdate;

	[Token(Token = "0x170008A1")]
	public Clickable clickable
	{
		[Token(Token = "0x60021A8")]
		[Address(RVA = "0x4FE0EE0", Offset = "0x4FE0EE0", VA = "0x4FE0EE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60021A9")]
		[Address(RVA = "0x4FE0EF0", Offset = "0x4FE0EF0", VA = "0x4FE0EF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170008A2")]
	public ColumnMover mover
	{
		[Token(Token = "0x60021AA")]
		[Address(RVA = "0x4FE0F10", Offset = "0x4FE0F10", VA = "0x4FE0F10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60021AB")]
		[Address(RVA = "0x4FE0F20", Offset = "0x4FE0F20", VA = "0x4FE0F20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170008A3")]
	public string sortOrderLabel
	{
		[Token(Token = "0x60021AC")]
		[Address(RVA = "0x4FDF2B0", Offset = "0x4FDF2B0", VA = "0x4FDF2B0")]
		set
		{
		}
	}

	[Token(Token = "0x170008A4")]
	public Column column
	{
		[Token(Token = "0x60021AD")]
		[Address(RVA = "0x4FE0F40", Offset = "0x4FE0F40", VA = "0x4FE0F40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60021AE")]
		[Address(RVA = "0x4FE0F50", Offset = "0x4FE0F50", VA = "0x4FE0F50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170008A5")]
	public VisualElement content
	{
		[Token(Token = "0x60021AF")]
		[Address(RVA = "0x4FE0F70", Offset = "0x4FE0F70", VA = "0x4FE0F70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60021B0")]
		[Address(RVA = "0x4FE0F80", Offset = "0x4FE0F80", VA = "0x4FE0F80")]
		set
		{
		}
	}

	[Token(Token = "0x170008A6")]
	private bool isContentBound
	{
		[Token(Token = "0x60021B1")]
		[Address(RVA = "0x4FE1140", Offset = "0x4FE1140", VA = "0x4FE1140")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60021B2")]
		[Address(RVA = "0x4FE1200", Offset = "0x4FE1200", VA = "0x4FE1200")]
		set
		{
		}
	}

	[Token(Token = "0x60021B3")]
	[Address(RVA = "0x4FDC180", Offset = "0x4FDC180", VA = "0x4FDC180")]
	public MultiColumnHeaderColumn(Column column)
	{
	}

	[Token(Token = "0x60021B4")]
	[Address(RVA = "0x4FE1630", Offset = "0x4FE1630", VA = "0x4FE1630")]
	private void InitManipulators()
	{
	}

	[Token(Token = "0x60021B5")]
	[Address(RVA = "0x4FE18A0", Offset = "0x4FE18A0", VA = "0x4FE18A0")]
	private void UpdateDataFromColumn()
	{
	}

	[Token(Token = "0x60021B6")]
	[Address(RVA = "0x4FE1A20", Offset = "0x4FE1A20", VA = "0x4FE1A20")]
	private void BindHeaderContent()
	{
	}

	[Token(Token = "0x60021B7")]
	[Address(RVA = "0x4FE18E0", Offset = "0x4FE18E0", VA = "0x4FE18E0")]
	private void UnbindHeaderContent()
	{
	}

	[Token(Token = "0x60021B8")]
	[Address(RVA = "0x4FE1080", Offset = "0x4FE1080", VA = "0x4FE1080")]
	private void DestroyHeaderContent()
	{
	}

	[Token(Token = "0x60021B9")]
	[Address(RVA = "0x4FE1B60", Offset = "0x4FE1B60", VA = "0x4FE1B60")]
	private VisualElement CreateDefaultHeaderContent()
	{
		return null;
	}

	[Token(Token = "0x60021BA")]
	[Address(RVA = "0x4FE1CF0", Offset = "0x4FE1CF0", VA = "0x4FE1CF0")]
	private void DefaultBindHeaderContent(VisualElement ve)
	{
	}

	[Token(Token = "0x60021BB")]
	[Address(RVA = "0x4FE12A0", Offset = "0x4FE12A0", VA = "0x4FE12A0")]
	private void UpdateHeaderTemplate()
	{
	}

	[Token(Token = "0x60021BC")]
	[Address(RVA = "0x4FE1530", Offset = "0x4FE1530", VA = "0x4FE1530")]
	private void UpdateGeometryFromColumn()
	{
	}
}
