// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Column
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000108")]
[UxmlObject]
public class Column : INotifyBindablePropertyChanged
{
	[Token(Token = "0x2000109")]
	[Obsolete("UxmlObjectFactory<T> is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	internal class UxmlObjectFactory<T> : UxmlObjectFactory<T, UxmlObjectTraits<T>> where T : Column, new()
	{
		[Token(Token = "0x60007BC")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x200010A")]
	[Obsolete("UxmlObjectFactory<T> is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	internal class UxmlObjectFactory : UxmlObjectFactory<Column>
	{
		[Token(Token = "0x60007BD")]
		[Address(RVA = "0x6C153C0", Offset = "0x6C143C0", VA = "0x6C153C0")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x200010B")]
	[Obsolete("UxmlObjectTraits<T> is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	internal class UxmlObjectTraits<T> : UnityEngine.UIElements.UxmlObjectTraits<T> where T : Column
	{
		[Token(Token = "0x40004AA")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_Name;

		[Token(Token = "0x40004AB")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_Text;

		[Token(Token = "0x40004AC")]
		[FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_Visible;

		[Token(Token = "0x40004AD")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_Width;

		[Token(Token = "0x40004AE")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_MinWidth;

		[Token(Token = "0x40004AF")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_MaxWidth;

		[Token(Token = "0x40004B0")]
		[FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_Stretch;

		[Token(Token = "0x40004B1")]
		[FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_Sortable;

		[Token(Token = "0x40004B2")]
		[FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_Optional;

		[Token(Token = "0x40004B3")]
		[FieldOffset(Offset = "0x0")]
		private UxmlBoolAttributeDescription m_Resizable;

		[Token(Token = "0x40004B4")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_HeaderTemplateId;

		[Token(Token = "0x40004B5")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_CellTemplateId;

		[Token(Token = "0x40004B6")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_BindingPath;

		[Token(Token = "0x60007BE")]
		private static Length ParseLength(string str, Length defaultValue)
		{
			return default(Length);
		}

		[Token(Token = "0x60007BF")]
		public override void Init(ref T obj, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60007C0")]
		public UxmlObjectTraits()
		{
		}
	}

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x0")]
	private static readonly BindingId nameProperty;

	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x98")]
	private static readonly BindingId titleProperty;

	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x130")]
	private static readonly BindingId iconProperty;

	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x1C8")]
	private static readonly BindingId visibleProperty;

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x260")]
	private static readonly BindingId widthProperty;

	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x2F8")]
	private static readonly BindingId minWidthProperty;

	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x390")]
	private static readonly BindingId maxWidthProperty;

	[Token(Token = "0x4000488")]
	[FieldOffset(Offset = "0x428")]
	private static readonly BindingId sortableProperty;

	[Token(Token = "0x4000489")]
	[FieldOffset(Offset = "0x4C0")]
	private static readonly BindingId stretchableProperty;

	[Token(Token = "0x400048A")]
	[FieldOffset(Offset = "0x558")]
	private static readonly BindingId optionalProperty;

	[Token(Token = "0x400048B")]
	[FieldOffset(Offset = "0x5F0")]
	private static readonly BindingId resizableProperty;

	[Token(Token = "0x400048C")]
	[FieldOffset(Offset = "0x688")]
	private static readonly BindingId headerTemplateProperty;

	[Token(Token = "0x400048D")]
	[FieldOffset(Offset = "0x720")]
	private static readonly BindingId cellTemplateProperty;

	[Token(Token = "0x400048E")]
	[FieldOffset(Offset = "0x10")]
	private string m_Name;

	[Token(Token = "0x400048F")]
	[FieldOffset(Offset = "0x18")]
	private string m_Title;

	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x20")]
	private Background m_Icon;

	[Token(Token = "0x4000491")]
	[FieldOffset(Offset = "0x40")]
	private bool m_Visible;

	[Token(Token = "0x4000492")]
	[FieldOffset(Offset = "0x44")]
	private Length m_Width;

	[Token(Token = "0x4000493")]
	[FieldOffset(Offset = "0x4C")]
	private Length m_MinWidth;

	[Token(Token = "0x4000494")]
	[FieldOffset(Offset = "0x54")]
	private Length m_MaxWidth;

	[Token(Token = "0x4000495")]
	[FieldOffset(Offset = "0x5C")]
	private float m_DesiredWidth;

	[Token(Token = "0x4000496")]
	[FieldOffset(Offset = "0x60")]
	private bool m_Stretchable;

	[Token(Token = "0x4000497")]
	[FieldOffset(Offset = "0x61")]
	private bool m_Sortable;

	[Token(Token = "0x4000498")]
	[FieldOffset(Offset = "0x62")]
	private bool m_Optional;

	[Token(Token = "0x4000499")]
	[FieldOffset(Offset = "0x63")]
	private bool m_Resizable;

	[Token(Token = "0x400049A")]
	[FieldOffset(Offset = "0x68")]
	private VisualTreeAsset m_HeaderTemplate;

	[Token(Token = "0x400049B")]
	[FieldOffset(Offset = "0x70")]
	private VisualTreeAsset m_CellTemplate;

	[Token(Token = "0x400049C")]
	[FieldOffset(Offset = "0x78")]
	private Func<VisualElement> m_MakeHeader;

	[Token(Token = "0x400049D")]
	[FieldOffset(Offset = "0x80")]
	private Action<VisualElement> m_BindHeader;

	[Token(Token = "0x400049E")]
	[FieldOffset(Offset = "0x88")]
	private Action<VisualElement> m_UnbindHeader;

	[Token(Token = "0x400049F")]
	[FieldOffset(Offset = "0x90")]
	private Action<VisualElement> m_DestroyHeader;

	[Token(Token = "0x40004A0")]
	[FieldOffset(Offset = "0x98")]
	private Func<VisualElement> m_MakeCell;

	[Token(Token = "0x40004A1")]
	[FieldOffset(Offset = "0xA0")]
	private Action<VisualElement, int> m_BindCell;

	[Token(Token = "0x40004A2")]
	[FieldOffset(Offset = "0xA8")]
	private Action<VisualElement, int> m_UnbindCellItem;

	[Token(Token = "0x40004A3")]
	[FieldOffset(Offset = "0xB0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private EventHandler<BindablePropertyChangedEventArgs> m_propertyChanged;

	[Token(Token = "0x40004A8")]
	[FieldOffset(Offset = "0xD8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<Column, ColumnDataType> m_changed;

	[Token(Token = "0x40004A9")]
	[FieldOffset(Offset = "0xE0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<Column> m_resized;

	[Token(Token = "0x17000159")]
	[CreateProperty]
	public string name
	{
		[Token(Token = "0x6000784")]
		[Address(RVA = "0x6C13250", Offset = "0x6C12250", VA = "0x6C13250")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000785")]
		[Address(RVA = "0x6C13260", Offset = "0x6C12260", VA = "0x6C13260")]
		set
		{
		}
	}

	[Token(Token = "0x1700015A")]
	[CreateProperty]
	public string title
	{
		[Token(Token = "0x6000786")]
		[Address(RVA = "0x6C134A0", Offset = "0x6C124A0", VA = "0x6C134A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000787")]
		[Address(RVA = "0x6C134B0", Offset = "0x6C124B0", VA = "0x6C134B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700015B")]
	[CreateProperty]
	public Background icon
	{
		[Token(Token = "0x6000788")]
		[Address(RVA = "0x6C13610", Offset = "0x6C12610", VA = "0x6C13610")]
		get
		{
			return default(Background);
		}
		[Token(Token = "0x6000789")]
		[Address(RVA = "0x6C13630", Offset = "0x6C12630", VA = "0x6C13630")]
		set
		{
		}
	}

	[Token(Token = "0x1700015C")]
	public Comparison<int> comparison
	{
		[Token(Token = "0x600078A")]
		[Address(RVA = "0x6C137C0", Offset = "0x6C127C0", VA = "0x6C137C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015D")]
	internal int index
	{
		[Token(Token = "0x600078B")]
		[Address(RVA = "0x6C137D0", Offset = "0x6C127D0", VA = "0x6C137D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700015E")]
	internal int displayIndex
	{
		[Token(Token = "0x600078C")]
		[Address(RVA = "0x6C13950", Offset = "0x6C12950", VA = "0x6C13950")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700015F")]
	internal int visibleIndex
	{
		[Token(Token = "0x600078D")]
		[Address(RVA = "0x6C13AF0", Offset = "0x6C12AF0", VA = "0x6C13AF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000160")]
	[CreateProperty]
	public bool visible
	{
		[Token(Token = "0x600078E")]
		[Address(RVA = "0x6C13BA0", Offset = "0x6C12BA0", VA = "0x6C13BA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600078F")]
		[Address(RVA = "0x6C13BB0", Offset = "0x6C12BB0", VA = "0x6C13BB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000161")]
	[CreateProperty]
	public Length width
	{
		[Token(Token = "0x6000790")]
		[Address(RVA = "0x6C13CF0", Offset = "0x6C12CF0", VA = "0x6C13CF0")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6000791")]
		[Address(RVA = "0x6C13D00", Offset = "0x6C12D00", VA = "0x6C13D00")]
		set
		{
		}
	}

	[Token(Token = "0x17000162")]
	[CreateProperty]
	public Length minWidth
	{
		[Token(Token = "0x6000792")]
		[Address(RVA = "0x6C13EA0", Offset = "0x6C12EA0", VA = "0x6C13EA0")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6000793")]
		[Address(RVA = "0x6C13EB0", Offset = "0x6C12EB0", VA = "0x6C13EB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000163")]
	[CreateProperty]
	public Length maxWidth
	{
		[Token(Token = "0x6000794")]
		[Address(RVA = "0x6C14000", Offset = "0x6C13000", VA = "0x6C14000")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6000795")]
		[Address(RVA = "0x6C14010", Offset = "0x6C13010", VA = "0x6C14010")]
		set
		{
		}
	}

	[Token(Token = "0x17000164")]
	internal float desiredWidth
	{
		[Token(Token = "0x6000796")]
		[Address(RVA = "0x6C14160", Offset = "0x6C13160", VA = "0x6C14160")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000797")]
		[Address(RVA = "0x6C13E70", Offset = "0x6C12E70", VA = "0x6C13E70")]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	[CreateProperty]
	public bool sortable
	{
		[Token(Token = "0x6000798")]
		[Address(RVA = "0x6C14170", Offset = "0x6C13170", VA = "0x6C14170")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000799")]
		[Address(RVA = "0x6C14180", Offset = "0x6C13180", VA = "0x6C14180")]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	[CreateProperty]
	public bool stretchable
	{
		[Token(Token = "0x600079A")]
		[Address(RVA = "0x6C142C0", Offset = "0x6C132C0", VA = "0x6C142C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600079B")]
		[Address(RVA = "0x6C142D0", Offset = "0x6C132D0", VA = "0x6C142D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000167")]
	[CreateProperty]
	public bool optional
	{
		[Token(Token = "0x600079C")]
		[Address(RVA = "0x6C14410", Offset = "0x6C13410", VA = "0x6C14410")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600079D")]
		[Address(RVA = "0x6C14420", Offset = "0x6C13420", VA = "0x6C14420")]
		set
		{
		}
	}

	[Token(Token = "0x17000168")]
	[CreateProperty]
	public bool resizable
	{
		[Token(Token = "0x600079E")]
		[Address(RVA = "0x6C14560", Offset = "0x6C13560", VA = "0x6C14560")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600079F")]
		[Address(RVA = "0x6C14570", Offset = "0x6C13570", VA = "0x6C14570")]
		set
		{
		}
	}

	[Token(Token = "0x17000169")]
	public string bindingPath
	{
		[Token(Token = "0x60007A0")]
		[Address(RVA = "0x6C146B0", Offset = "0x6C136B0", VA = "0x6C146B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700016A")]
	[CreateProperty]
	public VisualTreeAsset headerTemplate
	{
		[Token(Token = "0x60007A1")]
		[Address(RVA = "0x6C146D0", Offset = "0x6C136D0", VA = "0x6C146D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007A2")]
		[Address(RVA = "0x6C146E0", Offset = "0x6C136E0", VA = "0x6C146E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700016B")]
	[CreateProperty]
	public VisualTreeAsset cellTemplate
	{
		[Token(Token = "0x60007A3")]
		[Address(RVA = "0x6C14860", Offset = "0x6C13860", VA = "0x6C14860")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007A4")]
		[Address(RVA = "0x6C14870", Offset = "0x6C13870", VA = "0x6C14870")]
		set
		{
		}
	}

	[Token(Token = "0x1700016C")]
	public Func<VisualElement> makeHeader
	{
		[Token(Token = "0x60007A5")]
		[Address(RVA = "0x6C149F0", Offset = "0x6C139F0", VA = "0x6C149F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007A6")]
		[Address(RVA = "0x6C14A00", Offset = "0x6C13A00", VA = "0x6C14A00")]
		set
		{
		}
	}

	[Token(Token = "0x1700016D")]
	public Action<VisualElement> bindHeader
	{
		[Token(Token = "0x60007A7")]
		[Address(RVA = "0x6C14A60", Offset = "0x6C13A60", VA = "0x6C14A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016E")]
	public Action<VisualElement> unbindHeader
	{
		[Token(Token = "0x60007A8")]
		[Address(RVA = "0x6C14A70", Offset = "0x6C13A70", VA = "0x6C14A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016F")]
	public Action<VisualElement> destroyHeader
	{
		[Token(Token = "0x60007A9")]
		[Address(RVA = "0x6C14A80", Offset = "0x6C13A80", VA = "0x6C14A80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000170")]
	public Func<VisualElement> makeCell
	{
		[Token(Token = "0x60007AA")]
		[Address(RVA = "0x6C14A90", Offset = "0x6C13A90", VA = "0x6C14A90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007AB")]
		[Address(RVA = "0x6C14AA0", Offset = "0x6C13AA0", VA = "0x6C14AA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000171")]
	public Action<VisualElement, int> bindCell
	{
		[Token(Token = "0x60007AC")]
		[Address(RVA = "0x6C14B10", Offset = "0x6C13B10", VA = "0x6C14B10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000172")]
	public Action<VisualElement, int> unbindCell
	{
		[Token(Token = "0x60007AD")]
		[Address(RVA = "0x6C14B20", Offset = "0x6C13B20", VA = "0x6C14B20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000173")]
	public Action<VisualElement> destroyCell
	{
		[Token(Token = "0x60007AE")]
		[Address(RVA = "0x6C14B30", Offset = "0x6C13B30", VA = "0x6C14B30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000174")]
	public Columns collection
	{
		[Token(Token = "0x60007AF")]
		[Address(RVA = "0x6C14B40", Offset = "0x6C13B40", VA = "0x6C14B40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007B0")]
		[Address(RVA = "0x6C14B50", Offset = "0x6C13B50", VA = "0x6C14B50")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x14000014")]
	public event EventHandler<BindablePropertyChangedEventArgs> propertyChanged
	{
		[Token(Token = "0x6000782")]
		[Address(RVA = "0x6C130F0", Offset = "0x6C120F0", VA = "0x6C130F0", Slot = "4")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000783")]
		[Address(RVA = "0x6C131A0", Offset = "0x6C121A0", VA = "0x6C131A0", Slot = "5")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000015")]
	internal event Action<Column, ColumnDataType> changed
	{
		[Token(Token = "0x60007B1")]
		[Address(RVA = "0x6C14B70", Offset = "0x6C13B70", VA = "0x6C14B70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60007B2")]
		[Address(RVA = "0x6C14C20", Offset = "0x6C13C20", VA = "0x6C14C20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000016")]
	internal event Action<Column> resized
	{
		[Token(Token = "0x60007B3")]
		[Address(RVA = "0x6C14CD0", Offset = "0x6C13CD0", VA = "0x6C14CD0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60007B4")]
		[Address(RVA = "0x6C14D80", Offset = "0x6C13D80", VA = "0x6C14D80")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x6C133B0", Offset = "0x6C123B0", VA = "0x6C133B0")]
	private void NotifyChange(ColumnDataType type)
	{
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x6C133E0", Offset = "0x6C123E0", VA = "0x6C133E0")]
	private void NotifyPropertyChanged(in BindingId property)
	{
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x6C14E30", Offset = "0x6C13E30", VA = "0x6C14E30")]
	internal float GetWidth(float layoutWidth)
	{
		return default(float);
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x6C14E50", Offset = "0x6C13E50", VA = "0x6C14E50")]
	internal float GetMaxWidth(float layoutWidth)
	{
		return default(float);
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x6C14E70", Offset = "0x6C13E70", VA = "0x6C14E70")]
	internal float GetMinWidth(float layoutWidth)
	{
		return default(float);
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x6C14E90", Offset = "0x6C13E90", VA = "0x6C14E90")]
	public Column()
	{
	}
}
