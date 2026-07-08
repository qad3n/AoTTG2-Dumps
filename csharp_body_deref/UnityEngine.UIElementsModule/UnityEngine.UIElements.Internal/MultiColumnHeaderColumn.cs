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
		[Address(RVA = "0x4CB95B0", Offset = "0x4CB95B0", VA = "0x4CB95B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60021A9")]
		[Address(RVA = "0x4CB95C0", Offset = "0x4CB95C0", VA = "0x4CB95C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170008A2")]
	public ColumnMover mover
	{
		[Token(Token = "0x60021AA")]
		[Address(RVA = "0x4CB95E0", Offset = "0x4CB95E0", VA = "0x4CB95E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60021AB")]
		[Address(RVA = "0x4CB95F0", Offset = "0x4CB95F0", VA = "0x4CB95F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170008A3")]
	public string sortOrderLabel
	{
		[Token(Token = "0x60021AC")]
		[Address(RVA = "0x4CB7980", Offset = "0x4CB7980", VA = "0x4CB7980")]
		set
		{
		}
	}

	[Token(Token = "0x170008A4")]
	public Column column
	{
		[Token(Token = "0x60021AD")]
		[Address(RVA = "0x4CB9610", Offset = "0x4CB9610", VA = "0x4CB9610")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60021AE")]
		[Address(RVA = "0x4CB9620", Offset = "0x4CB9620", VA = "0x4CB9620")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170008A5")]
	public VisualElement content
	{
		[Token(Token = "0x60021AF")]
		[Address(RVA = "0x4CB9640", Offset = "0x4CB9640", VA = "0x4CB9640")]
		get
		{
			return null;
		}
		[Token(Token = "0x60021B0")]
		[Address(RVA = "0x4CB9650", Offset = "0x4CB9650", VA = "0x4CB9650")]
		set
		{
		}
	}

	[Token(Token = "0x170008A6")]
	private bool isContentBound
	{
		[Token(Token = "0x60021B1")]
		[Address(RVA = "0x4CB9810", Offset = "0x4CB9810", VA = "0x4CB9810")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60021B2")]
		[Address(RVA = "0x4CB98D0", Offset = "0x4CB98D0", VA = "0x4CB98D0")]
		set
		{
		}
	}

	[Token(Token = "0x60021B3")]
	[Address(RVA = "0x4CB4850", Offset = "0x4CB4850", VA = "0x4CB4850")]
	public MultiColumnHeaderColumn(Column column)
	{
	}

	[Token(Token = "0x60021B4")]
	[Address(RVA = "0x4CB9D00", Offset = "0x4CB9D00", VA = "0x4CB9D00")]
	private void InitManipulators()
	{
	}

	[Token(Token = "0x60021B5")]
	[Address(RVA = "0x4CB9F70", Offset = "0x4CB9F70", VA = "0x4CB9F70")]
	private void UpdateDataFromColumn()
	{
	}

	[Token(Token = "0x60021B6")]
	[Address(RVA = "0x4CBA0F0", Offset = "0x4CBA0F0", VA = "0x4CBA0F0")]
	private void BindHeaderContent()
	{
	}

	[Token(Token = "0x60021B7")]
	[Address(RVA = "0x4CB9FB0", Offset = "0x4CB9FB0", VA = "0x4CB9FB0")]
	private void UnbindHeaderContent()
	{
	}

	[Token(Token = "0x60021B8")]
	[Address(RVA = "0x4CB9750", Offset = "0x4CB9750", VA = "0x4CB9750")]
	private void DestroyHeaderContent()
	{
	}

	[Token(Token = "0x60021B9")]
	[Address(RVA = "0x4CBA230", Offset = "0x4CBA230", VA = "0x4CBA230")]
	private VisualElement CreateDefaultHeaderContent()
	{
		return null;
	}

	[Token(Token = "0x60021BA")]
	[Address(RVA = "0x4CBA3C0", Offset = "0x4CBA3C0", VA = "0x4CBA3C0")]
	private void DefaultBindHeaderContent(VisualElement ve)
	{
	}

	[Token(Token = "0x60021BB")]
	[Address(RVA = "0x4CB9970", Offset = "0x4CB9970", VA = "0x4CB9970")]
	private void UpdateHeaderTemplate()
	{
	}

	[Token(Token = "0x60021BC")]
	[Address(RVA = "0x4CB9C00", Offset = "0x4CB9C00", VA = "0x4CB9C00")]
	private void UpdateGeometryFromColumn()
	{
	}
}
