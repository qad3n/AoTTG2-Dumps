// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Column
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x3224FA0", Offset = "0x32235A0", VA = "0x183224FA0")]
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private EventHandler<BindablePropertyChangedEventArgs> m_propertyChanged;

	[Token(Token = "0x40004A8")]
	[FieldOffset(Offset = "0xD8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<Column, ColumnDataType> m_changed;

	[Token(Token = "0x40004A9")]
	[FieldOffset(Offset = "0xE0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<Column> m_resized;

	[Token(Token = "0x17000159")]
	[CreateProperty]
	public string name
	{
		[Token(Token = "0x6000784")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000785")]
		[Address(RVA = "0x3212F10", Offset = "0x3211510", VA = "0x183212F10")]
		set
		{
		}
	}

	[Token(Token = "0x1700015A")]
	[CreateProperty]
	public string title
	{
		[Token(Token = "0x6000786")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000787")]
		[Address(RVA = "0x3213240", Offset = "0x3211840", VA = "0x183213240")]
		set
		{
		}
	}

	[Token(Token = "0x1700015B")]
	[CreateProperty]
	public Background icon
	{
		[Token(Token = "0x6000788")]
		[Address(RVA = "0x3212690", Offset = "0x3210C90", VA = "0x183212690")]
		get
		{
			return default(Background);
		}
		[Token(Token = "0x6000789")]
		[Address(RVA = "0x3212BF0", Offset = "0x32111F0", VA = "0x183212BF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700015C")]
	public Comparison<int> comparison
	{
		[Token(Token = "0x600078A")]
		[Address(RVA = "0x187BC10", Offset = "0x187A210", VA = "0x18187BC10")]
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
		[Address(RVA = "0x32126B0", Offset = "0x3210CB0", VA = "0x1832126B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700015E")]
	internal int displayIndex
	{
		[Token(Token = "0x600078C")]
		[Address(RVA = "0x32125E0", Offset = "0x3210BE0", VA = "0x1832125E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700015F")]
	internal int visibleIndex
	{
		[Token(Token = "0x600078D")]
		[Address(RVA = "0x3212750", Offset = "0x3210D50", VA = "0x183212750")]
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
		[Address(RVA = "0xA374E0", Offset = "0xA35AE0", VA = "0x180A374E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600078F")]
		[Address(RVA = "0x3213300", Offset = "0x3211900", VA = "0x183213300")]
		set
		{
		}
	}

	[Token(Token = "0x17000161")]
	[CreateProperty]
	public Length width
	{
		[Token(Token = "0x6000790")]
		[Address(RVA = "0x187BC80", Offset = "0x187A280", VA = "0x18187BC80")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6000791")]
		[Address(RVA = "0x32133A0", Offset = "0x32119A0", VA = "0x1832133A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000162")]
	[CreateProperty]
	public Length minWidth
	{
		[Token(Token = "0x6000792")]
		[Address(RVA = "0x1BD3D30", Offset = "0x1BD2330", VA = "0x181BD3D30")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6000793")]
		[Address(RVA = "0x3212E60", Offset = "0x3211460", VA = "0x183212E60")]
		set
		{
		}
	}

	[Token(Token = "0x17000163")]
	[CreateProperty]
	public Length maxWidth
	{
		[Token(Token = "0x6000794")]
		[Address(RVA = "0x3212730", Offset = "0x3210D30", VA = "0x183212730")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6000795")]
		[Address(RVA = "0x3212DB0", Offset = "0x32113B0", VA = "0x183212DB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000164")]
	internal float desiredWidth
	{
		[Token(Token = "0x6000796")]
		[Address(RVA = "0x2E909A0", Offset = "0x2E8EFA0", VA = "0x182E909A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000797")]
		[Address(RVA = "0x3212AE0", Offset = "0x32110E0", VA = "0x183212AE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	[CreateProperty]
	public bool sortable
	{
		[Token(Token = "0x6000798")]
		[Address(RVA = "0x198C750", Offset = "0x198AD50", VA = "0x18198C750")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000799")]
		[Address(RVA = "0x3213100", Offset = "0x3211700", VA = "0x183213100")]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	[CreateProperty]
	public bool stretchable
	{
		[Token(Token = "0x600079A")]
		[Address(RVA = "0x198C740", Offset = "0x198AD40", VA = "0x18198C740")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600079B")]
		[Address(RVA = "0x32131A0", Offset = "0x32117A0", VA = "0x1832131A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000167")]
	[CreateProperty]
	public bool optional
	{
		[Token(Token = "0x600079C")]
		[Address(RVA = "0xCDE7F0", Offset = "0xCDCDF0", VA = "0x180CDE7F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600079D")]
		[Address(RVA = "0x3212FC0", Offset = "0x32115C0", VA = "0x183212FC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000168")]
	[CreateProperty]
	public bool resizable
	{
		[Token(Token = "0x600079E")]
		[Address(RVA = "0x3212740", Offset = "0x3210D40", VA = "0x183212740")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600079F")]
		[Address(RVA = "0x3213060", Offset = "0x3211660", VA = "0x183213060")]
		set
		{
		}
	}

	[Token(Token = "0x17000169")]
	public string bindingPath
	{
		[Token(Token = "0x60007A0")]
		[Address(RVA = "0xC8FFC0", Offset = "0xC8E5C0", VA = "0x180C8FFC0")]
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
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007A2")]
		[Address(RVA = "0x3212B10", Offset = "0x3211110", VA = "0x183212B10")]
		set
		{
		}
	}

	[Token(Token = "0x1700016B")]
	[CreateProperty]
	public VisualTreeAsset cellTemplate
	{
		[Token(Token = "0x60007A3")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007A4")]
		[Address(RVA = "0x3212A00", Offset = "0x3211000", VA = "0x183212A00")]
		set
		{
		}
	}

	[Token(Token = "0x1700016C")]
	public Func<VisualElement> makeHeader
	{
		[Token(Token = "0x60007A5")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007A6")]
		[Address(RVA = "0x3212D50", Offset = "0x3211350", VA = "0x183212D50")]
		set
		{
		}
	}

	[Token(Token = "0x1700016D")]
	public Action<VisualElement> bindHeader
	{
		[Token(Token = "0x60007A7")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016E")]
	public Action<VisualElement> unbindHeader
	{
		[Token(Token = "0x60007A8")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016F")]
	public Action<VisualElement> destroyHeader
	{
		[Token(Token = "0x60007A9")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000170")]
	public Func<VisualElement> makeCell
	{
		[Token(Token = "0x60007AA")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007AB")]
		[Address(RVA = "0x3212CE0", Offset = "0x32112E0", VA = "0x183212CE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000171")]
	public Action<VisualElement, int> bindCell
	{
		[Token(Token = "0x60007AC")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000172")]
	public Action<VisualElement, int> unbindCell
	{
		[Token(Token = "0x60007AD")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000173")]
	public Action<VisualElement> destroyCell
	{
		[Token(Token = "0x60007AE")]
		[Address(RVA = "0x187BC00", Offset = "0x187A200", VA = "0x18187BC00")]
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
		[Address(RVA = "0x187BC40", Offset = "0x187A240", VA = "0x18187BC40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007B0")]
		[Address(RVA = "0x1BE7800", Offset = "0x1BE5E00", VA = "0x181BE7800")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x14000014")]
	public event EventHandler<BindablePropertyChangedEventArgs> propertyChanged
	{
		[Token(Token = "0x6000782")]
		[Address(RVA = "0x3212480", Offset = "0x3210A80", VA = "0x183212480", Slot = "4")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000783")]
		[Address(RVA = "0x32128A0", Offset = "0x3210EA0", VA = "0x1832128A0", Slot = "5")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000015")]
	internal event Action<Column, ColumnDataType> changed
	{
		[Token(Token = "0x60007B1")]
		[Address(RVA = "0x32123D0", Offset = "0x32109D0", VA = "0x1832123D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60007B2")]
		[Address(RVA = "0x32127F0", Offset = "0x3210DF0", VA = "0x1832127F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000016")]
	internal event Action<Column> resized
	{
		[Token(Token = "0x60007B3")]
		[Address(RVA = "0x3212530", Offset = "0x3210B30", VA = "0x183212530")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60007B4")]
		[Address(RVA = "0x3212950", Offset = "0x3210F50", VA = "0x183212950")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x32117C0", Offset = "0x320FDC0", VA = "0x1832117C0")]
	private void NotifyChange(ColumnDataType type)
	{
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x32117E0", Offset = "0x320FDE0", VA = "0x1832117E0")]
	private void NotifyPropertyChanged(in BindingId property)
	{
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x3211790", Offset = "0x320FD90", VA = "0x183211790")]
	internal float GetWidth(float layoutWidth)
	{
		return default(float);
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x3211730", Offset = "0x320FD30", VA = "0x183211730")]
	internal float GetMaxWidth(float layoutWidth)
	{
		return default(float);
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x3211760", Offset = "0x320FD60", VA = "0x183211760")]
	internal float GetMinWidth(float layoutWidth)
	{
		return default(float);
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x3212360", Offset = "0x3210960", VA = "0x183212360")]
	public Column()
	{
	}
}
