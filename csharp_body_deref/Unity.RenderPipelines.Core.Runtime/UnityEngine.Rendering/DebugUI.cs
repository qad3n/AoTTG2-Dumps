// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugUI
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x4BA8720", Offset = "0x4BA8720", VA = "0x4BA8720")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000090")]
		public ObservableList<Widget> children
		{
			[Token(Token = "0x6000759")]
			[Address(RVA = "0x4BA8780", Offset = "0x4BA8780", VA = "0x4BA8780", Slot = "12")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600075A")]
			[Address(RVA = "0x4BA8790", Offset = "0x4BA8790", VA = "0x4BA8790")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000091")]
		public override Panel panel
		{
			[Token(Token = "0x600075B")]
			[Address(RVA = "0x4BA87A0", Offset = "0x4BA87A0", VA = "0x4BA87A0", Slot = "4")]
			get
			{
				return null;
			}
			[Token(Token = "0x600075C")]
			[Address(RVA = "0x4BA87B0", Offset = "0x4BA87B0", VA = "0x4BA87B0", Slot = "5")]
			internal set
			{
			}
		}

		[Token(Token = "0x600075D")]
		[Address(RVA = "0x4BA8880", Offset = "0x4BA8880", VA = "0x4BA8880")]
		public Container()
		{
		}

		[Token(Token = "0x600075E")]
		[Address(RVA = "0x4BA8AF0", Offset = "0x4BA8AF0", VA = "0x4BA8AF0")]
		public Container(string id)
		{
		}

		[Token(Token = "0x600075F")]
		[Address(RVA = "0x4BA8900", Offset = "0x4BA8900", VA = "0x4BA8900")]
		public Container(string displayName, ObservableList<Widget> children)
		{
		}

		[Token(Token = "0x6000760")]
		[Address(RVA = "0x4BA8B90", Offset = "0x4BA8B90", VA = "0x4BA8B90", Slot = "11")]
		internal override void GenerateQueryPath()
		{
		}

		[Token(Token = "0x6000761")]
		[Address(RVA = "0x4BA8D60", Offset = "0x4BA8D60", VA = "0x4BA8D60", Slot = "16")]
		protected virtual void OnItemAdded(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x6000762")]
		[Address(RVA = "0x4BA8E90", Offset = "0x4BA8E90", VA = "0x4BA8E90", Slot = "17")]
		protected virtual void OnItemRemoved(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x6000763")]
		[Address(RVA = "0x4BA8F00", Offset = "0x4BA8F00", VA = "0x4BA8F00", Slot = "2")]
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
			[Address(RVA = "0x4BA9060", Offset = "0x4BA9060", VA = "0x4BA9060")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000093")]
		public string[] columnLabels
		{
			[Token(Token = "0x6000765")]
			[Address(RVA = "0x4BA9070", Offset = "0x4BA9070", VA = "0x4BA9070")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000766")]
			[Address(RVA = "0x4BA9080", Offset = "0x4BA9080", VA = "0x4BA9080")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000094")]
		public string[] columnTooltips
		{
			[Token(Token = "0x6000767")]
			[Address(RVA = "0x4BA9090", Offset = "0x4BA9090", VA = "0x4BA9090")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000768")]
			[Address(RVA = "0x4BA90A0", Offset = "0x4BA90A0", VA = "0x4BA90A0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000769")]
		[Address(RVA = "0x4BA90B0", Offset = "0x4BA90B0", VA = "0x4BA90B0")]
		public Foldout()
		{
		}

		[Token(Token = "0x600076A")]
		[Address(RVA = "0x4BA9130", Offset = "0x4BA9130", VA = "0x4BA9130")]
		public Foldout(string displayName, ObservableList<Widget> children, [Optional] string[] columnLabels, [Optional] string[] columnTooltips)
		{
		}

		[Token(Token = "0x600076B")]
		[Address(RVA = "0x4BA9170", Offset = "0x4BA9170", VA = "0x4BA9170")]
		public bool GetValue()
		{
			return default(bool);
		}

		[Token(Token = "0x600076C")]
		[Address(RVA = "0x4BA9180", Offset = "0x4BA9180", VA = "0x4BA9180", Slot = "18")]
		private object UnityEngine_002ERendering_002EDebugUI_002EIValueField_002EGetValue()
		{
			return null;
		}

		[Token(Token = "0x600076D")]
		[Address(RVA = "0x4BA91A0", Offset = "0x4BA91A0", VA = "0x4BA91A0", Slot = "19")]
		public void SetValue(object value)
		{
		}

		[Token(Token = "0x600076E")]
		[Address(RVA = "0x4BA91E0", Offset = "0x4BA91E0", VA = "0x4BA91E0", Slot = "20")]
		public object ValidateValue(object value)
		{
			return null;
		}

		[Token(Token = "0x600076F")]
		[Address(RVA = "0x4BA91F0", Offset = "0x4BA91F0", VA = "0x4BA91F0")]
		public void SetValue(bool value)
		{
		}
	}

	[Token(Token = "0x20000CA")]
	public class HBox : Container
	{
		[Token(Token = "0x6000770")]
		[Address(RVA = "0x4BA9200", Offset = "0x4BA9200", VA = "0x4BA9200")]
		public HBox()
		{
		}
	}

	[Token(Token = "0x20000CB")]
	public class VBox : Container
	{
		[Token(Token = "0x6000771")]
		[Address(RVA = "0x4BA92C0", Offset = "0x4BA92C0", VA = "0x4BA92C0")]
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
			[Address(RVA = "0x4BA9810", Offset = "0x4BA9810", VA = "0x4BA9810")]
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
			[Address(RVA = "0x4BA9480", Offset = "0x4BA9480", VA = "0x4BA9480")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000772")]
		[Address(RVA = "0x4BA9380", Offset = "0x4BA9380", VA = "0x4BA9380")]
		public Table()
		{
		}

		[Token(Token = "0x6000773")]
		[Address(RVA = "0x4BA9440", Offset = "0x4BA9440", VA = "0x4BA9440")]
		public void SetColumnVisibility(int index, bool visible)
		{
		}

		[Token(Token = "0x6000774")]
		[Address(RVA = "0x4BA96D0", Offset = "0x4BA96D0", VA = "0x4BA96D0")]
		public bool GetColumnVisibility(int index)
		{
			return default(bool);
		}

		[Token(Token = "0x6000776")]
		[Address(RVA = "0x4BA9710", Offset = "0x4BA9710", VA = "0x4BA9710", Slot = "16")]
		protected override void OnItemAdded(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x6000777")]
		[Address(RVA = "0x4BA9790", Offset = "0x4BA9790", VA = "0x4BA9790", Slot = "17")]
		protected override void OnItemRemoved(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}
	}

	[Token(Token = "0x20000CE")]
	[Flags]
	public enum Flags
	{
		[Token(Token = "0x40002E9")]
		None = 0,
		[Token(Token = "0x40002EA")]
		EditorOnly = 2,
		[Token(Token = "0x40002EB")]
		RuntimeOnly = 4,
		[Token(Token = "0x40002EC")]
		EditorForceUpdate = 8,
		[Token(Token = "0x40002ED")]
		FrequentlyUsed = 0x10
	}

	[Token(Token = "0x20000CF")]
	public abstract class Widget
	{
		[Token(Token = "0x20000D0")]
		public struct NameAndTooltip
		{
			[Token(Token = "0x40002F5")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public string name;

			[Token(Token = "0x40002F6")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public string tooltip;
		}

		[Token(Token = "0x40002EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		protected Panel m_Panel;

		[Token(Token = "0x40002EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		protected IContainer m_Parent;

		[Token(Token = "0x40002F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public Func<bool> isHiddenCallback;

		[Token(Token = "0x17000096")]
		public virtual Panel panel
		{
			[Token(Token = "0x6000779")]
			[Address(RVA = "0x4BA98D0", Offset = "0x4BA98D0", VA = "0x4BA98D0", Slot = "4")]
			get
			{
				return null;
			}
			[Token(Token = "0x600077A")]
			[Address(RVA = "0x4BA98E0", Offset = "0x4BA98E0", VA = "0x4BA98E0", Slot = "5")]
			internal set
			{
			}
		}

		[Token(Token = "0x17000097")]
		public virtual IContainer parent
		{
			[Token(Token = "0x600077B")]
			[Address(RVA = "0x4BA98F0", Offset = "0x4BA98F0", VA = "0x4BA98F0", Slot = "6")]
			get
			{
				return null;
			}
			[Token(Token = "0x600077C")]
			[Address(RVA = "0x4BA9900", Offset = "0x4BA9900", VA = "0x4BA9900", Slot = "7")]
			internal set
			{
			}
		}

		[Token(Token = "0x17000098")]
		public Flags flags
		{
			[Token(Token = "0x600077D")]
			[Address(RVA = "0x4BA9910", Offset = "0x4BA9910", VA = "0x4BA9910")]
			[CompilerGenerated]
			get
			{
				return default(Flags);
			}
			[Token(Token = "0x600077E")]
			[Address(RVA = "0x4BA9920", Offset = "0x4BA9920", VA = "0x4BA9920")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000099")]
		public string displayName
		{
			[Token(Token = "0x600077F")]
			[Address(RVA = "0x4BA9930", Offset = "0x4BA9930", VA = "0x4BA9930", Slot = "8")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000780")]
			[Address(RVA = "0x4BA9940", Offset = "0x4BA9940", VA = "0x4BA9940", Slot = "9")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700009A")]
		public string tooltip
		{
			[Token(Token = "0x6000781")]
			[Address(RVA = "0x4BA9950", Offset = "0x4BA9950", VA = "0x4BA9950")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000782")]
			[Address(RVA = "0x4BA9960", Offset = "0x4BA9960", VA = "0x4BA9960")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700009B")]
		public string queryPath
		{
			[Token(Token = "0x6000783")]
			[Address(RVA = "0x4BA9970", Offset = "0x4BA9970", VA = "0x4BA9970", Slot = "10")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000784")]
			[Address(RVA = "0x4BA9980", Offset = "0x4BA9980", VA = "0x4BA9980")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700009C")]
		public bool isEditorOnly
		{
			[Token(Token = "0x6000785")]
			[Address(RVA = "0x4BA9990", Offset = "0x4BA9990", VA = "0x4BA9990")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700009D")]
		public bool isRuntimeOnly
		{
			[Token(Token = "0x6000786")]
			[Address(RVA = "0x4BA99A0", Offset = "0x4BA99A0", VA = "0x4BA99A0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700009E")]
		public bool isInactiveInEditor
		{
			[Token(Token = "0x6000787")]
			[Address(RVA = "0x4BA99B0", Offset = "0x4BA99B0", VA = "0x4BA99B0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700009F")]
		public bool isHidden
		{
			[Token(Token = "0x6000788")]
			[Address(RVA = "0x4BA9040", Offset = "0x4BA9040", VA = "0x4BA9040")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000A0")]
		public NameAndTooltip nameAndTooltip
		{
			[Token(Token = "0x600078B")]
			[Address(RVA = "0x4BA9A90", Offset = "0x4BA9A90", VA = "0x4BA9A90")]
			set
			{
			}
		}

		[Token(Token = "0x6000789")]
		[Address(RVA = "0x4BA8C50", Offset = "0x4BA8C50", VA = "0x4BA8C50", Slot = "11")]
		internal virtual void GenerateQueryPath()
		{
		}

		[Token(Token = "0x600078A")]
		[Address(RVA = "0x4BA9A10", Offset = "0x4BA9A10", VA = "0x4BA9A10", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x600078C")]
		[Address(RVA = "0x4BA8B80", Offset = "0x4BA8B80", VA = "0x4BA8B80")]
		protected Widget()
		{
		}
	}

	[Token(Token = "0x20000D1")]
	public interface IContainer
	{
		[Token(Token = "0x170000A1")]
		ObservableList<Widget> children
		{
			[Token(Token = "0x600078D")]
			get;
		}

		[Token(Token = "0x170000A2")]
		string displayName
		{
			[Token(Token = "0x600078E")]
			get;
			[Token(Token = "0x600078F")]
			set;
		}

		[Token(Token = "0x170000A3")]
		string queryPath
		{
			[Token(Token = "0x6000790")]
			get;
		}
	}

	[Token(Token = "0x20000D2")]
	public interface IValueField
	{
		[Token(Token = "0x6000791")]
		object GetValue();

		[Token(Token = "0x6000792")]
		void SetValue(object value);

		[Token(Token = "0x6000793")]
		object ValidateValue(object value);
	}

	[Token(Token = "0x20000D3")]
	public class Button : Widget
	{
		[Token(Token = "0x170000A4")]
		public Action action
		{
			[Token(Token = "0x6000794")]
			[Address(RVA = "0x4BA9AD0", Offset = "0x4BA9AD0", VA = "0x4BA9AD0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000795")]
			[Address(RVA = "0x4BA9AE0", Offset = "0x4BA9AE0", VA = "0x4BA9AE0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000796")]
		[Address(RVA = "0x4BA9AF0", Offset = "0x4BA9AF0", VA = "0x4BA9AF0")]
		public Button()
		{
		}
	}

	[Token(Token = "0x20000D4")]
	public class Value : Widget
	{
		[Token(Token = "0x40002F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public float refreshRate;

		[Token(Token = "0x40002FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public string formatString;

		[Token(Token = "0x170000A5")]
		public Func<object> getter
		{
			[Token(Token = "0x6000797")]
			[Address(RVA = "0x4BA9B00", Offset = "0x4BA9B00", VA = "0x4BA9B00")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000798")]
			[Address(RVA = "0x4BA9B10", Offset = "0x4BA9B10", VA = "0x4BA9B10")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000799")]
		[Address(RVA = "0x4BA9B20", Offset = "0x4BA9B20", VA = "0x4BA9B20")]
		public Value()
		{
		}

		[Token(Token = "0x600079A")]
		[Address(RVA = "0x4BA9B70", Offset = "0x4BA9B70", VA = "0x4BA9B70", Slot = "12")]
		public virtual object GetValue()
		{
			return null;
		}

		[Token(Token = "0x600079B")]
		[Address(RVA = "0x4BA9B90", Offset = "0x4BA9B90", VA = "0x4BA9B90", Slot = "13")]
		public virtual string FormatString(object value)
		{
			return null;
		}
	}

	[Token(Token = "0x20000D5")]
	public class ProgressBarValue : Value
	{
		[Token(Token = "0x40002FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public float min;

		[Token(Token = "0x40002FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
		public float max;

		[Token(Token = "0x600079C")]
		[Address(RVA = "0x4BA9BF0", Offset = "0x4BA9BF0", VA = "0x4BA9BF0", Slot = "13")]
		public override string FormatString(object value)
		{
			return null;
		}

		[Token(Token = "0x600079D")]
		[Address(RVA = "0x4BA9CF0", Offset = "0x4BA9CF0", VA = "0x4BA9CF0")]
		public ProgressBarValue()
		{
		}
	}

	[Token(Token = "0x20000D6")]
	public class ValueTuple : Widget
	{
		[Token(Token = "0x40002FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public Value[] values;

		[Token(Token = "0x40002FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public int pinnedElementIndex;

		[Token(Token = "0x170000A6")]
		public int numElements
		{
			[Token(Token = "0x600079F")]
			[Address(RVA = "0x4BA9D50", Offset = "0x4BA9D50", VA = "0x4BA9D50")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000A7")]
		public float refreshRate
		{
			[Token(Token = "0x60007A0")]
			[Address(RVA = "0x4BA9D70", Offset = "0x4BA9D70", VA = "0x4BA9D70")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x60007A1")]
		[Address(RVA = "0x4BA9DC0", Offset = "0x4BA9DC0", VA = "0x4BA9DC0")]
		public ValueTuple()
		{
		}
	}

	[Token(Token = "0x20000D7")]
	public abstract class Field<T> : Widget, IValueField
	{
		[Token(Token = "0x4000301")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Action<Field<T>, T> onValueChanged;

		[Token(Token = "0x170000A8")]
		public Func<T> getter
		{
			[Token(Token = "0x60007A2")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007A3")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000A9")]
		public Action<T> setter
		{
			[Token(Token = "0x60007A4")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007A5")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60007A6")]
		private object UnityEngine_002ERendering_002EDebugUI_002EIValueField_002EValidateValue(object value)
		{
			return null;
		}

		[Token(Token = "0x60007A7")]
		public virtual T ValidateValue(T value)
		{
			return (T)null;
		}

		[Token(Token = "0x60007A8")]
		private object UnityEngine_002ERendering_002EDebugUI_002EIValueField_002EGetValue()
		{
			return null;
		}

		[Token(Token = "0x60007A9")]
		public T GetValue()
		{
			return (T)null;
		}

		[Token(Token = "0x60007AA")]
		public void SetValue(object value)
		{
		}

		[Token(Token = "0x60007AB")]
		public virtual void SetValue(T value)
		{
		}

		[Token(Token = "0x60007AC")]
		protected Field()
		{
		}
	}

	[Token(Token = "0x20000D8")]
	public class BoolField : Field<bool>
	{
		[Token(Token = "0x60007AD")]
		[Address(RVA = "0x4BA9DD0", Offset = "0x4BA9DD0", VA = "0x4BA9DD0")]
		public BoolField()
		{
		}
	}

	[Token(Token = "0x20000D9")]
	public class HistoryBoolField : BoolField
	{
		[Token(Token = "0x170000AA")]
		public Func<bool>[] historyGetter
		{
			[Token(Token = "0x60007AE")]
			[Address(RVA = "0x4BA9E10", Offset = "0x4BA9E10", VA = "0x4BA9E10")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007AF")]
			[Address(RVA = "0x4BA9E20", Offset = "0x4BA9E20", VA = "0x4BA9E20")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000AB")]
		public int historyDepth
		{
			[Token(Token = "0x60007B0")]
			[Address(RVA = "0x4BA9E30", Offset = "0x4BA9E30", VA = "0x4BA9E30")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60007B1")]
		[Address(RVA = "0x4BA9E40", Offset = "0x4BA9E40", VA = "0x4BA9E40")]
		public bool GetHistoryValue(int historyIndex)
		{
			return default(bool);
		}

		[Token(Token = "0x60007B2")]
		[Address(RVA = "0x4BA9E80", Offset = "0x4BA9E80", VA = "0x4BA9E80")]
		public HistoryBoolField()
		{
		}
	}

	[Token(Token = "0x20000DA")]
	public class IntField : Field<int>
	{
		[Token(Token = "0x4000303")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public Func<int> min;

		[Token(Token = "0x4000304")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Func<int> max;

		[Token(Token = "0x4000305")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public int incStep;

		[Token(Token = "0x4000306")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
		public int intStepMult;

		[Token(Token = "0x60007B3")]
		[Address(RVA = "0x4BA9EC0", Offset = "0x4BA9EC0", VA = "0x4BA9EC0", Slot = "15")]
		public override int ValidateValue(int value)
		{
			return default(int);
		}

		[Token(Token = "0x60007B4")]
		[Address(RVA = "0x4BA9F10", Offset = "0x4BA9F10", VA = "0x4BA9F10")]
		public IntField()
		{
		}
	}

	[Token(Token = "0x20000DB")]
	public class UIntField : Field<uint>
	{
		[Token(Token = "0x4000307")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public Func<uint> min;

		[Token(Token = "0x4000308")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Func<uint> max;

		[Token(Token = "0x4000309")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public uint incStep;

		[Token(Token = "0x400030A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
		public uint intStepMult;

		[Token(Token = "0x60007B5")]
		[Address(RVA = "0x4BA9F60", Offset = "0x4BA9F60", VA = "0x4BA9F60", Slot = "15")]
		public override uint ValidateValue(uint value)
		{
			return default(uint);
		}

		[Token(Token = "0x60007B6")]
		[Address(RVA = "0x4BA9FB0", Offset = "0x4BA9FB0", VA = "0x4BA9FB0")]
		public UIntField()
		{
		}
	}

	[Token(Token = "0x20000DC")]
	public class FloatField : Field<float>
	{
		[Token(Token = "0x400030B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public Func<float> min;

		[Token(Token = "0x400030C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Func<float> max;

		[Token(Token = "0x400030D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public float incStep;

		[Token(Token = "0x400030E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
		public float incStepMult;

		[Token(Token = "0x400030F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		public int decimals;

		[Token(Token = "0x60007B7")]
		[Address(RVA = "0x4BAA000", Offset = "0x4BAA000", VA = "0x4BAA000", Slot = "15")]
		public override float ValidateValue(float value)
		{
			return default(float);
		}

		[Token(Token = "0x60007B8")]
		[Address(RVA = "0x4BAA070", Offset = "0x4BAA070", VA = "0x4BAA070")]
		public FloatField()
		{
		}
	}

	[Token(Token = "0x20000DD")]
	public abstract class EnumField<T> : Field<T>
	{
		[Token(Token = "0x4000310")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public GUIContent[] enumNames;

		[Token(Token = "0x4000311")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int[] m_EnumValues;

		[Token(Token = "0x4000312")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static Regex s_NicifyRegEx;

		[Token(Token = "0x170000AC")]
		public int[] enumValues
		{
			[Token(Token = "0x60007B9")]
			get
			{
				return null;
			}
			[Token(Token = "0x60007BA")]
			set
			{
			}
		}

		[Token(Token = "0x60007BB")]
		protected void AutoFillFromType(Type enumType)
		{
		}

		[Token(Token = "0x60007BC")]
		protected EnumField()
		{
		}
	}

	[Token(Token = "0x20000DF")]
	public class EnumField : EnumField<int>
	{
		[Token(Token = "0x4000315")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		internal int[] quickSeparators;

		[Token(Token = "0x4000316")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private int[] m_Indexes;

		[Token(Token = "0x170000AD")]
		internal int[] indexes
		{
			[Token(Token = "0x60007C1")]
			[Address(RVA = "0x4BAA0C0", Offset = "0x4BAA0C0", VA = "0x4BAA0C0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000AE")]
		public Func<int> getIndex
		{
			[Token(Token = "0x60007C2")]
			[Address(RVA = "0x4BAA140", Offset = "0x4BAA140", VA = "0x4BAA140")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007C3")]
			[Address(RVA = "0x4BAA150", Offset = "0x4BAA150", VA = "0x4BAA150")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000AF")]
		public Action<int> setIndex
		{
			[Token(Token = "0x60007C4")]
			[Address(RVA = "0x4BAA160", Offset = "0x4BAA160", VA = "0x4BAA160")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007C5")]
			[Address(RVA = "0x4BAA170", Offset = "0x4BAA170", VA = "0x4BAA170")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000B0")]
		public int currentIndex
		{
			[Token(Token = "0x60007C6")]
			[Address(RVA = "0x4BAA190", Offset = "0x4BAA190", VA = "0x4BAA190")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60007C7")]
			[Address(RVA = "0x4BAA1C0", Offset = "0x4BAA1C0", VA = "0x4BAA1C0")]
			set
			{
			}
		}

		[Token(Token = "0x170000B1")]
		public Type autoEnum
		{
			[Token(Token = "0x60007C8")]
			[Address(RVA = "0x4BAA1F0", Offset = "0x4BAA1F0", VA = "0x4BAA1F0")]
			set
			{
			}
		}

		[Token(Token = "0x60007C9")]
		[Address(RVA = "0x4BAA240", Offset = "0x4BAA240", VA = "0x4BAA240")]
		internal void InitQuickSeparators()
		{
		}

		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x4BAA460", Offset = "0x4BAA460", VA = "0x4BAA460", Slot = "16")]
		public override void SetValue(int value)
		{
		}

		[Token(Token = "0x60007CB")]
		[Address(RVA = "0x4BAA580", Offset = "0x4BAA580", VA = "0x4BAA580")]
		public EnumField()
		{
		}
	}

	[Token(Token = "0x20000E1")]
	public class ObjectPopupField : Field<Object>
	{
		[Token(Token = "0x170000B2")]
		public Func<IEnumerable<Object>> getObjects
		{
			[Token(Token = "0x60007CF")]
			[Address(RVA = "0x4BAA6E0", Offset = "0x4BAA6E0", VA = "0x4BAA6E0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007D0")]
			[Address(RVA = "0x4BAA6F0", Offset = "0x4BAA6F0", VA = "0x4BAA6F0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60007D1")]
		[Address(RVA = "0x4BAA700", Offset = "0x4BAA700", VA = "0x4BAA700")]
		public ObjectPopupField()
		{
		}
	}

	[Token(Token = "0x20000E2")]
	public class HistoryEnumField : EnumField
	{
		[Token(Token = "0x170000B3")]
		public Func<int>[] historyIndexGetter
		{
			[Token(Token = "0x60007D2")]
			[Address(RVA = "0x4BAA740", Offset = "0x4BAA740", VA = "0x4BAA740")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007D3")]
			[Address(RVA = "0x4BAA750", Offset = "0x4BAA750", VA = "0x4BAA750")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000B4")]
		public int historyDepth
		{
			[Token(Token = "0x60007D4")]
			[Address(RVA = "0x4BAA770", Offset = "0x4BAA770", VA = "0x4BAA770")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60007D5")]
		[Address(RVA = "0x4BAA790", Offset = "0x4BAA790", VA = "0x4BAA790")]
		public int GetHistoryValue(int historyIndex)
		{
			return default(int);
		}

		[Token(Token = "0x60007D6")]
		[Address(RVA = "0x4BAA7D0", Offset = "0x4BAA7D0", VA = "0x4BAA7D0")]
		public HistoryEnumField()
		{
		}
	}

	[Token(Token = "0x20000E3")]
	public class BitField : EnumField<Enum>
	{
		[Token(Token = "0x400031D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private Type m_EnumType;

		[Token(Token = "0x170000B5")]
		public Type enumType
		{
			[Token(Token = "0x60007D7")]
			[Address(RVA = "0x4BAA830", Offset = "0x4BAA830", VA = "0x4BAA830")]
			get
			{
				return null;
			}
			[Token(Token = "0x60007D8")]
			[Address(RVA = "0x4BAA840", Offset = "0x4BAA840", VA = "0x4BAA840")]
			set
			{
			}
		}

		[Token(Token = "0x60007D9")]
		[Address(RVA = "0x4BAA8A0", Offset = "0x4BAA8A0", VA = "0x4BAA8A0")]
		public BitField()
		{
		}
	}

	[Token(Token = "0x20000E4")]
	public class ColorField : Field<Color>
	{
		[Token(Token = "0x400031E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public bool hdr;

		[Token(Token = "0x400031F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
		public bool showAlpha;

		[Token(Token = "0x4000320")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x62")]
		public bool showPicker;

		[Token(Token = "0x4000321")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
		public float incStep;

		[Token(Token = "0x4000322")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public float incStepMult;

		[Token(Token = "0x4000323")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
		public int decimals;

		[Token(Token = "0x60007DA")]
		[Address(RVA = "0x4BAA900", Offset = "0x4BAA900", VA = "0x4BAA900", Slot = "15")]
		public override Color ValidateValue(Color value)
		{
			return default(Color);
		}

		[Token(Token = "0x60007DB")]
		[Address(RVA = "0x4BAA970", Offset = "0x4BAA970", VA = "0x4BAA970")]
		public ColorField()
		{
		}
	}

	[Token(Token = "0x20000E5")]
	public class Vector2Field : Field<Vector2>
	{
		[Token(Token = "0x4000324")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public float incStep;

		[Token(Token = "0x4000325")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
		public float incStepMult;

		[Token(Token = "0x4000326")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public int decimals;

		[Token(Token = "0x60007DC")]
		[Address(RVA = "0x4BAA9C0", Offset = "0x4BAA9C0", VA = "0x4BAA9C0")]
		public Vector2Field()
		{
		}
	}

	[Token(Token = "0x20000E6")]
	public class Vector3Field : Field<Vector3>
	{
		[Token(Token = "0x4000327")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public float incStep;

		[Token(Token = "0x4000328")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
		public float incStepMult;

		[Token(Token = "0x4000329")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public int decimals;

		[Token(Token = "0x60007DD")]
		[Address(RVA = "0x4BAAA10", Offset = "0x4BAAA10", VA = "0x4BAAA10")]
		public Vector3Field()
		{
		}
	}

	[Token(Token = "0x20000E7")]
	public class Vector4Field : Field<Vector4>
	{
		[Token(Token = "0x400032A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public float incStep;

		[Token(Token = "0x400032B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
		public float incStepMult;

		[Token(Token = "0x400032C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public int decimals;

		[Token(Token = "0x60007DE")]
		[Address(RVA = "0x4BAAA60", Offset = "0x4BAAA60", VA = "0x4BAAA60")]
		public Vector4Field()
		{
		}
	}

	[Token(Token = "0x20000E8")]
	public class ObjectField : Field<Object>
	{
		[Token(Token = "0x400032D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public Type type;

		[Token(Token = "0x60007DF")]
		[Address(RVA = "0x4BAAAB0", Offset = "0x4BAAAB0", VA = "0x4BAAAB0")]
		public ObjectField()
		{
		}
	}

	[Token(Token = "0x20000E9")]
	public class ObjectListField : Field<Object[]>
	{
		[Token(Token = "0x400032E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public Type type;

		[Token(Token = "0x60007E0")]
		[Address(RVA = "0x4BAAB40", Offset = "0x4BAAB40", VA = "0x4BAAB40")]
		public ObjectListField()
		{
		}
	}

	[Token(Token = "0x20000EA")]
	public class MessageBox : Widget
	{
		[Token(Token = "0x20000EB")]
		public enum Style
		{
			[Token(Token = "0x4000331")]
			Info,
			[Token(Token = "0x4000332")]
			Warning,
			[Token(Token = "0x4000333")]
			Error
		}

		[Token(Token = "0x400032F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public Style style;

		[Token(Token = "0x60007E1")]
		[Address(RVA = "0x4BAABD0", Offset = "0x4BAABD0", VA = "0x4BAABD0")]
		public MessageBox()
		{
		}
	}

	[Token(Token = "0x20000EC")]
	public class Panel : IContainer, IComparable<Panel>
	{
		[Token(Token = "0x170000B6")]
		public Flags flags
		{
			[Token(Token = "0x60007E2")]
			[Address(RVA = "0x4BAABE0", Offset = "0x4BAABE0", VA = "0x4BAABE0")]
			[CompilerGenerated]
			get
			{
				return default(Flags);
			}
			[Token(Token = "0x60007E3")]
			[Address(RVA = "0x4BAABF0", Offset = "0x4BAABF0", VA = "0x4BAABF0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000B7")]
		public string displayName
		{
			[Token(Token = "0x60007E4")]
			[Address(RVA = "0x4BAAC00", Offset = "0x4BAAC00", VA = "0x4BAAC00", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007E5")]
			[Address(RVA = "0x4BAAC10", Offset = "0x4BAAC10", VA = "0x4BAAC10", Slot = "6")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000B8")]
		public int groupIndex
		{
			[Token(Token = "0x60007E6")]
			[Address(RVA = "0x4BAAC20", Offset = "0x4BAAC20", VA = "0x4BAAC20")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60007E7")]
			[Address(RVA = "0x4BAAC30", Offset = "0x4BAAC30", VA = "0x4BAAC30")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000B9")]
		public string queryPath
		{
			[Token(Token = "0x60007E8")]
			[Address(RVA = "0x4BAAC40", Offset = "0x4BAAC40", VA = "0x4BAAC40", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000BA")]
		public bool isEditorOnly
		{
			[Token(Token = "0x60007E9")]
			[Address(RVA = "0x4BAAC50", Offset = "0x4BAAC50", VA = "0x4BAAC50")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000BB")]
		public bool isRuntimeOnly
		{
			[Token(Token = "0x60007EA")]
			[Address(RVA = "0x4BAAC60", Offset = "0x4BAAC60", VA = "0x4BAAC60")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000BC")]
		public bool isInactiveInEditor
		{
			[Token(Token = "0x60007EB")]
			[Address(RVA = "0x4BAAC70", Offset = "0x4BAAC70", VA = "0x4BAAC70")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000BD")]
		public bool editorForceUpdate
		{
			[Token(Token = "0x60007EC")]
			[Address(RVA = "0x4BAACD0", Offset = "0x4BAACD0", VA = "0x4BAACD0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000BE")]
		public ObservableList<Widget> children
		{
			[Token(Token = "0x60007ED")]
			[Address(RVA = "0x4BAACE0", Offset = "0x4BAACE0", VA = "0x4BAACE0", Slot = "4")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60007EE")]
			[Address(RVA = "0x4BAACF0", Offset = "0x4BAACF0", VA = "0x4BAACF0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1400000A")]
		public event Action<Panel> onSetDirty
		{
			[Token(Token = "0x60007EF")]
			[Address(RVA = "0x4BAAD00", Offset = "0x4BAAD00", VA = "0x4BAAD00")]
			[CompilerGenerated]
			add
			{
			}
			[Token(Token = "0x60007F0")]
			[Address(RVA = "0x4BAADB0", Offset = "0x4BAADB0", VA = "0x4BAADB0")]
			[CompilerGenerated]
			remove
			{
			}
		}

		[Token(Token = "0x60007F1")]
		[Address(RVA = "0x4BAAE60", Offset = "0x4BAAE60", VA = "0x4BAAE60")]
		public Panel()
		{
		}

		[Token(Token = "0x60007F2")]
		[Address(RVA = "0x4BAB0A0", Offset = "0x4BAB0A0", VA = "0x4BAB0A0", Slot = "9")]
		protected virtual void OnItemAdded(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x60007F3")]
		[Address(RVA = "0x4BAB100", Offset = "0x4BAB100", VA = "0x4BAB100", Slot = "10")]
		protected virtual void OnItemRemoved(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x4BA8DD0", Offset = "0x4BA8DD0", VA = "0x4BA8DD0")]
		public void SetDirty()
		{
		}

		[Token(Token = "0x60007F5")]
		[Address(RVA = "0x4BAB160", Offset = "0x4BAB160", VA = "0x4BAB160", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60007F6")]
		[Address(RVA = "0x4BAB240", Offset = "0x4BAB240", VA = "0x4BAB240", Slot = "8")]
		private int System_002EIComparable_003CUnityEngine_002ERendering_002EDebugUI_002EPanel_003E_002ECompareTo(Panel other)
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x4BA8710", Offset = "0x4BA8710", VA = "0x4BA8710")]
	public DebugUI()
	{
	}
}
