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
		[Address(RVA = "0x6C0B7A0", Offset = "0x6C0A7A0", VA = "0x6C0B7A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002F3A")]
		[Address(RVA = "0x6C0B7B0", Offset = "0x6C0A7B0", VA = "0x6C0B7B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000BC8")]
	public ColumnMover mover
	{
		[Token(Token = "0x6002F3B")]
		[Address(RVA = "0x6C0B7D0", Offset = "0x6C0A7D0", VA = "0x6C0B7D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002F3C")]
		[Address(RVA = "0x6C0B7E0", Offset = "0x6C0A7E0", VA = "0x6C0B7E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000BC9")]
	public string sortOrderLabel
	{
		[Token(Token = "0x6002F3D")]
		[Address(RVA = "0x6C09B50", Offset = "0x6C08B50", VA = "0x6C09B50")]
		set
		{
		}
	}

	[Token(Token = "0x17000BCA")]
	public Column column
	{
		[Token(Token = "0x6002F3E")]
		[Address(RVA = "0x6C0B800", Offset = "0x6C0A800", VA = "0x6C0B800")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002F3F")]
		[Address(RVA = "0x6C0B810", Offset = "0x6C0A810", VA = "0x6C0B810")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000BCB")]
	public VisualElement content
	{
		[Token(Token = "0x6002F40")]
		[Address(RVA = "0x6C0B830", Offset = "0x6C0A830", VA = "0x6C0B830")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002F41")]
		[Address(RVA = "0x6C0B840", Offset = "0x6C0A840", VA = "0x6C0B840")]
		set
		{
		}
	}

	[Token(Token = "0x17000BCC")]
	private bool isContentBound
	{
		[Token(Token = "0x6002F42")]
		[Address(RVA = "0x6C0BAE0", Offset = "0x6C0AAE0", VA = "0x6C0BAE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002F43")]
		[Address(RVA = "0x6C0BBA0", Offset = "0x6C0ABA0", VA = "0x6C0BBA0")]
		set
		{
		}
	}

	[Token(Token = "0x6002F44")]
	[Address(RVA = "0x6C06B70", Offset = "0x6C05B70", VA = "0x6C06B70")]
	public MultiColumnHeaderColumn(Column column)
	{
	}

	[Token(Token = "0x6002F45")]
	[Address(RVA = "0x6C0C2C0", Offset = "0x6C0B2C0", VA = "0x6C0C2C0")]
	private void OnColumnChanged(Column c, ColumnDataType role)
	{
	}

	[Token(Token = "0x6002F46")]
	[Address(RVA = "0x6C0C4D0", Offset = "0x6C0B4D0", VA = "0x6C0C4D0")]
	private void OnColumnResized(Column c)
	{
	}

	[Token(Token = "0x6002F47")]
	[Address(RVA = "0x6C0BFD0", Offset = "0x6C0AFD0", VA = "0x6C0BFD0")]
	private void InitManipulators()
	{
	}

	[Token(Token = "0x6002F48")]
	[Address(RVA = "0x6C0C4E0", Offset = "0x6C0B4E0", VA = "0x6C0C4E0")]
	private void OnMoverChanged(ColumnMover mv)
	{
	}

	[Token(Token = "0x6002F49")]
	[Address(RVA = "0x6C0C4A0", Offset = "0x6C0B4A0", VA = "0x6C0C4A0")]
	private void UpdateDataFromColumn()
	{
	}

	[Token(Token = "0x6002F4A")]
	[Address(RVA = "0x6C0C6C0", Offset = "0x6C0B6C0", VA = "0x6C0C6C0")]
	private void BindHeaderContent()
	{
	}

	[Token(Token = "0x6002F4B")]
	[Address(RVA = "0x6C0C580", Offset = "0x6C0B580", VA = "0x6C0C580")]
	private void UnbindHeaderContent()
	{
	}

	[Token(Token = "0x6002F4C")]
	[Address(RVA = "0x6C0B940", Offset = "0x6C0A940", VA = "0x6C0B940")]
	private void DestroyHeaderContent()
	{
	}

	[Token(Token = "0x6002F4D")]
	[Address(RVA = "0x6C0C800", Offset = "0x6C0B800", VA = "0x6C0C800")]
	private VisualElement CreateDefaultHeaderContent()
	{
		return null;
	}

	[Token(Token = "0x6002F4E")]
	[Address(RVA = "0x6C0C990", Offset = "0x6C0B990", VA = "0x6C0C990")]
	private void DefaultBindHeaderContent(VisualElement ve)
	{
	}

	[Token(Token = "0x6002F4F")]
	[Address(RVA = "0x6C0BC40", Offset = "0x6C0AC40", VA = "0x6C0BC40")]
	private void UpdateHeaderTemplate()
	{
	}

	[Token(Token = "0x6002F50")]
	[Address(RVA = "0x6C0BED0", Offset = "0x6C0AED0", VA = "0x6C0BED0")]
	private void UpdateGeometryFromColumn()
	{
	}

	[Token(Token = "0x6002F51")]
	[Address(RVA = "0x6C0A7B0", Offset = "0x6C097B0", VA = "0x6C0A7B0")]
	public void Dispose()
	{
	}
}
