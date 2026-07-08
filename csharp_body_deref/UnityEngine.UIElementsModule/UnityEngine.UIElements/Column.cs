using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000CA")]
public class Column
{
	[Token(Token = "0x20000CB")]
	internal class UxmlObjectFactory<T> : UxmlObjectFactory<T, UxmlObjectTraits<T>> where T : Column, new()
	{
		[Token(Token = "0x60005A9")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x20000CC")]
	internal class UxmlObjectFactory : UxmlObjectFactory<Column>
	{
		[Token(Token = "0x60005AA")]
		[Address(RVA = "0x4CBC0C0", Offset = "0x4CBC0C0", VA = "0x4CBC0C0")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x20000CD")]
	internal class UxmlObjectTraits<T> : UnityEngine.UIElements.UxmlObjectTraits<T> where T : Column
	{
		[Token(Token = "0x4000359")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_Name;

		[Token(Token = "0x400035A")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_Text;

		[Token(Token = "0x400035B")]
		[FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_Visible;

		[Token(Token = "0x400035C")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_Width;

		[Token(Token = "0x400035D")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_MinWidth;

		[Token(Token = "0x400035E")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_MaxWidth;

		[Token(Token = "0x400035F")]
		[FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_Stretch;

		[Token(Token = "0x4000360")]
		[FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_Sortable;

		[Token(Token = "0x4000361")]
		[FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_Optional;

		[Token(Token = "0x4000362")]
		[FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_Resizable;

		[Token(Token = "0x4000363")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_HeaderTemplateId;

		[Token(Token = "0x4000364")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_CellTemplateId;

		[Token(Token = "0x60005AB")]
		private static Length ParseLength(string str, Length defaultValue)
		{
			return default(Length);
		}

		[Token(Token = "0x60005AC")]
		public override void Init(ref T obj, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60005AD")]
		public UxmlObjectTraits()
		{
		}
	}

	[Token(Token = "0x4000341")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string k_InvalidTemplateError;

	[Token(Token = "0x4000342")]
	[FieldOffset(Offset = "0x10")]
	private string m_Name;

	[Token(Token = "0x4000343")]
	[FieldOffset(Offset = "0x18")]
	private string m_Title;

	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x20")]
	private Background m_Icon;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x40")]
	private bool m_Visible;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x44")]
	private Length m_Width;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x4C")]
	private Length m_MinWidth;

	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x54")]
	private Length m_MaxWidth;

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x5C")]
	private float m_DesiredWidth;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x60")]
	private bool m_Stretchable;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x61")]
	private bool m_Sortable;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x62")]
	private bool m_Optional;

	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x63")]
	private bool m_Resizable;

	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x68")]
	private Func<VisualElement> m_MakeHeader;

	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x70")]
	private Action<VisualElement> m_BindHeader;

	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0x78")]
	private Action<VisualElement> m_UnbindHeader;

	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x80")]
	private Action<VisualElement> m_DestroyHeader;

	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0x88")]
	private Func<VisualElement> m_MakeCell;

	[Token(Token = "0x4000353")]
	[FieldOffset(Offset = "0x90")]
	private Action<VisualElement, int> m_BindCell;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0x98")]
	private Action<VisualElement, int> m_UnbindCellItem;

	[Token(Token = "0x170000E7")]
	public string name
	{
		[Token(Token = "0x600057C")]
		[Address(RVA = "0x4CBB3A0", Offset = "0x4CBB3A0", VA = "0x4CBB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600057D")]
		[Address(RVA = "0x4CBB3B0", Offset = "0x4CBB3B0", VA = "0x4CBB3B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public string title
	{
		[Token(Token = "0x600057E")]
		[Address(RVA = "0x4CBB440", Offset = "0x4CBB440", VA = "0x4CBB440")]
		get
		{
			return null;
		}
		[Token(Token = "0x600057F")]
		[Address(RVA = "0x4CBB450", Offset = "0x4CBB450", VA = "0x4CBB450")]
		set
		{
		}
	}

	[Token(Token = "0x170000E9")]
	public Background icon
	{
		[Token(Token = "0x6000580")]
		[Address(RVA = "0x4CBB4B0", Offset = "0x4CBB4B0", VA = "0x4CBB4B0")]
		get
		{
			return default(Background);
		}
	}

	[Token(Token = "0x170000EA")]
	internal int index
	{
		[Token(Token = "0x6000581")]
		[Address(RVA = "0x4CBB4D0", Offset = "0x4CBB4D0", VA = "0x4CBB4D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000EB")]
	internal int displayIndex
	{
		[Token(Token = "0x6000582")]
		[Address(RVA = "0x4CBB650", Offset = "0x4CBB650", VA = "0x4CBB650")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000EC")]
	internal int visibleIndex
	{
		[Token(Token = "0x6000583")]
		[Address(RVA = "0x4CBB800", Offset = "0x4CBB800", VA = "0x4CBB800")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000ED")]
	public bool visible
	{
		[Token(Token = "0x6000584")]
		[Address(RVA = "0x4CBB8B0", Offset = "0x4CBB8B0", VA = "0x4CBB8B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000585")]
		[Address(RVA = "0x4CBB8C0", Offset = "0x4CBB8C0", VA = "0x4CBB8C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000EE")]
	public Length width
	{
		[Token(Token = "0x6000586")]
		[Address(RVA = "0x4CBB900", Offset = "0x4CBB900", VA = "0x4CBB900")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6000587")]
		[Address(RVA = "0x4CBB910", Offset = "0x4CBB910", VA = "0x4CBB910")]
		set
		{
		}
	}

	[Token(Token = "0x170000EF")]
	public Length minWidth
	{
		[Token(Token = "0x6000588")]
		[Address(RVA = "0x4CBB9B0", Offset = "0x4CBB9B0", VA = "0x4CBB9B0")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6000589")]
		[Address(RVA = "0x4CBB9C0", Offset = "0x4CBB9C0", VA = "0x4CBB9C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F0")]
	public Length maxWidth
	{
		[Token(Token = "0x600058A")]
		[Address(RVA = "0x4CBBA10", Offset = "0x4CBBA10", VA = "0x4CBBA10")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x600058B")]
		[Address(RVA = "0x4CBBA20", Offset = "0x4CBBA20", VA = "0x4CBBA20")]
		set
		{
		}
	}

	[Token(Token = "0x170000F1")]
	internal float desiredWidth
	{
		[Token(Token = "0x600058C")]
		[Address(RVA = "0x4CBBA70", Offset = "0x4CBBA70", VA = "0x4CBBA70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600058D")]
		[Address(RVA = "0x4CBB980", Offset = "0x4CBB980", VA = "0x4CBB980")]
		set
		{
		}
	}

	[Token(Token = "0x170000F2")]
	public bool sortable
	{
		[Token(Token = "0x600058E")]
		[Address(RVA = "0x4CBBA80", Offset = "0x4CBBA80", VA = "0x4CBBA80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600058F")]
		[Address(RVA = "0x4CBBA90", Offset = "0x4CBBA90", VA = "0x4CBBA90")]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	public bool stretchable
	{
		[Token(Token = "0x6000590")]
		[Address(RVA = "0x4CBBAD0", Offset = "0x4CBBAD0", VA = "0x4CBBAD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000591")]
		[Address(RVA = "0x4CBBAE0", Offset = "0x4CBBAE0", VA = "0x4CBBAE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F4")]
	public bool optional
	{
		[Token(Token = "0x6000592")]
		[Address(RVA = "0x4CBBB20", Offset = "0x4CBBB20", VA = "0x4CBBB20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000593")]
		[Address(RVA = "0x4CBBB30", Offset = "0x4CBBB30", VA = "0x4CBBB30")]
		set
		{
		}
	}

	[Token(Token = "0x170000F5")]
	public bool resizable
	{
		[Token(Token = "0x6000594")]
		[Address(RVA = "0x4CBBB70", Offset = "0x4CBBB70", VA = "0x4CBBB70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000595")]
		[Address(RVA = "0x4CBBB80", Offset = "0x4CBBB80", VA = "0x4CBBB80")]
		set
		{
		}
	}

	[Token(Token = "0x170000F6")]
	public Func<VisualElement> makeHeader
	{
		[Token(Token = "0x6000596")]
		[Address(RVA = "0x4CBBBC0", Offset = "0x4CBBBC0", VA = "0x4CBBBC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000597")]
		[Address(RVA = "0x4CBBBD0", Offset = "0x4CBBBD0", VA = "0x4CBBBD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	public Action<VisualElement> bindHeader
	{
		[Token(Token = "0x6000598")]
		[Address(RVA = "0x4CBBC30", Offset = "0x4CBBC30", VA = "0x4CBBC30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F8")]
	public Action<VisualElement> unbindHeader
	{
		[Token(Token = "0x6000599")]
		[Address(RVA = "0x4CBBC40", Offset = "0x4CBBC40", VA = "0x4CBBC40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F9")]
	public Action<VisualElement> destroyHeader
	{
		[Token(Token = "0x600059A")]
		[Address(RVA = "0x4CBBC50", Offset = "0x4CBBC50", VA = "0x4CBBC50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FA")]
	public Func<VisualElement> makeCell
	{
		[Token(Token = "0x600059B")]
		[Address(RVA = "0x4CBBC60", Offset = "0x4CBBC60", VA = "0x4CBBC60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600059C")]
		[Address(RVA = "0x4CBBC70", Offset = "0x4CBBC70", VA = "0x4CBBC70")]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	public Action<VisualElement, int> bindCell
	{
		[Token(Token = "0x600059D")]
		[Address(RVA = "0x4CBBCE0", Offset = "0x4CBBCE0", VA = "0x4CBBCE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FC")]
	public Action<VisualElement, int> unbindCell
	{
		[Token(Token = "0x600059E")]
		[Address(RVA = "0x4CBBCF0", Offset = "0x4CBBCF0", VA = "0x4CBBCF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FD")]
	public Action<VisualElement> destroyCell
	{
		[Token(Token = "0x600059F")]
		[Address(RVA = "0x4CBBD00", Offset = "0x4CBBD00", VA = "0x4CBBD00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FE")]
	public Columns collection
	{
		[Token(Token = "0x60005A0")]
		[Address(RVA = "0x4CBBD10", Offset = "0x4CBBD10", VA = "0x4CBBD10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60005A1")]
		[Address(RVA = "0x4CBBD20", Offset = "0x4CBBD20", VA = "0x4CBBD20")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1400000E")]
	internal event Action<Column, ColumnDataType> changed
	{
		[Token(Token = "0x60005A2")]
		[Address(RVA = "0x4CBBD40", Offset = "0x4CBBD40", VA = "0x4CBBD40")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005A3")]
		[Address(RVA = "0x4CBBDF0", Offset = "0x4CBBDF0", VA = "0x4CBBDF0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000F")]
	internal event Action<Column> resized
	{
		[Token(Token = "0x60005A4")]
		[Address(RVA = "0x4CBBEA0", Offset = "0x4CBBEA0", VA = "0x4CBBEA0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005A5")]
		[Address(RVA = "0x4CBBF50", Offset = "0x4CBBF50", VA = "0x4CBBF50")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x4CBB410", Offset = "0x4CBB410", VA = "0x4CBB410")]
	private void NotifyChange(ColumnDataType type)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x4CBC000", Offset = "0x4CBC000", VA = "0x4CBC000")]
	public Column()
	{
	}
}
