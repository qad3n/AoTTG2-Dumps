using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text.RegularExpressions;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000C6")]
public class DebugUI
{
	[Token(Token = "0x20000C7")]
	public class Container : Widget, IContainer
	{
		[Token(Token = "0x40002DD")]
		private const string k_IDToken = "#";

		[Token(Token = "0x1700008F")]
		internal bool hideDisplayName
		{
			[Token(Token = "0x6000758")]
			[Address(RVA = "0x4883630", Offset = "0x4883630", VA = "0x4883630")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000090")]
		public ObservableList<Widget> children
		{
			[Token(Token = "0x6000759")]
			[Address(RVA = "0x4883690", Offset = "0x4883690", VA = "0x4883690", Slot = "12")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600075A")]
			[Address(RVA = "0x48836A0", Offset = "0x48836A0", VA = "0x48836A0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000091")]
		public override Panel panel
		{
			[Token(Token = "0x600075B")]
			[Address(RVA = "0x48836B0", Offset = "0x48836B0", VA = "0x48836B0", Slot = "4")]
			get
			{
				return null;
			}
			[Token(Token = "0x600075C")]
			[Address(RVA = "0x48836C0", Offset = "0x48836C0", VA = "0x48836C0", Slot = "5")]
			internal set
			{
			}
		}

		[Token(Token = "0x600075D")]
		[Address(RVA = "0x4883790", Offset = "0x4883790", VA = "0x4883790")]
		public Container()
		{
		}

		[Token(Token = "0x600075E")]
		[Address(RVA = "0x4883A00", Offset = "0x4883A00", VA = "0x4883A00")]
		public Container(string id)
		{
		}

		[Token(Token = "0x600075F")]
		[Address(RVA = "0x4883810", Offset = "0x4883810", VA = "0x4883810")]
		public Container(string displayName, ObservableList<Widget> children)
		{
		}

		[Token(Token = "0x6000760")]
		[Address(RVA = "0x4883AA0", Offset = "0x4883AA0", VA = "0x4883AA0", Slot = "11")]
		internal override void GenerateQueryPath()
		{
		}

		[Token(Token = "0x6000761")]
		[Address(RVA = "0x4883C70", Offset = "0x4883C70", VA = "0x4883C70", Slot = "16")]
		protected virtual void OnItemAdded(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x6000762")]
		[Address(RVA = "0x4883DA0", Offset = "0x4883DA0", VA = "0x4883DA0", Slot = "17")]
		protected virtual void OnItemRemoved(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x6000763")]
		[Address(RVA = "0x4883E10", Offset = "0x4883E10", VA = "0x4883E10", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x20000C8")]
	public class Foldout : Container, IValueField
	{
		[Token(Token = "0x20000C9")]
		public struct ContextMenuItem
		{
			[Token(Token = "0x40002E4")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public string displayName;

			[Token(Token = "0x40002E5")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public Action action;
		}

		[Token(Token = "0x40002DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public bool opened;

		[Token(Token = "0x40002E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
		public bool isHeader;

		[Token(Token = "0x40002E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public List<ContextMenuItem> contextMenuItems;

		[Token(Token = "0x17000092")]
		public bool isReadOnly
		{
			[Token(Token = "0x6000764")]
			[Address(RVA = "0x4883F70", Offset = "0x4883F70", VA = "0x4883F70")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000093")]
		public string[] columnLabels
		{
			[Token(Token = "0x6000765")]
			[Address(RVA = "0x4883F80", Offset = "0x4883F80", VA = "0x4883F80")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000766")]
			[Address(RVA = "0x4883F90", Offset = "0x4883F90", VA = "0x4883F90")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000094")]
		public string[] columnTooltips
		{
			[Token(Token = "0x6000767")]
			[Address(RVA = "0x4883FA0", Offset = "0x4883FA0", VA = "0x4883FA0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000768")]
			[Address(RVA = "0x4883FB0", Offset = "0x4883FB0", VA = "0x4883FB0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000769")]
		[Address(RVA = "0x4883FC0", Offset = "0x4883FC0", VA = "0x4883FC0")]
		public Foldout()
		{
		}

		[Token(Token = "0x600076A")]
		[Address(RVA = "0x4884040", Offset = "0x4884040", VA = "0x4884040")]
		public Foldout(string displayName, ObservableList<Widget> children, [Optional] string[] columnLabels, [Optional] string[] columnTooltips)
		{
		}

		[Token(Token = "0x600076B")]
		[Address(RVA = "0x4884080", Offset = "0x4884080", VA = "0x4884080")]
		public bool GetValue()
		{
			return default(bool);
		}

		[Token(Token = "0x600076C")]
		[Address(RVA = "0x4884090", Offset = "0x4884090", VA = "0x4884090", Slot = "18")]
		private object UnityEngine_002ERendering_002EDebugUI_002EIValueField_002EGetValue()
		{
			return null;
		}

		[Token(Token = "0x600076D")]
		[Address(RVA = "0x48840B0", Offset = "0x48840B0", VA = "0x48840B0", Slot = "19")]
		public void SetValue(object value)
		{
		}

		[Token(Token = "0x600076E")]
		[Address(RVA = "0x48840F0", Offset = "0x48840F0", VA = "0x48840F0", Slot = "20")]
		public object ValidateValue(object value)
		{
			return null;
		}

		[Token(Token = "0x600076F")]
		[Address(RVA = "0x4884100", Offset = "0x4884100", VA = "0x4884100")]
		public void SetValue(bool value)
		{
		}
	}

	[Token(Token = "0x20000CA")]
	public class HBox : Container
	{
		[Token(Token = "0x6000770")]
		[Address(RVA = "0x4884110", Offset = "0x4884110", VA = "0x4884110")]
		public HBox()
		{
		}
	}

	[Token(Token = "0x20000CB")]
	public class VBox : Container
	{
		[Token(Token = "0x6000771")]
		[Address(RVA = "0x48841D0", Offset = "0x48841D0", VA = "0x48841D0")]
		public VBox()
		{
		}
	}

	[Token(Token = "0x20000CC")]
	public class Table : Container
	{
		[Token(Token = "0x20000CD")]
		public class Row : Foldout
		{
			[Token(Token = "0x6000778")]
			[Address(RVA = "0x4884720", Offset = "0x4884720", VA = "0x4884720")]
			public Row()
			{
			}
		}

		[Token(Token = "0x40002E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public bool isReadOnly;

		[Token(Token = "0x40002E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private bool[] m_Header;

		[Token(Token = "0x17000095")]
		public bool[] VisibleColumns
		{
			[Token(Token = "0x6000775")]
			[Address(RVA = "0x4884390", Offset = "0x4884390", VA = "0x4884390")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000772")]
		[Address(RVA = "0x4884290", Offset = "0x4884290", VA = "0x4884290")]
		public Table()
		{
		}

		[Token(Token = "0x6000773")]
		[Address(RVA = "0x4884350", Offset = "0x4884350", VA = "0x4884350")]
		public void SetColumnVisibility(int index, bool visible)
		{
		}

		[Token(Token = "0x6000774")]
		[Address(RVA = "0x48845E0", Offset = "0x48845E0", VA = "0x48845E0")]
		public bool GetColumnVisibility(int index)
		{
			return default(bool);
		}

		[Token(Token = "0x6000776")]
		[Address(RVA = "0x4884620", Offset = "0x4884620", VA = "0x4884620", Slot = "16")]
		protected override void OnItemAdded(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x6000777")]
		[Address(RVA = "0x48846A0", Offset = "0x48846A0", VA = "0x48846A0", Slot = "17")]
		protected override void OnItemRemoved(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}
	}

	[Token(Token = "0x20000CE")]
	public abstract class Field<T> : Widget, IValueField
	{
		[Token(Token = "0x40002EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Action<Field<T>, T> onValueChanged;

		[Token(Token = "0x17000096")]
		public Func<T> getter
		{
			[Token(Token = "0x6000779")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600077A")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000097")]
		public Action<T> setter
		{
			[Token(Token = "0x600077B")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600077C")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x600077D")]
		private object UnityEngine_002ERendering_002EDebugUI_002EIValueField_002EValidateValue(object value)
		{
			return null;
		}

		[Token(Token = "0x600077E")]
		public virtual T ValidateValue(T value)
		{
			return (T)null;
		}

		[Token(Token = "0x600077F")]
		private object UnityEngine_002ERendering_002EDebugUI_002EIValueField_002EGetValue()
		{
			return null;
		}

		[Token(Token = "0x6000780")]
		public T GetValue()
		{
			return (T)null;
		}

		[Token(Token = "0x6000781")]
		public void SetValue(object value)
		{
		}

		[Token(Token = "0x6000782")]
		public virtual void SetValue(T value)
		{
		}

		[Token(Token = "0x6000783")]
		protected Field()
		{
		}
	}

	[Token(Token = "0x20000CF")]
	public class BoolField : Field<bool>
	{
		[Token(Token = "0x6000784")]
		[Address(RVA = "0x48847E0", Offset = "0x48847E0", VA = "0x48847E0")]
		public BoolField()
		{
		}
	}

	[Token(Token = "0x20000D0")]
	public class HistoryBoolField : BoolField
	{
		[Token(Token = "0x17000098")]
		public Func<bool>[] historyGetter
		{
			[Token(Token = "0x6000785")]
			[Address(RVA = "0x4884820", Offset = "0x4884820", VA = "0x4884820")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000786")]
			[Address(RVA = "0x4884830", Offset = "0x4884830", VA = "0x4884830")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000099")]
		public int historyDepth
		{
			[Token(Token = "0x6000787")]
			[Address(RVA = "0x4884840", Offset = "0x4884840", VA = "0x4884840")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000788")]
		[Address(RVA = "0x4884850", Offset = "0x4884850", VA = "0x4884850")]
		public bool GetHistoryValue(int historyIndex)
		{
			return default(bool);
		}

		[Token(Token = "0x6000789")]
		[Address(RVA = "0x4884890", Offset = "0x4884890", VA = "0x4884890")]
		public HistoryBoolField()
		{
		}
	}

	[Token(Token = "0x20000D1")]
	public class IntField : Field<int>
	{
		[Token(Token = "0x40002EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public Func<int> min;

		[Token(Token = "0x40002ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Func<int> max;

		[Token(Token = "0x40002EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public int incStep;

		[Token(Token = "0x40002EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
		public int intStepMult;

		[Token(Token = "0x600078A")]
		[Address(RVA = "0x48848D0", Offset = "0x48848D0", VA = "0x48848D0", Slot = "15")]
		public override int ValidateValue(int value)
		{
			return default(int);
		}

		[Token(Token = "0x600078B")]
		[Address(RVA = "0x4884920", Offset = "0x4884920", VA = "0x4884920")]
		public IntField()
		{
		}
	}

	[Token(Token = "0x20000D2")]
	public class UIntField : Field<uint>
	{
		[Token(Token = "0x40002F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public Func<uint> min;

		[Token(Token = "0x40002F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Func<uint> max;

		[Token(Token = "0x40002F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public uint incStep;

		[Token(Token = "0x40002F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
		public uint intStepMult;

		[Token(Token = "0x600078C")]
		[Address(RVA = "0x4884970", Offset = "0x4884970", VA = "0x4884970", Slot = "15")]
		public override uint ValidateValue(uint value)
		{
			return default(uint);
		}

		[Token(Token = "0x600078D")]
		[Address(RVA = "0x48849C0", Offset = "0x48849C0", VA = "0x48849C0")]
		public UIntField()
		{
		}
	}

	[Token(Token = "0x20000D3")]
	public class FloatField : Field<float>
	{
		[Token(Token = "0x40002F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public Func<float> min;

		[Token(Token = "0x40002F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Func<float> max;

		[Token(Token = "0x40002F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public float incStep;

		[Token(Token = "0x40002F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
		public float incStepMult;

		[Token(Token = "0x40002F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		public int decimals;

		[Token(Token = "0x600078E")]
		[Address(RVA = "0x4884A10", Offset = "0x4884A10", VA = "0x4884A10", Slot = "15")]
		public override float ValidateValue(float value)
		{
			return default(float);
		}

		[Token(Token = "0x600078F")]
		[Address(RVA = "0x4884A80", Offset = "0x4884A80", VA = "0x4884A80")]
		public FloatField()
		{
		}
	}

	[Token(Token = "0x20000D4")]
	public abstract class EnumField<T> : Field<T>
	{
		[Token(Token = "0x40002F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public GUIContent[] enumNames;

		[Token(Token = "0x40002FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int[] m_EnumValues;

		[Token(Token = "0x40002FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static Regex s_NicifyRegEx;

		[Token(Token = "0x1700009A")]
		public int[] enumValues
		{
			[Token(Token = "0x6000790")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000791")]
			set
			{
			}
		}

		[Token(Token = "0x6000792")]
		protected void AutoFillFromType(Type enumType)
		{
		}

		[Token(Token = "0x6000793")]
		protected EnumField()
		{
		}
	}

	[Token(Token = "0x20000D6")]
	public class EnumField : EnumField<int>
	{
		[Token(Token = "0x40002FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		internal int[] quickSeparators;

		[Token(Token = "0x40002FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private int[] m_Indexes;

		[Token(Token = "0x1700009B")]
		internal int[] indexes
		{
			[Token(Token = "0x6000798")]
			[Address(RVA = "0x4884AD0", Offset = "0x4884AD0", VA = "0x4884AD0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700009C")]
		public Func<int> getIndex
		{
			[Token(Token = "0x6000799")]
			[Address(RVA = "0x4884B50", Offset = "0x4884B50", VA = "0x4884B50")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600079A")]
			[Address(RVA = "0x4884B60", Offset = "0x4884B60", VA = "0x4884B60")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700009D")]
		public Action<int> setIndex
		{
			[Token(Token = "0x600079B")]
			[Address(RVA = "0x4884B70", Offset = "0x4884B70", VA = "0x4884B70")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600079C")]
			[Address(RVA = "0x4884B80", Offset = "0x4884B80", VA = "0x4884B80")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700009E")]
		public int currentIndex
		{
			[Token(Token = "0x600079D")]
			[Address(RVA = "0x4884BA0", Offset = "0x4884BA0", VA = "0x4884BA0")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x600079E")]
			[Address(RVA = "0x4884BD0", Offset = "0x4884BD0", VA = "0x4884BD0")]
			set
			{
			}
		}

		[Token(Token = "0x1700009F")]
		public Type autoEnum
		{
			[Token(Token = "0x600079F")]
			[Address(RVA = "0x4884C00", Offset = "0x4884C00", VA = "0x4884C00")]
			set
			{
			}
		}

		[Token(Token = "0x60007A0")]
		[Address(RVA = "0x4884C50", Offset = "0x4884C50", VA = "0x4884C50")]
		internal void InitQuickSeparators()
		{
		}

		[Token(Token = "0x60007A1")]
		[Address(RVA = "0x4884E70", Offset = "0x4884E70", VA = "0x4884E70", Slot = "16")]
		public override void SetValue(int value)
		{
		}

		[Token(Token = "0x60007A2")]
		[Address(RVA = "0x4884F90", Offset = "0x4884F90", VA = "0x4884F90")]
		public EnumField()
		{
		}
	}

	[Token(Token = "0x20000D8")]
	public class ObjectPopupField : Field<Object>
	{
		[Token(Token = "0x170000A0")]
		public Func<IEnumerable<Object>> getObjects
		{
			[Token(Token = "0x60007A6")]
			[Address(RVA = "0x48850F0", Offset = "0x48850F0", VA = "0x48850F0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007A7")]
			[Address(RVA = "0x4885100", Offset = "0x4885100", VA = "0x4885100")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60007A8")]
		[Address(RVA = "0x4885110", Offset = "0x4885110", VA = "0x4885110")]
		public ObjectPopupField()
		{
		}
	}

	[Token(Token = "0x20000D9")]
	public class HistoryEnumField : EnumField
	{
		[Token(Token = "0x170000A1")]
		public Func<int>[] historyIndexGetter
		{
			[Token(Token = "0x60007A9")]
			[Address(RVA = "0x4885150", Offset = "0x4885150", VA = "0x4885150")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007AA")]
			[Address(RVA = "0x4885160", Offset = "0x4885160", VA = "0x4885160")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000A2")]
		public int historyDepth
		{
			[Token(Token = "0x60007AB")]
			[Address(RVA = "0x4885180", Offset = "0x4885180", VA = "0x4885180")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60007AC")]
		[Address(RVA = "0x48851A0", Offset = "0x48851A0", VA = "0x48851A0")]
		public int GetHistoryValue(int historyIndex)
		{
			return default(int);
		}

		[Token(Token = "0x60007AD")]
		[Address(RVA = "0x48851E0", Offset = "0x48851E0", VA = "0x48851E0")]
		public HistoryEnumField()
		{
		}
	}

	[Token(Token = "0x20000DA")]
	public class BitField : EnumField<Enum>
	{
		[Token(Token = "0x4000306")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private Type m_EnumType;

		[Token(Token = "0x170000A3")]
		public Type enumType
		{
			[Token(Token = "0x60007AE")]
			[Address(RVA = "0x4885240", Offset = "0x4885240", VA = "0x4885240")]
			get
			{
				return null;
			}
			[Token(Token = "0x60007AF")]
			[Address(RVA = "0x4885250", Offset = "0x4885250", VA = "0x4885250")]
			set
			{
			}
		}

		[Token(Token = "0x60007B0")]
		[Address(RVA = "0x48852B0", Offset = "0x48852B0", VA = "0x48852B0")]
		public BitField()
		{
		}
	}

	[Token(Token = "0x20000DB")]
	public class ColorField : Field<Color>
	{
		[Token(Token = "0x4000307")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public bool hdr;

		[Token(Token = "0x4000308")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
		public bool showAlpha;

		[Token(Token = "0x4000309")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x62")]
		public bool showPicker;

		[Token(Token = "0x400030A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
		public float incStep;

		[Token(Token = "0x400030B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public float incStepMult;

		[Token(Token = "0x400030C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
		public int decimals;

		[Token(Token = "0x60007B1")]
		[Address(RVA = "0x4885310", Offset = "0x4885310", VA = "0x4885310", Slot = "15")]
		public override Color ValidateValue(Color value)
		{
			return default(Color);
		}

		[Token(Token = "0x60007B2")]
		[Address(RVA = "0x4885380", Offset = "0x4885380", VA = "0x4885380")]
		public ColorField()
		{
		}
	}

	[Token(Token = "0x20000DC")]
	public class Vector2Field : Field<Vector2>
	{
		[Token(Token = "0x400030D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public float incStep;

		[Token(Token = "0x400030E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
		public float incStepMult;

		[Token(Token = "0x400030F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public int decimals;

		[Token(Token = "0x60007B3")]
		[Address(RVA = "0x48853D0", Offset = "0x48853D0", VA = "0x48853D0")]
		public Vector2Field()
		{
		}
	}

	[Token(Token = "0x20000DD")]
	public class Vector3Field : Field<Vector3>
	{
		[Token(Token = "0x4000310")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public float incStep;

		[Token(Token = "0x4000311")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
		public float incStepMult;

		[Token(Token = "0x4000312")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public int decimals;

		[Token(Token = "0x60007B4")]
		[Address(RVA = "0x4885420", Offset = "0x4885420", VA = "0x4885420")]
		public Vector3Field()
		{
		}
	}

	[Token(Token = "0x20000DE")]
	public class Vector4Field : Field<Vector4>
	{
		[Token(Token = "0x4000313")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public float incStep;

		[Token(Token = "0x4000314")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
		public float incStepMult;

		[Token(Token = "0x4000315")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public int decimals;

		[Token(Token = "0x60007B5")]
		[Address(RVA = "0x4885470", Offset = "0x4885470", VA = "0x4885470")]
		public Vector4Field()
		{
		}
	}

	[Token(Token = "0x20000DF")]
	public class ObjectField : Field<Object>
	{
		[Token(Token = "0x4000316")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public Type type;

		[Token(Token = "0x60007B6")]
		[Address(RVA = "0x48854C0", Offset = "0x48854C0", VA = "0x48854C0")]
		public ObjectField()
		{
		}
	}

	[Token(Token = "0x20000E0")]
	public class ObjectListField : Field<Object[]>
	{
		[Token(Token = "0x4000317")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public Type type;

		[Token(Token = "0x60007B7")]
		[Address(RVA = "0x4885550", Offset = "0x4885550", VA = "0x4885550")]
		public ObjectListField()
		{
		}
	}

	[Token(Token = "0x20000E1")]
	public class MessageBox : Widget
	{
		[Token(Token = "0x20000E2")]
		public enum Style
		{
			[Token(Token = "0x400031A")]
			Info,
			[Token(Token = "0x400031B")]
			Warning,
			[Token(Token = "0x400031C")]
			Error
		}

		[Token(Token = "0x4000318")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public Style style;

		[Token(Token = "0x60007B8")]
		[Address(RVA = "0x48855E0", Offset = "0x48855E0", VA = "0x48855E0")]
		public MessageBox()
		{
		}
	}

	[Token(Token = "0x20000E3")]
	public class Panel : IContainer, IComparable<Panel>
	{
		[Token(Token = "0x170000A4")]
		public Flags flags
		{
			[Token(Token = "0x60007B9")]
			[Address(RVA = "0x48855F0", Offset = "0x48855F0", VA = "0x48855F0")]
			[CompilerGenerated]
			get
			{
				return default(Flags);
			}
			[Token(Token = "0x60007BA")]
			[Address(RVA = "0x4885600", Offset = "0x4885600", VA = "0x4885600")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000A5")]
		public string displayName
		{
			[Token(Token = "0x60007BB")]
			[Address(RVA = "0x4885610", Offset = "0x4885610", VA = "0x4885610", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007BC")]
			[Address(RVA = "0x4885620", Offset = "0x4885620", VA = "0x4885620", Slot = "6")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000A6")]
		public int groupIndex
		{
			[Token(Token = "0x60007BD")]
			[Address(RVA = "0x4885630", Offset = "0x4885630", VA = "0x4885630")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60007BE")]
			[Address(RVA = "0x4885640", Offset = "0x4885640", VA = "0x4885640")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000A7")]
		public string queryPath
		{
			[Token(Token = "0x60007BF")]
			[Address(RVA = "0x4885650", Offset = "0x4885650", VA = "0x4885650", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000A8")]
		public bool isEditorOnly
		{
			[Token(Token = "0x60007C0")]
			[Address(RVA = "0x4885660", Offset = "0x4885660", VA = "0x4885660")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000A9")]
		public bool isRuntimeOnly
		{
			[Token(Token = "0x60007C1")]
			[Address(RVA = "0x4885670", Offset = "0x4885670", VA = "0x4885670")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000AA")]
		public bool isInactiveInEditor
		{
			[Token(Token = "0x60007C2")]
			[Address(RVA = "0x4885680", Offset = "0x4885680", VA = "0x4885680")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000AB")]
		public bool editorForceUpdate
		{
			[Token(Token = "0x60007C3")]
			[Address(RVA = "0x48856E0", Offset = "0x48856E0", VA = "0x48856E0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000AC")]
		public ObservableList<Widget> children
		{
			[Token(Token = "0x60007C4")]
			[Address(RVA = "0x48856F0", Offset = "0x48856F0", VA = "0x48856F0", Slot = "4")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007C5")]
			[Address(RVA = "0x4885700", Offset = "0x4885700", VA = "0x4885700")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1400000A")]
		public event Action<Panel> onSetDirty
		{
			[Token(Token = "0x60007C6")]
			[Address(RVA = "0x4885710", Offset = "0x4885710", VA = "0x4885710")]
			[CompilerGenerated]
			add
			{
			}
			[Token(Token = "0x60007C7")]
			[Address(RVA = "0x48857C0", Offset = "0x48857C0", VA = "0x48857C0")]
			[CompilerGenerated]
			remove
			{
			}
		}

		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x4885870", Offset = "0x4885870", VA = "0x4885870")]
		public Panel()
		{
		}

		[Token(Token = "0x60007C9")]
		[Address(RVA = "0x4885AB0", Offset = "0x4885AB0", VA = "0x4885AB0", Slot = "9")]
		protected virtual void OnItemAdded(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x4885B10", Offset = "0x4885B10", VA = "0x4885B10", Slot = "10")]
		protected virtual void OnItemRemoved(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x60007CB")]
		[Address(RVA = "0x4883CE0", Offset = "0x4883CE0", VA = "0x4883CE0")]
		public void SetDirty()
		{
		}

		[Token(Token = "0x60007CC")]
		[Address(RVA = "0x4885B70", Offset = "0x4885B70", VA = "0x4885B70", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60007CD")]
		[Address(RVA = "0x4885C50", Offset = "0x4885C50", VA = "0x4885C50", Slot = "8")]
		private int System_002EIComparable_003CUnityEngine_002ERendering_002EDebugUI_002EPanel_003E_002ECompareTo(Panel other)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20000E5")]
	[Flags]
	public enum Flags
	{
		[Token(Token = "0x4000325")]
		None = 0,
		[Token(Token = "0x4000326")]
		EditorOnly = 2,
		[Token(Token = "0x4000327")]
		RuntimeOnly = 4,
		[Token(Token = "0x4000328")]
		EditorForceUpdate = 8,
		[Token(Token = "0x4000329")]
		FrequentlyUsed = 0x10
	}

	[Token(Token = "0x20000E6")]
	public abstract class Widget
	{
		[Token(Token = "0x20000E7")]
		public struct NameAndTooltip
		{
			[Token(Token = "0x4000331")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public string name;

			[Token(Token = "0x4000332")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public string tooltip;
		}

		[Token(Token = "0x400032A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		protected Panel m_Panel;

		[Token(Token = "0x400032B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		protected IContainer m_Parent;

		[Token(Token = "0x4000330")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public Func<bool> isHiddenCallback;

		[Token(Token = "0x170000AD")]
		public virtual Panel panel
		{
			[Token(Token = "0x60007D1")]
			[Address(RVA = "0x4885D10", Offset = "0x4885D10", VA = "0x4885D10", Slot = "4")]
			get
			{
				return null;
			}
			[Token(Token = "0x60007D2")]
			[Address(RVA = "0x4885D20", Offset = "0x4885D20", VA = "0x4885D20", Slot = "5")]
			internal set
			{
			}
		}

		[Token(Token = "0x170000AE")]
		public virtual IContainer parent
		{
			[Token(Token = "0x60007D3")]
			[Address(RVA = "0x4885D30", Offset = "0x4885D30", VA = "0x4885D30", Slot = "6")]
			get
			{
				return null;
			}
			[Token(Token = "0x60007D4")]
			[Address(RVA = "0x4885D40", Offset = "0x4885D40", VA = "0x4885D40", Slot = "7")]
			internal set
			{
			}
		}

		[Token(Token = "0x170000AF")]
		public Flags flags
		{
			[Token(Token = "0x60007D5")]
			[Address(RVA = "0x4885D50", Offset = "0x4885D50", VA = "0x4885D50")]
			[CompilerGenerated]
			get
			{
				return default(Flags);
			}
			[Token(Token = "0x60007D6")]
			[Address(RVA = "0x4885D60", Offset = "0x4885D60", VA = "0x4885D60")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000B0")]
		public string displayName
		{
			[Token(Token = "0x60007D7")]
			[Address(RVA = "0x4885D70", Offset = "0x4885D70", VA = "0x4885D70", Slot = "8")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007D8")]
			[Address(RVA = "0x4885D80", Offset = "0x4885D80", VA = "0x4885D80", Slot = "9")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000B1")]
		public string tooltip
		{
			[Token(Token = "0x60007D9")]
			[Address(RVA = "0x4885D90", Offset = "0x4885D90", VA = "0x4885D90")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007DA")]
			[Address(RVA = "0x4885DA0", Offset = "0x4885DA0", VA = "0x4885DA0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000B2")]
		public string queryPath
		{
			[Token(Token = "0x60007DB")]
			[Address(RVA = "0x4885DB0", Offset = "0x4885DB0", VA = "0x4885DB0", Slot = "10")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007DC")]
			[Address(RVA = "0x4885DC0", Offset = "0x4885DC0", VA = "0x4885DC0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170000B3")]
		public bool isEditorOnly
		{
			[Token(Token = "0x60007DD")]
			[Address(RVA = "0x4885DD0", Offset = "0x4885DD0", VA = "0x4885DD0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000B4")]
		public bool isRuntimeOnly
		{
			[Token(Token = "0x60007DE")]
			[Address(RVA = "0x4885DE0", Offset = "0x4885DE0", VA = "0x4885DE0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000B5")]
		public bool isInactiveInEditor
		{
			[Token(Token = "0x60007DF")]
			[Address(RVA = "0x4885DF0", Offset = "0x4885DF0", VA = "0x4885DF0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000B6")]
		public bool isHidden
		{
			[Token(Token = "0x60007E0")]
			[Address(RVA = "0x4883F50", Offset = "0x4883F50", VA = "0x4883F50")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000B7")]
		public NameAndTooltip nameAndTooltip
		{
			[Token(Token = "0x60007E3")]
			[Address(RVA = "0x4885ED0", Offset = "0x4885ED0", VA = "0x4885ED0")]
			set
			{
			}
		}

		[Token(Token = "0x60007E1")]
		[Address(RVA = "0x4883B60", Offset = "0x4883B60", VA = "0x4883B60", Slot = "11")]
		internal virtual void GenerateQueryPath()
		{
		}

		[Token(Token = "0x60007E2")]
		[Address(RVA = "0x4885E50", Offset = "0x4885E50", VA = "0x4885E50", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60007E4")]
		[Address(RVA = "0x4883A90", Offset = "0x4883A90", VA = "0x4883A90")]
		protected Widget()
		{
		}
	}

	[Token(Token = "0x20000E8")]
	public interface IContainer
	{
		[Token(Token = "0x170000B8")]
		ObservableList<Widget> children
		{
			[Token(Token = "0x60007E5")]
			get;
		}

		[Token(Token = "0x170000B9")]
		string displayName
		{
			[Token(Token = "0x60007E6")]
			get;
			[Token(Token = "0x60007E7")]
			set;
		}

		[Token(Token = "0x170000BA")]
		string queryPath
		{
			[Token(Token = "0x60007E8")]
			get;
		}
	}

	[Token(Token = "0x20000E9")]
	public interface IValueField
	{
		[Token(Token = "0x60007E9")]
		object GetValue();

		[Token(Token = "0x60007EA")]
		void SetValue(object value);

		[Token(Token = "0x60007EB")]
		object ValidateValue(object value);
	}

	[Token(Token = "0x20000EA")]
	public class Button : Widget
	{
		[Token(Token = "0x170000BB")]
		public Action action
		{
			[Token(Token = "0x60007EC")]
			[Address(RVA = "0x4885F10", Offset = "0x4885F10", VA = "0x4885F10")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007ED")]
			[Address(RVA = "0x4885F20", Offset = "0x4885F20", VA = "0x4885F20")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60007EE")]
		[Address(RVA = "0x4885F30", Offset = "0x4885F30", VA = "0x4885F30")]
		public Button()
		{
		}
	}

	[Token(Token = "0x20000EB")]
	public class Value : Widget
	{
		[Token(Token = "0x4000335")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public float refreshRate;

		[Token(Token = "0x4000336")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public string formatString;

		[Token(Token = "0x170000BC")]
		public Func<object> getter
		{
			[Token(Token = "0x60007EF")]
			[Address(RVA = "0x4885F40", Offset = "0x4885F40", VA = "0x4885F40")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007F0")]
			[Address(RVA = "0x4885F50", Offset = "0x4885F50", VA = "0x4885F50")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60007F1")]
		[Address(RVA = "0x4885F60", Offset = "0x4885F60", VA = "0x4885F60")]
		public Value()
		{
		}

		[Token(Token = "0x60007F2")]
		[Address(RVA = "0x4885FB0", Offset = "0x4885FB0", VA = "0x4885FB0", Slot = "12")]
		public virtual object GetValue()
		{
			return null;
		}

		[Token(Token = "0x60007F3")]
		[Address(RVA = "0x4885FD0", Offset = "0x4885FD0", VA = "0x4885FD0", Slot = "13")]
		public virtual string FormatString(object value)
		{
			return null;
		}
	}

	[Token(Token = "0x20000EC")]
	public class ProgressBarValue : Value
	{
		[Token(Token = "0x4000337")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public float min;

		[Token(Token = "0x4000338")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
		public float max;

		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x4886030", Offset = "0x4886030", VA = "0x4886030", Slot = "13")]
		public override string FormatString(object value)
		{
			return null;
		}

		[Token(Token = "0x60007F5")]
		[Address(RVA = "0x4886130", Offset = "0x4886130", VA = "0x4886130")]
		public ProgressBarValue()
		{
		}
	}

	[Token(Token = "0x20000ED")]
	public class ValueTuple : Widget
	{
		[Token(Token = "0x4000339")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public Value[] values;

		[Token(Token = "0x400033A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public int pinnedElementIndex;

		[Token(Token = "0x170000BD")]
		public int numElements
		{
			[Token(Token = "0x60007F7")]
			[Address(RVA = "0x4886190", Offset = "0x4886190", VA = "0x4886190")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000BE")]
		public float refreshRate
		{
			[Token(Token = "0x60007F8")]
			[Address(RVA = "0x48861B0", Offset = "0x48861B0", VA = "0x48861B0")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x60007F9")]
		[Address(RVA = "0x4886200", Offset = "0x4886200", VA = "0x4886200")]
		public ValueTuple()
		{
		}
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x4883620", Offset = "0x4883620", VA = "0x4883620")]
	public DebugUI()
	{
	}
}
