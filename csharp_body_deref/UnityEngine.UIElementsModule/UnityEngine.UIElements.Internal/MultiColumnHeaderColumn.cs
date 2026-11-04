// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Internal.MultiColumnHeaderColumn
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Internal;

[Token(Token = "0x2000671")]
internal class MultiColumnHeaderColumn : VisualElement
{
	[Token(Token = "0x400189E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string ussClassName;

	[Token(Token = "0x400189F")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string sortableUssClassName;

	[Token(Token = "0x40018A0")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string sortedAscendingUssClassName;

	[Token(Token = "0x40018A1")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string sortedDescendingUssClassName;

	[Token(Token = "0x40018A2")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string movingUssClassName;

	[Token(Token = "0x40018A3")]
	[FieldOffset(Offset = "0x28")]
	public static readonly string contentContainerUssClassName;

	[Token(Token = "0x40018A4")]
	[FieldOffset(Offset = "0x30")]
	public static readonly string contentUssClassName;

	[Token(Token = "0x40018A5")]
	[FieldOffset(Offset = "0x38")]
	public static readonly string defaultContentUssClassName;

	[Token(Token = "0x40018A6")]
	[FieldOffset(Offset = "0x40")]
	public static readonly string hasIconUssClassName;

	[Token(Token = "0x40018A7")]
	[FieldOffset(Offset = "0x48")]
	public static readonly string hasTitleUssClassName;

	[Token(Token = "0x40018A8")]
	[FieldOffset(Offset = "0x50")]
	public static readonly string titleUssClassName;

	[Token(Token = "0x40018A9")]
	[FieldOffset(Offset = "0x58")]
	public static readonly string iconElementName;

	[Token(Token = "0x40018AA")]
	[FieldOffset(Offset = "0x60")]
	public static readonly string titleElementName;

	[Token(Token = "0x40018AB")]
	[FieldOffset(Offset = "0x68")]
	private static readonly string s_BoundVEPropertyName;

	[Token(Token = "0x40018AC")]
	[FieldOffset(Offset = "0x70")]
	private static readonly string s_BindingCallbackVEPropertyName;

	[Token(Token = "0x40018AD")]
	[FieldOffset(Offset = "0x78")]
	private static readonly string s_UnbindingCallbackVEPropertyName;

	[Token(Token = "0x40018AE")]
	[FieldOffset(Offset = "0x80")]
	private static readonly string s_DestroyCallbackVEPropertyName;

	[Token(Token = "0x40018AF")]
	[FieldOffset(Offset = "0x2C8")]
	private VisualElement m_ContentContainer;

	[Token(Token = "0x40018B0")]
	[FieldOffset(Offset = "0x2D0")]
	private VisualElement m_Content;

	[Token(Token = "0x40018B1")]
	[FieldOffset(Offset = "0x2D8")]
	private MultiColumnHeaderColumnSortIndicator m_SortIndicatorContainer;

	[Token(Token = "0x40018B2")]
	[FieldOffset(Offset = "0x2E0")]
	private IVisualElementScheduledItem m_ScheduledHeaderTemplateUpdate;

	[Token(Token = "0x17000BC7")]
	public Clickable clickable
	{
		[Token(Token = "0x6002F39")]
		[Address(RVA = "0x312F020", Offset = "0x312D620", VA = "0x18312F020")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002F3A")]
		[Address(RVA = "0x312F050", Offset = "0x312D650", VA = "0x18312F050")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000BC8")]
	public ColumnMover mover
	{
		[Token(Token = "0x6002F3B")]
		[Address(RVA = "0x2B08510", Offset = "0x2B06B10", VA = "0x182B08510")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002F3C")]
		[Address(RVA = "0x2B08960", Offset = "0x2B06F60", VA = "0x182B08960")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000BC9")]
	public string sortOrderLabel
	{
		[Token(Token = "0x6002F3D")]
		[Address(RVA = "0x3207210", Offset = "0x3205810", VA = "0x183207210")]
		set
		{
		}
	}

	[Token(Token = "0x17000BCA")]
	public Column column
	{
		[Token(Token = "0x6002F3E")]
		[Address(RVA = "0x3206DC0", Offset = "0x32053C0", VA = "0x183206DC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002F3F")]
		[Address(RVA = "0x3206E90", Offset = "0x3205490", VA = "0x183206E90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000BCB")]
	public VisualElement content
	{
		[Token(Token = "0x6002F40")]
		[Address(RVA = "0x31DC9F0", Offset = "0x31DAFF0", VA = "0x1831DC9F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002F41")]
		[Address(RVA = "0x3206EB0", Offset = "0x32054B0", VA = "0x183206EB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000BCC")]
	private bool isContentBound
	{
		[Token(Token = "0x6002F42")]
		[Address(RVA = "0x3206DD0", Offset = "0x32053D0", VA = "0x183206DD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002F43")]
		[Address(RVA = "0x3207160", Offset = "0x3205760", VA = "0x183207160")]
		set
		{
		}
	}

	[Token(Token = "0x6002F44")]
	[Address(RVA = "0x32063D0", Offset = "0x32049D0", VA = "0x1832063D0")]
	public MultiColumnHeaderColumn(Column column)
	{
	}

	[Token(Token = "0x6002F45")]
	[Address(RVA = "0x3205710", Offset = "0x3203D10", VA = "0x183205710")]
	private void OnColumnChanged(Column c, ColumnDataType role)
	{
	}

	[Token(Token = "0x6002F46")]
	[Address(RVA = "0x3205830", Offset = "0x3203E30", VA = "0x183205830")]
	private void OnColumnResized(Column c)
	{
	}

	[Token(Token = "0x6002F47")]
	[Address(RVA = "0x3205320", Offset = "0x3203920", VA = "0x183205320")]
	private void InitManipulators()
	{
	}

	[Token(Token = "0x6002F48")]
	[Address(RVA = "0x3205840", Offset = "0x3203E40", VA = "0x183205840")]
	private void OnMoverChanged(ColumnMover mv)
	{
	}

	[Token(Token = "0x6002F49")]
	[Address(RVA = "0x32059D0", Offset = "0x3203FD0", VA = "0x1832059D0")]
	private void UpdateDataFromColumn()
	{
	}

	[Token(Token = "0x6002F4A")]
	[Address(RVA = "0x3204850", Offset = "0x3202E50", VA = "0x183204850")]
	private void BindHeaderContent()
	{
	}

	[Token(Token = "0x6002F4B")]
	[Address(RVA = "0x32058F0", Offset = "0x3203EF0", VA = "0x1832058F0")]
	private void UnbindHeaderContent()
	{
	}

	[Token(Token = "0x6002F4C")]
	[Address(RVA = "0x3204F40", Offset = "0x3203540", VA = "0x183204F40")]
	private void DestroyHeaderContent()
	{
	}

	[Token(Token = "0x6002F4D")]
	[Address(RVA = "0x3204930", Offset = "0x3202F30", VA = "0x183204930")]
	private VisualElement CreateDefaultHeaderContent()
	{
		return null;
	}

	[Token(Token = "0x6002F4E")]
	[Address(RVA = "0x3204BB0", Offset = "0x32031B0", VA = "0x183204BB0")]
	private void DefaultBindHeaderContent(VisualElement ve)
	{
	}

	[Token(Token = "0x6002F4F")]
	[Address(RVA = "0x3205C00", Offset = "0x3204200", VA = "0x183205C00")]
	private void UpdateHeaderTemplate()
	{
	}

	[Token(Token = "0x6002F50")]
	[Address(RVA = "0x3205AD0", Offset = "0x32040D0", VA = "0x183205AD0")]
	private void UpdateGeometryFromColumn()
	{
	}

	[Token(Token = "0x6002F51")]
	[Address(RVA = "0x32050F0", Offset = "0x32036F0", VA = "0x1832050F0")]
	public void Dispose()
	{
	}
}
