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

[Token(Token = "0x2000096")]
public class DebugUI
{
	[Token(Token = "0x2000097")]
	public class Container : Widget, IContainer
	{
		[Token(Token = "0x4000215")]
		private const string k_IDToken = "#";

		[Token(Token = "0x1700006D")]
		internal bool hideDisplayName
		{
			[Token(Token = "0x6000695")]
			[Address(RVA = "0x64D3110", Offset = "0x64D2110", VA = "0x64D3110")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700006E")]
		public ObservableList<Widget> children
		{
			[Token(Token = "0x6000696")]
			[Address(RVA = "0x64D3170", Offset = "0x64D2170", VA = "0x64D3170", Slot = "12")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000697")]
			[Address(RVA = "0x64D3180", Offset = "0x64D2180", VA = "0x64D3180")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700006F")]
		public override Panel panel
		{
			[Token(Token = "0x6000698")]
			[Address(RVA = "0x64D3190", Offset = "0x64D2190", VA = "0x64D3190", Slot = "4")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000699")]
			[Address(RVA = "0x64D31A0", Offset = "0x64D21A0", VA = "0x64D31A0", Slot = "5")]
			internal set
			{
			}
		}

		[Token(Token = "0x600069A")]
		[Address(RVA = "0x64D3270", Offset = "0x64D2270", VA = "0x64D3270")]
		public Container()
		{
		}

		[Token(Token = "0x600069B")]
		[Address(RVA = "0x64D34D0", Offset = "0x64D24D0", VA = "0x64D34D0")]
		public Container(string id)
		{
		}

		[Token(Token = "0x600069C")]
		[Address(RVA = "0x64D32F0", Offset = "0x64D22F0", VA = "0x64D32F0")]
		public Container(string displayName, ObservableList<Widget> children)
		{
		}

		[Token(Token = "0x600069D")]
		[Address(RVA = "0x64D3570", Offset = "0x64D2570", VA = "0x64D3570", Slot = "11")]
		internal override void GenerateQueryPath()
		{
		}

		[Token(Token = "0x600069E")]
		[Address(RVA = "0x64D3740", Offset = "0x64D2740", VA = "0x64D3740", Slot = "16")]
		protected virtual void OnItemAdded(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x600069F")]
		[Address(RVA = "0x64D3870", Offset = "0x64D2870", VA = "0x64D3870", Slot = "17")]
		protected virtual void OnItemRemoved(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x60006A0")]
		[Address(RVA = "0x64D38E0", Offset = "0x64D28E0", VA = "0x64D38E0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000098")]
	public class Foldout : Container, IValueField
	{
		[Token(Token = "0x2000099")]
		public struct ContextMenuItem
		{
			[Token(Token = "0x400021F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public string displayName;

			[Token(Token = "0x4000220")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public Action action;
		}

		[Token(Token = "0x4000218")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
		public bool isHeader;

		[Token(Token = "0x4000219")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public List<ContextMenuItem> contextMenuItems;

		[Token(Token = "0x400021B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private bool m_Dirty;

		[Token(Token = "0x400021C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private string[] m_ColumnLabels;

		[Token(Token = "0x400021D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private string[] m_ColumnTooltips;

		[Token(Token = "0x400021E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private List<GUIContent> m_RowContents;

		[Token(Token = "0x17000070")]
		public bool isReadOnly
		{
			[Token(Token = "0x60006A1")]
			[Address(RVA = "0x64D3A40", Offset = "0x64D2A40", VA = "0x64D3A40")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000071")]
		public bool opened
		{
			[Token(Token = "0x60006A2")]
			[Address(RVA = "0x64D3A50", Offset = "0x64D2A50", VA = "0x64D3A50")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60006A3")]
			[Address(RVA = "0x64D3A60", Offset = "0x64D2A60", VA = "0x64D3A60")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000072")]
		public string documentationUrl
		{
			[Token(Token = "0x60006A4")]
			[Address(RVA = "0x64D3A70", Offset = "0x64D2A70", VA = "0x64D3A70")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006A5")]
			[Address(RVA = "0x64D3A80", Offset = "0x64D2A80", VA = "0x64D3A80")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000073")]
		public string[] columnLabels
		{
			[Token(Token = "0x60006A6")]
			[Address(RVA = "0x64D3A90", Offset = "0x64D2A90", VA = "0x64D3A90")]
			get
			{
				return null;
			}
			[Token(Token = "0x60006A7")]
			[Address(RVA = "0x64CB370", Offset = "0x64CA370", VA = "0x64CB370")]
			set
			{
			}
		}

		[Token(Token = "0x17000074")]
		public string[] columnTooltips
		{
			[Token(Token = "0x60006A8")]
			[Address(RVA = "0x64D3AA0", Offset = "0x64D2AA0", VA = "0x64D3AA0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60006A9")]
			[Address(RVA = "0x64D3AB0", Offset = "0x64D2AB0", VA = "0x64D3AB0")]
			set
			{
			}
		}

		[Token(Token = "0x17000075")]
		internal List<GUIContent> rowContents
		{
			[Token(Token = "0x60006AA")]
			[Address(RVA = "0x64D3AD0", Offset = "0x64D2AD0", VA = "0x64D3AD0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006AB")]
		[Address(RVA = "0x64CB280", Offset = "0x64CA280", VA = "0x64CB280")]
		public Foldout()
		{
		}

		[Token(Token = "0x60006AC")]
		[Address(RVA = "0x64D3DD0", Offset = "0x64D2DD0", VA = "0x64D3DD0")]
		public Foldout(string displayName, ObservableList<Widget> children, [Optional] string[] columnLabels, [Optional] string[] columnTooltips)
		{
		}

		[Token(Token = "0x60006AD")]
		[Address(RVA = "0x64D3EA0", Offset = "0x64D2EA0", VA = "0x64D3EA0")]
		public bool GetValue()
		{
			return default(bool);
		}

		[Token(Token = "0x60006AE")]
		[Address(RVA = "0x64D3EB0", Offset = "0x64D2EB0", VA = "0x64D3EB0", Slot = "18")]
		private object UnityEngine_002ERendering_002EDebugUI_002EIValueField_002EGetValue()
		{
			return null;
		}

		[Token(Token = "0x60006AF")]
		[Address(RVA = "0x64D3ED0", Offset = "0x64D2ED0", VA = "0x64D3ED0", Slot = "19")]
		public void SetValue(object value)
		{
		}

		[Token(Token = "0x60006B0")]
		[Address(RVA = "0x64D3F30", Offset = "0x64D2F30", VA = "0x64D3F30", Slot = "20")]
		public object ValidateValue(object value)
		{
			return null;
		}

		[Token(Token = "0x60006B1")]
		[Address(RVA = "0x64D3F20", Offset = "0x64D2F20", VA = "0x64D3F20")]
		public void SetValue(bool value)
		{
		}
	}

	[Token(Token = "0x200009A")]
	public class HBox : Container
	{
		[Token(Token = "0x60006B2")]
		[Address(RVA = "0x64D3F40", Offset = "0x64D2F40", VA = "0x64D3F40")]
		public HBox()
		{
		}
	}

	[Token(Token = "0x200009B")]
	public class VBox : Container
	{
		[Token(Token = "0x60006B3")]
		[Address(RVA = "0x64D4000", Offset = "0x64D3000", VA = "0x64D4000")]
		public VBox()
		{
		}
	}

	[Token(Token = "0x200009C")]
	public class Table : Container
	{
		[Token(Token = "0x200009D")]
		public class Row : Foldout
		{
			[Token(Token = "0x60006BB")]
			[Address(RVA = "0x64C0950", Offset = "0x64BF950", VA = "0x64C0950")]
			public Row()
			{
			}
		}

		[Token(Token = "0x4000221")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static GUIStyle columnHeaderStyle;

		[Token(Token = "0x4000222")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public bool isReadOnly;

		[Token(Token = "0x4000223")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private bool[] m_Header;

		[Token(Token = "0x17000076")]
		public bool[] VisibleColumns
		{
			[Token(Token = "0x60006B7")]
			[Address(RVA = "0x64D4100", Offset = "0x64D3100", VA = "0x64D4100")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006B4")]
		[Address(RVA = "0x64C0890", Offset = "0x64BF890", VA = "0x64C0890")]
		public Table()
		{
		}

		[Token(Token = "0x60006B5")]
		[Address(RVA = "0x64D40C0", Offset = "0x64D30C0", VA = "0x64D40C0")]
		public void SetColumnVisibility(int index, bool visible)
		{
		}

		[Token(Token = "0x60006B6")]
		[Address(RVA = "0x64D4390", Offset = "0x64D3390", VA = "0x64D4390")]
		public bool GetColumnVisibility(int index)
		{
			return default(bool);
		}

		[Token(Token = "0x60006B8")]
		[Address(RVA = "0x64D43D0", Offset = "0x64D33D0", VA = "0x64D43D0", Slot = "16")]
		protected override void OnItemAdded(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x60006B9")]
		[Address(RVA = "0x64D4450", Offset = "0x64D3450", VA = "0x64D4450", Slot = "17")]
		protected override void OnItemRemoved(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}
	}

	[Token(Token = "0x200009E")]
	public abstract class Field<T> : Widget, IValueField
	{
		[Token(Token = "0x4000226")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Action<Field<T>, T> onValueChanged;

		[Token(Token = "0x17000077")]
		public Func<T> getter
		{
			[Token(Token = "0x60006BC")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006BD")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000078")]
		public Action<T> setter
		{
			[Token(Token = "0x60006BE")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006BF")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60006C0")]
		private object UnityEngine_002ERendering_002EDebugUI_002EIValueField_002EValidateValue(object value)
		{
			return null;
		}

		[Token(Token = "0x60006C1")]
		public virtual T ValidateValue(T value)
		{
			return (T)null;
		}

		[Token(Token = "0x60006C2")]
		private object UnityEngine_002ERendering_002EDebugUI_002EIValueField_002EGetValue()
		{
			return null;
		}

		[Token(Token = "0x60006C3")]
		public T GetValue()
		{
			return (T)null;
		}

		[Token(Token = "0x60006C4")]
		public void SetValue(object value)
		{
		}

		[Token(Token = "0x60006C5")]
		public virtual void SetValue(T value)
		{
		}

		[Token(Token = "0x60006C6")]
		protected Field()
		{
		}
	}

	[Token(Token = "0x200009F")]
	public class BoolField : Field<bool>
	{
		[Token(Token = "0x60006C7")]
		[Address(RVA = "0x64D4560", Offset = "0x64D3560", VA = "0x64D4560")]
		public BoolField()
		{
		}
	}

	[Token(Token = "0x20000A0")]
	public class HistoryBoolField : BoolField
	{
		[Token(Token = "0x17000079")]
		public Func<bool>[] historyGetter
		{
			[Token(Token = "0x60006C8")]
			[Address(RVA = "0x64D45A0", Offset = "0x64D35A0", VA = "0x64D45A0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006C9")]
			[Address(RVA = "0x64D45B0", Offset = "0x64D35B0", VA = "0x64D45B0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700007A")]
		public int historyDepth
		{
			[Token(Token = "0x60006CA")]
			[Address(RVA = "0x64D45C0", Offset = "0x64D35C0", VA = "0x64D45C0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60006CB")]
		[Address(RVA = "0x64D45D0", Offset = "0x64D35D0", VA = "0x64D45D0")]
		public bool GetHistoryValue(int historyIndex)
		{
			return default(bool);
		}

		[Token(Token = "0x60006CC")]
		[Address(RVA = "0x64D4610", Offset = "0x64D3610", VA = "0x64D4610")]
		public HistoryBoolField()
		{
		}
	}

	[Token(Token = "0x20000A1")]
	public class IntField : Field<int>
	{
		[Token(Token = "0x4000228")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Func<int> min;

		[Token(Token = "0x4000229")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public Func<int> max;

		[Token(Token = "0x400022A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		public int incStep;

		[Token(Token = "0x400022B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
		public int intStepMult;

		[Token(Token = "0x60006CD")]
		[Address(RVA = "0x64D4650", Offset = "0x64D3650", VA = "0x64D4650", Slot = "15")]
		public override int ValidateValue(int value)
		{
			return default(int);
		}

		[Token(Token = "0x60006CE")]
		[Address(RVA = "0x64D46A0", Offset = "0x64D36A0", VA = "0x64D46A0")]
		public IntField()
		{
		}
	}

	[Token(Token = "0x20000A2")]
	public class UIntField : Field<uint>
	{
		[Token(Token = "0x400022C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Func<uint> min;

		[Token(Token = "0x400022D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public Func<uint> max;

		[Token(Token = "0x400022E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		public uint incStep;

		[Token(Token = "0x400022F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
		public uint intStepMult;

		[Token(Token = "0x60006CF")]
		[Address(RVA = "0x64D46F0", Offset = "0x64D36F0", VA = "0x64D46F0", Slot = "15")]
		public override uint ValidateValue(uint value)
		{
			return default(uint);
		}

		[Token(Token = "0x60006D0")]
		[Address(RVA = "0x64D4740", Offset = "0x64D3740", VA = "0x64D4740")]
		public UIntField()
		{
		}
	}

	[Token(Token = "0x20000A3")]
	public class FloatField : Field<float>
	{
		[Token(Token = "0x4000230")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Func<float> min;

		[Token(Token = "0x4000231")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public Func<float> max;

		[Token(Token = "0x4000232")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		public float incStep;

		[Token(Token = "0x4000233")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
		public float incStepMult;

		[Token(Token = "0x4000234")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		public int decimals;

		[Token(Token = "0x60006D1")]
		[Address(RVA = "0x64D4790", Offset = "0x64D3790", VA = "0x64D4790", Slot = "15")]
		public override float ValidateValue(float value)
		{
			return default(float);
		}

		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x64D4800", Offset = "0x64D3800", VA = "0x64D4800")]
		public FloatField()
		{
		}
	}

	[Token(Token = "0x20000A4")]
	public class RenderingLayerField : Field<RenderingLayerMask>, IContainer
	{
		[Token(Token = "0x4000235")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly NameAndTooltip s_RenderingLayerColors;

		[Token(Token = "0x4000236")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private string[] m_RenderingLayersNames;

		[Token(Token = "0x4000237")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private int m_DefinedRenderingLayersCount;

		[Token(Token = "0x4000238")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private ObservableList<Widget> m_RenderingLayersColors;

		[Token(Token = "0x1700007B")]
		private int maxRenderingLayerCount
		{
			[Token(Token = "0x60006D3")]
			[Address(RVA = "0x64D4850", Offset = "0x64D3850", VA = "0x64D4850")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700007C")]
		public string[] renderingLayersNames
		{
			[Token(Token = "0x60006D5")]
			[Address(RVA = "0x64D4E00", Offset = "0x64D3E00", VA = "0x64D4E00")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007D")]
		public ObservableList<Widget> children
		{
			[Token(Token = "0x60006D6")]
			[Address(RVA = "0x64D4E70", Offset = "0x64D3E70", VA = "0x64D4E70", Slot = "17")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007E")]
		public Func<int, Vector4> getRenderingLayerColor
		{
			[Token(Token = "0x60006D7")]
			[Address(RVA = "0x64D4EE0", Offset = "0x64D3EE0", VA = "0x64D4EE0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006D8")]
			[Address(RVA = "0x64D4EF0", Offset = "0x64D3EF0", VA = "0x64D4EF0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700007F")]
		public Action<Vector4, int> setRenderingLayerColor
		{
			[Token(Token = "0x60006D9")]
			[Address(RVA = "0x64D4F00", Offset = "0x64D3F00", VA = "0x64D4F00")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006DA")]
			[Address(RVA = "0x64D4F10", Offset = "0x64D3F10", VA = "0x64D4F10")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60006D4")]
		[Address(RVA = "0x64D48B0", Offset = "0x64D38B0", VA = "0x64D48B0")]
		private void Resize()
		{
		}

		[Token(Token = "0x60006DB")]
		[Address(RVA = "0x64D4F30", Offset = "0x64D3F30", VA = "0x64D4F30", Slot = "11")]
		internal override void GenerateQueryPath()
		{
		}

		[Token(Token = "0x60006DC")]
		[Address(RVA = "0x64D50D0", Offset = "0x64D40D0", VA = "0x64D50D0")]
		public RenderingLayerField()
		{
		}
	}

	[Token(Token = "0x20000A6")]
	public abstract class EnumField<T> : Field<T>
	{
		[Token(Token = "0x400023D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public GUIContent[] enumNames;

		[Token(Token = "0x400023E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int[] m_EnumValues;

		[Token(Token = "0x400023F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static Regex s_NicifyRegEx;

		[Token(Token = "0x17000080")]
		public int[] enumValues
		{
			[Token(Token = "0x60006E1")]
			get
			{
				return null;
			}
			[Token(Token = "0x60006E2")]
			set
			{
			}
		}

		[Token(Token = "0x60006E3")]
		protected void AutoFillFromType(Type enumType)
		{
		}

		[Token(Token = "0x60006E4")]
		protected EnumField()
		{
		}
	}

	[Token(Token = "0x20000A8")]
	public class EnumField : EnumField<int>
	{
		[Token(Token = "0x4000242")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		internal int[] quickSeparators;

		[Token(Token = "0x4000243")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private int[] m_Indexes;

		[Token(Token = "0x17000081")]
		internal int[] indexes
		{
			[Token(Token = "0x60006E9")]
			[Address(RVA = "0x64D5340", Offset = "0x64D4340", VA = "0x64D5340")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000082")]
		public Func<int> getIndex
		{
			[Token(Token = "0x60006EA")]
			[Address(RVA = "0x64D53C0", Offset = "0x64D43C0", VA = "0x64D53C0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006EB")]
			[Address(RVA = "0x64D53D0", Offset = "0x64D43D0", VA = "0x64D53D0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000083")]
		public Action<int> setIndex
		{
			[Token(Token = "0x60006EC")]
			[Address(RVA = "0x64D53F0", Offset = "0x64D43F0", VA = "0x64D53F0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006ED")]
			[Address(RVA = "0x64D5400", Offset = "0x64D4400", VA = "0x64D5400")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000084")]
		public int currentIndex
		{
			[Token(Token = "0x60006EE")]
			[Address(RVA = "0x64D5420", Offset = "0x64D4420", VA = "0x64D5420")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60006EF")]
			[Address(RVA = "0x64D5450", Offset = "0x64D4450", VA = "0x64D5450")]
			set
			{
			}
		}

		[Token(Token = "0x17000085")]
		public Type autoEnum
		{
			[Token(Token = "0x60006F0")]
			[Address(RVA = "0x64D5480", Offset = "0x64D4480", VA = "0x64D5480")]
			set
			{
			}
		}

		[Token(Token = "0x60006F1")]
		[Address(RVA = "0x64D54D0", Offset = "0x64D44D0", VA = "0x64D54D0")]
		internal void InitQuickSeparators()
		{
		}

		[Token(Token = "0x60006F2")]
		[Address(RVA = "0x64D56F0", Offset = "0x64D46F0", VA = "0x64D56F0", Slot = "16")]
		public override void SetValue(int value)
		{
		}

		[Token(Token = "0x60006F3")]
		[Address(RVA = "0x64C4E00", Offset = "0x64C3E00", VA = "0x64C4E00")]
		public EnumField()
		{
		}
	}

	[Token(Token = "0x20000AA")]
	public class ObjectPopupField : Field<Object>
	{
		[Token(Token = "0x17000086")]
		public Func<IEnumerable<Object>> getObjects
		{
			[Token(Token = "0x60006F7")]
			[Address(RVA = "0x64D5910", Offset = "0x64D4910", VA = "0x64D5910")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006F8")]
			[Address(RVA = "0x64D5920", Offset = "0x64D4920", VA = "0x64D5920")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60006F9")]
		[Address(RVA = "0x64D5930", Offset = "0x64D4930", VA = "0x64D5930")]
		public ObjectPopupField()
		{
		}
	}

	[Token(Token = "0x20000AB")]
	public class CameraSelector : ObjectPopupField
	{
		[Token(Token = "0x4000249")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private Camera[] m_CamerasArray;

		[Token(Token = "0x400024A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private List<Camera> m_Cameras;

		[Token(Token = "0x17000087")]
		private IEnumerable<Camera> cameras
		{
			[Token(Token = "0x60006FB")]
			[Address(RVA = "0x64D5970", Offset = "0x64D4970", VA = "0x64D5970")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006FA")]
		[Address(RVA = "0x64C4FE0", Offset = "0x64C3FE0", VA = "0x64C4FE0")]
		public CameraSelector()
		{
		}
	}

	[Token(Token = "0x20000AC")]
	public class HistoryEnumField : EnumField
	{
		[Token(Token = "0x17000088")]
		public Func<int>[] historyIndexGetter
		{
			[Token(Token = "0x60006FD")]
			[Address(RVA = "0x64D5BA0", Offset = "0x64D4BA0", VA = "0x64D5BA0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006FE")]
			[Address(RVA = "0x64D5BB0", Offset = "0x64D4BB0", VA = "0x64D5BB0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000089")]
		public int historyDepth
		{
			[Token(Token = "0x60006FF")]
			[Address(RVA = "0x64D5BD0", Offset = "0x64D4BD0", VA = "0x64D5BD0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000700")]
		[Address(RVA = "0x64D5BF0", Offset = "0x64D4BF0", VA = "0x64D5BF0")]
		public int GetHistoryValue(int historyIndex)
		{
			return default(int);
		}

		[Token(Token = "0x6000701")]
		[Address(RVA = "0x64D5C30", Offset = "0x64D4C30", VA = "0x64D5C30")]
		public HistoryEnumField()
		{
		}
	}

	[Token(Token = "0x20000AD")]
	public class BitField : EnumField<Enum>
	{
		[Token(Token = "0x400024C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private Type m_EnumType;

		[Token(Token = "0x1700008A")]
		public Type enumType
		{
			[Token(Token = "0x6000702")]
			[Address(RVA = "0x64D5C90", Offset = "0x64D4C90", VA = "0x64D5C90")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000703")]
			[Address(RVA = "0x64D5CA0", Offset = "0x64D4CA0", VA = "0x64D5CA0")]
			set
			{
			}
		}

		[Token(Token = "0x6000704")]
		[Address(RVA = "0x64D5D00", Offset = "0x64D4D00", VA = "0x64D5D00")]
		public BitField()
		{
		}
	}

	[Token(Token = "0x20000AE")]
	public class ColorField : Field<Color>
	{
		[Token(Token = "0x400024D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public bool hdr;

		[Token(Token = "0x400024E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x69")]
		public bool showAlpha;

		[Token(Token = "0x400024F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x6A")]
		public bool showPicker;

		[Token(Token = "0x4000250")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
		public float incStep;

		[Token(Token = "0x4000251")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public float incStepMult;

		[Token(Token = "0x4000252")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
		public int decimals;

		[Token(Token = "0x6000705")]
		[Address(RVA = "0x64D5D60", Offset = "0x64D4D60", VA = "0x64D5D60", Slot = "15")]
		public override Color ValidateValue(Color value)
		{
			return default(Color);
		}

		[Token(Token = "0x6000706")]
		[Address(RVA = "0x64D4DB0", Offset = "0x64D3DB0", VA = "0x64D4DB0")]
		public ColorField()
		{
		}
	}

	[Token(Token = "0x20000AF")]
	public class Vector2Field : Field<Vector2>
	{
		[Token(Token = "0x4000253")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public float incStep;

		[Token(Token = "0x4000254")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
		public float incStepMult;

		[Token(Token = "0x4000255")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public int decimals;

		[Token(Token = "0x6000707")]
		[Address(RVA = "0x64D5D90", Offset = "0x64D4D90", VA = "0x64D5D90")]
		public Vector2Field()
		{
		}
	}

	[Token(Token = "0x20000B0")]
	public class Vector3Field : Field<Vector3>
	{
		[Token(Token = "0x4000256")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public float incStep;

		[Token(Token = "0x4000257")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
		public float incStepMult;

		[Token(Token = "0x4000258")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public int decimals;

		[Token(Token = "0x6000708")]
		[Address(RVA = "0x64D5DE0", Offset = "0x64D4DE0", VA = "0x64D5DE0")]
		public Vector3Field()
		{
		}
	}

	[Token(Token = "0x20000B1")]
	public class Vector4Field : Field<Vector4>
	{
		[Token(Token = "0x4000259")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public float incStep;

		[Token(Token = "0x400025A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
		public float incStepMult;

		[Token(Token = "0x400025B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public int decimals;

		[Token(Token = "0x6000709")]
		[Address(RVA = "0x64D5E30", Offset = "0x64D4E30", VA = "0x64D5E30")]
		public Vector4Field()
		{
		}
	}

	[Token(Token = "0x20000B2")]
	public class ObjectField : Field<Object>
	{
		[Token(Token = "0x400025C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Type type;

		[Token(Token = "0x600070A")]
		[Address(RVA = "0x64C7600", Offset = "0x64C6600", VA = "0x64C7600")]
		public ObjectField()
		{
		}
	}

	[Token(Token = "0x20000B3")]
	public class ObjectListField : Field<Object[]>
	{
		[Token(Token = "0x400025D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Type type;

		[Token(Token = "0x600070B")]
		[Address(RVA = "0x64D5E80", Offset = "0x64D4E80", VA = "0x64D5E80")]
		public ObjectListField()
		{
		}
	}

	[Token(Token = "0x20000B4")]
	public class MessageBox : Widget
	{
		[Token(Token = "0x20000B5")]
		public enum Style
		{
			[Token(Token = "0x4000261")]
			Info,
			[Token(Token = "0x4000262")]
			Warning,
			[Token(Token = "0x4000263")]
			Error
		}

		[Token(Token = "0x400025E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public Style style;

		[Token(Token = "0x400025F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public Func<string> messageCallback;

		[Token(Token = "0x1700008B")]
		public string message
		{
			[Token(Token = "0x600070C")]
			[Address(RVA = "0x64D5F10", Offset = "0x64D4F10", VA = "0x64D5F10")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600070D")]
		[Address(RVA = "0x64C7E80", Offset = "0x64C6E80", VA = "0x64C7E80")]
		public MessageBox()
		{
		}
	}

	[Token(Token = "0x20000B6")]
	public class RuntimeDebugShadersMessageBox : MessageBox
	{
		[Token(Token = "0x600070E")]
		[Address(RVA = "0x64D5F30", Offset = "0x64D4F30", VA = "0x64D5F30")]
		public RuntimeDebugShadersMessageBox()
		{
		}
	}

	[Token(Token = "0x20000B8")]
	public class Panel : IContainer, IComparable<Panel>
	{
		[Token(Token = "0x400026A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		[CompilerGenerated]
		private Action<Panel> m_onSetDirty;

		[Token(Token = "0x1700008C")]
		public Flags flags
		{
			[Token(Token = "0x6000712")]
			[Address(RVA = "0x64D6170", Offset = "0x64D5170", VA = "0x64D6170")]
			[CompilerGenerated]
			get
			{
				return default(Flags);
			}
			[Token(Token = "0x6000713")]
			[Address(RVA = "0x64D6180", Offset = "0x64D5180", VA = "0x64D6180")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700008D")]
		public string displayName
		{
			[Token(Token = "0x6000714")]
			[Address(RVA = "0x64D6190", Offset = "0x64D5190", VA = "0x64D6190", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000715")]
			[Address(RVA = "0x64D61A0", Offset = "0x64D51A0", VA = "0x64D61A0", Slot = "6")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700008E")]
		public int groupIndex
		{
			[Token(Token = "0x6000716")]
			[Address(RVA = "0x64D61B0", Offset = "0x64D51B0", VA = "0x64D61B0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000717")]
			[Address(RVA = "0x64D61C0", Offset = "0x64D51C0", VA = "0x64D61C0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700008F")]
		public string queryPath
		{
			[Token(Token = "0x6000718")]
			[Address(RVA = "0x64D61D0", Offset = "0x64D51D0", VA = "0x64D61D0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000090")]
		public bool isEditorOnly
		{
			[Token(Token = "0x6000719")]
			[Address(RVA = "0x64D61E0", Offset = "0x64D51E0", VA = "0x64D61E0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000091")]
		public bool isRuntimeOnly
		{
			[Token(Token = "0x600071A")]
			[Address(RVA = "0x64D61F0", Offset = "0x64D51F0", VA = "0x64D61F0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000092")]
		public bool isInactiveInEditor
		{
			[Token(Token = "0x600071B")]
			[Address(RVA = "0x64D6200", Offset = "0x64D5200", VA = "0x64D6200")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000093")]
		public bool editorForceUpdate
		{
			[Token(Token = "0x600071C")]
			[Address(RVA = "0x64D6260", Offset = "0x64D5260", VA = "0x64D6260")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000094")]
		public ObservableList<Widget> children
		{
			[Token(Token = "0x600071D")]
			[Address(RVA = "0x64D6270", Offset = "0x64D5270", VA = "0x64D6270", Slot = "4")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600071E")]
			[Address(RVA = "0x64D6280", Offset = "0x64D5280", VA = "0x64D6280")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x14000009")]
		public event Action<Panel> onSetDirty
		{
			[Token(Token = "0x600071F")]
			[Address(RVA = "0x64CF5F0", Offset = "0x64CE5F0", VA = "0x64CF5F0")]
			[CompilerGenerated]
			add
			{
			}
			[Token(Token = "0x6000720")]
			[Address(RVA = "0x64CF1F0", Offset = "0x64CE1F0", VA = "0x64CF1F0")]
			[CompilerGenerated]
			remove
			{
			}
		}

		[Token(Token = "0x6000721")]
		[Address(RVA = "0x64CF300", Offset = "0x64CE300", VA = "0x64CF300")]
		public Panel()
		{
		}

		[Token(Token = "0x6000722")]
		[Address(RVA = "0x64D6290", Offset = "0x64D5290", VA = "0x64D6290", Slot = "9")]
		protected virtual void OnItemAdded(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x6000723")]
		[Address(RVA = "0x64D62F0", Offset = "0x64D52F0", VA = "0x64D62F0", Slot = "10")]
		protected virtual void OnItemRemoved(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x6000724")]
		[Address(RVA = "0x64D37B0", Offset = "0x64D27B0", VA = "0x64D37B0")]
		public void SetDirty()
		{
		}

		[Token(Token = "0x6000725")]
		[Address(RVA = "0x64D6350", Offset = "0x64D5350", VA = "0x64D6350", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000726")]
		[Address(RVA = "0x64D6430", Offset = "0x64D5430", VA = "0x64D6430", Slot = "8")]
		private int System_002EIComparable_003CUnityEngine_002ERendering_002EDebugUI_002EPanel_003E_002ECompareTo(Panel other)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20000BA")]
	[Flags]
	public enum Flags
	{
		[Token(Token = "0x400026F")]
		None = 0,
		[Token(Token = "0x4000270")]
		EditorOnly = 2,
		[Token(Token = "0x4000271")]
		RuntimeOnly = 4,
		[Token(Token = "0x4000272")]
		EditorForceUpdate = 8,
		[Token(Token = "0x4000273")]
		FrequentlyUsed = 0x10
	}

	[Token(Token = "0x20000BB")]
	public abstract class Widget
	{
		[Token(Token = "0x20000BC")]
		public struct NameAndTooltip
		{
			[Token(Token = "0x400027C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public string name;

			[Token(Token = "0x400027D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public string tooltip;
		}

		[Token(Token = "0x4000275")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		protected Panel m_Panel;

		[Token(Token = "0x4000276")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		protected IContainer m_Parent;

		[Token(Token = "0x400027B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public Func<bool> isHiddenCallback;

		[Token(Token = "0x17000095")]
		public int order
		{
			[Token(Token = "0x600072B")]
			[Address(RVA = "0x64D6520", Offset = "0x64D5520", VA = "0x64D6520")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x600072C")]
			[Address(RVA = "0x64D6530", Offset = "0x64D5530", VA = "0x64D6530")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000096")]
		public virtual Panel panel
		{
			[Token(Token = "0x600072D")]
			[Address(RVA = "0x64D6540", Offset = "0x64D5540", VA = "0x64D6540", Slot = "4")]
			get
			{
				return null;
			}
			[Token(Token = "0x600072E")]
			[Address(RVA = "0x64D6550", Offset = "0x64D5550", VA = "0x64D6550", Slot = "5")]
			internal set
			{
			}
		}

		[Token(Token = "0x17000097")]
		public virtual IContainer parent
		{
			[Token(Token = "0x600072F")]
			[Address(RVA = "0x64D6560", Offset = "0x64D5560", VA = "0x64D6560", Slot = "6")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000730")]
			[Address(RVA = "0x64D6570", Offset = "0x64D5570", VA = "0x64D6570", Slot = "7")]
			internal set
			{
			}
		}

		[Token(Token = "0x17000098")]
		public Flags flags
		{
			[Token(Token = "0x6000731")]
			[Address(RVA = "0x64D6580", Offset = "0x64D5580", VA = "0x64D6580")]
			[CompilerGenerated]
			get
			{
				return default(Flags);
			}
			[Token(Token = "0x6000732")]
			[Address(RVA = "0x64D6590", Offset = "0x64D5590", VA = "0x64D6590")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000099")]
		public string displayName
		{
			[Token(Token = "0x6000733")]
			[Address(RVA = "0x64D65A0", Offset = "0x64D55A0", VA = "0x64D65A0", Slot = "8")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000734")]
			[Address(RVA = "0x64D65B0", Offset = "0x64D55B0", VA = "0x64D65B0", Slot = "9")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700009A")]
		public string tooltip
		{
			[Token(Token = "0x6000735")]
			[Address(RVA = "0x64D65C0", Offset = "0x64D55C0", VA = "0x64D65C0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000736")]
			[Address(RVA = "0x64D65D0", Offset = "0x64D55D0", VA = "0x64D65D0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700009B")]
		public string queryPath
		{
			[Token(Token = "0x6000737")]
			[Address(RVA = "0x64D65E0", Offset = "0x64D55E0", VA = "0x64D65E0", Slot = "10")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000738")]
			[Address(RVA = "0x64D65F0", Offset = "0x64D55F0", VA = "0x64D65F0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700009C")]
		public bool isEditorOnly
		{
			[Token(Token = "0x6000739")]
			[Address(RVA = "0x64D6600", Offset = "0x64D5600", VA = "0x64D6600")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700009D")]
		public bool isRuntimeOnly
		{
			[Token(Token = "0x600073A")]
			[Address(RVA = "0x64D6610", Offset = "0x64D5610", VA = "0x64D6610")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700009E")]
		public bool isInactiveInEditor
		{
			[Token(Token = "0x600073B")]
			[Address(RVA = "0x64D6620", Offset = "0x64D5620", VA = "0x64D6620")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700009F")]
		public bool isHidden
		{
			[Token(Token = "0x600073C")]
			[Address(RVA = "0x64D3A20", Offset = "0x64D2A20", VA = "0x64D3A20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000A0")]
		public NameAndTooltip nameAndTooltip
		{
			[Token(Token = "0x600073F")]
			[Address(RVA = "0x64C75C0", Offset = "0x64C65C0", VA = "0x64C75C0")]
			set
			{
			}
		}

		[Token(Token = "0x600073D")]
		[Address(RVA = "0x64D3630", Offset = "0x64D2630", VA = "0x64D3630", Slot = "11")]
		internal virtual void GenerateQueryPath()
		{
		}

		[Token(Token = "0x600073E")]
		[Address(RVA = "0x64D6680", Offset = "0x64D5680", VA = "0x64D6680", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000740")]
		[Address(RVA = "0x64D3560", Offset = "0x64D2560", VA = "0x64D3560")]
		protected Widget()
		{
		}
	}

	[Token(Token = "0x20000BD")]
	public interface IContainer
	{
		[Token(Token = "0x170000A1")]
		ObservableList<Widget> children
		{
			[Token(Token = "0x6000741")]
			get;
		}

		[Token(Token = "0x170000A2")]
		string displayName
		{
			[Token(Token = "0x6000742")]
			get;
			[Token(Token = "0x6000743")]
			set;
		}

		[Token(Token = "0x170000A3")]
		string queryPath
		{
			[Token(Token = "0x6000744")]
			get;
		}
	}

	[Token(Token = "0x20000BE")]
	public interface IValueField
	{
		[Token(Token = "0x6000745")]
		object GetValue();

		[Token(Token = "0x6000746")]
		void SetValue(object value);

		[Token(Token = "0x6000747")]
		object ValidateValue(object value);
	}

	[Token(Token = "0x20000BF")]
	public class Button : Widget
	{
		[Token(Token = "0x170000A4")]
		public Action action
		{
			[Token(Token = "0x6000748")]
			[Address(RVA = "0x64D66F0", Offset = "0x64D56F0", VA = "0x64D66F0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000749")]
			[Address(RVA = "0x64D6700", Offset = "0x64D5700", VA = "0x64D6700")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x600074A")]
		[Address(RVA = "0x64D6710", Offset = "0x64D5710", VA = "0x64D6710")]
		public Button()
		{
		}
	}

	[Token(Token = "0x20000C0")]
	public class Value : Widget
	{
		[Token(Token = "0x4000280")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public float refreshRate;

		[Token(Token = "0x4000281")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public string formatString;

		[Token(Token = "0x170000A5")]
		public Func<object> getter
		{
			[Token(Token = "0x600074B")]
			[Address(RVA = "0x64D6720", Offset = "0x64D5720", VA = "0x64D6720")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600074C")]
			[Address(RVA = "0x64D6730", Offset = "0x64D5730", VA = "0x64D6730")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x600074D")]
		[Address(RVA = "0x64C09B0", Offset = "0x64BF9B0", VA = "0x64C09B0")]
		public Value()
		{
		}

		[Token(Token = "0x600074E")]
		[Address(RVA = "0x64D6740", Offset = "0x64D5740", VA = "0x64D6740", Slot = "12")]
		public virtual object GetValue()
		{
			return null;
		}

		[Token(Token = "0x600074F")]
		[Address(RVA = "0x64D6760", Offset = "0x64D5760", VA = "0x64D6760", Slot = "13")]
		public virtual string FormatString(object value)
		{
			return null;
		}
	}

	[Token(Token = "0x20000C1")]
	public class ProgressBarValue : Value
	{
		[Token(Token = "0x4000282")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public float min;

		[Token(Token = "0x4000283")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
		public float max;

		[Token(Token = "0x6000750")]
		[Address(RVA = "0x64D67C0", Offset = "0x64D57C0", VA = "0x64D67C0", Slot = "13")]
		public override string FormatString(object value)
		{
			return null;
		}

		[Token(Token = "0x6000751")]
		[Address(RVA = "0x64CB3A0", Offset = "0x64CA3A0", VA = "0x64CB3A0")]
		public ProgressBarValue()
		{
		}
	}

	[Token(Token = "0x20000C2")]
	public class ValueTuple : Widget
	{
		[Token(Token = "0x4000284")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public Value[] values;

		[Token(Token = "0x4000285")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public int pinnedElementIndex;

		[Token(Token = "0x170000A6")]
		public int numElements
		{
			[Token(Token = "0x6000753")]
			[Address(RVA = "0x64D68C0", Offset = "0x64D58C0", VA = "0x64D68C0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000A7")]
		public float refreshRate
		{
			[Token(Token = "0x6000754")]
			[Address(RVA = "0x64D68E0", Offset = "0x64D58E0", VA = "0x64D68E0")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x6000755")]
		[Address(RVA = "0x64CB390", Offset = "0x64CA390", VA = "0x64CB390")]
		public ValueTuple()
		{
		}
	}

	[Token(Token = "0x20000C3")]
	[Obsolete("Mask field is not longer supported. Please use a BitField or implement your own Widget. #from(6000.2)")]
	public class MaskField : EnumField<uint>
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0x64D6930", Offset = "0x64D5930", VA = "0x64D6930")]
		public void Fill(string[] names)
		{
		}

		[Token(Token = "0x6000757")]
		[Address(RVA = "0x64D6D50", Offset = "0x64D5D50", VA = "0x64D6D50", Slot = "16")]
		public override void SetValue(uint value)
		{
		}

		[Token(Token = "0x6000758")]
		[Address(RVA = "0x64D6E00", Offset = "0x64D5E00", VA = "0x64D6E00")]
		public MaskField()
		{
		}
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x64D3100", Offset = "0x64D2100", VA = "0x64D3100")]
	public DebugUI()
	{
	}
}
