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
			[Address(RVA = "0x2AD3C40", Offset = "0x2AD2240", VA = "0x182AD3C40")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700006E")]
		public ObservableList<Widget> children
		{
			[Token(Token = "0x6000696")]
			[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0", Slot = "12")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000697")]
			[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700006F")]
		public override Panel panel
		{
			[Token(Token = "0x6000698")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000699")]
			[Address(RVA = "0x2AD3CA0", Offset = "0x2AD22A0", VA = "0x182AD3CA0", Slot = "5")]
			internal set
			{
			}
		}

		[Token(Token = "0x600069A")]
		[Address(RVA = "0x2AD3930", Offset = "0x2AD1F30", VA = "0x182AD3930")]
		public Container()
		{
		}

		[Token(Token = "0x600069B")]
		[Address(RVA = "0x2AD3BA0", Offset = "0x2AD21A0", VA = "0x182AD3BA0")]
		public Container(string id)
		{
		}

		[Token(Token = "0x600069C")]
		[Address(RVA = "0x2AD39C0", Offset = "0x2AD1FC0", VA = "0x182AD39C0")]
		public Container(string displayName, ObservableList<Widget> children)
		{
		}

		[Token(Token = "0x600069D")]
		[Address(RVA = "0x2AD3660", Offset = "0x2AD1C60", VA = "0x182AD3660", Slot = "11")]
		internal override void GenerateQueryPath()
		{
		}

		[Token(Token = "0x600069E")]
		[Address(RVA = "0x2AD3840", Offset = "0x2AD1E40", VA = "0x182AD3840", Slot = "16")]
		protected virtual void OnItemAdded(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x600069F")]
		[Address(RVA = "0x2AD38C0", Offset = "0x2AD1EC0", VA = "0x182AD38C0", Slot = "17")]
		protected virtual void OnItemRemoved(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x60006A0")]
		[Address(RVA = "0x2AD3710", Offset = "0x2AD1D10", VA = "0x182AD3710", Slot = "2")]
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
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000071")]
		public bool opened
		{
			[Token(Token = "0x60006A2")]
			[Address(RVA = "0x1937790", Offset = "0x1935D90", VA = "0x181937790")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60006A3")]
			[Address(RVA = "0x19377D0", Offset = "0x1935DD0", VA = "0x1819377D0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000072")]
		public string documentationUrl
		{
			[Token(Token = "0x60006A4")]
			[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006A5")]
			[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000073")]
		public string[] columnLabels
		{
			[Token(Token = "0x60006A6")]
			[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60006A7")]
			[Address(RVA = "0x2AE1F60", Offset = "0x2AE0560", VA = "0x182AE1F60")]
			set
			{
			}
		}

		[Token(Token = "0x17000074")]
		public string[] columnTooltips
		{
			[Token(Token = "0x60006A8")]
			[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60006A9")]
			[Address(RVA = "0x2AE1F80", Offset = "0x2AE0580", VA = "0x182AE1F80")]
			set
			{
			}
		}

		[Token(Token = "0x17000075")]
		internal List<GUIContent> rowContents
		{
			[Token(Token = "0x60006AA")]
			[Address(RVA = "0x2AE1CA0", Offset = "0x2AE02A0", VA = "0x182AE1CA0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006AB")]
		[Address(RVA = "0x2AE1B60", Offset = "0x2AE0160", VA = "0x182AE1B60")]
		public Foldout()
		{
		}

		[Token(Token = "0x60006AC")]
		[Address(RVA = "0x2AE1BE0", Offset = "0x2AE01E0", VA = "0x182AE1BE0")]
		public Foldout(string displayName, ObservableList<Widget> children, [Optional] string[] columnLabels, [Optional] string[] columnTooltips)
		{
		}

		[Token(Token = "0x60006AD")]
		[Address(RVA = "0x1937790", Offset = "0x1935D90", VA = "0x181937790")]
		public bool GetValue()
		{
			return default(bool);
		}

		[Token(Token = "0x60006AE")]
		[Address(RVA = "0x2AE1B30", Offset = "0x2AE0130", VA = "0x182AE1B30", Slot = "18")]
		private object UnityEngine_002ERendering_002EDebugUI_002EIValueField_002EGetValue()
		{
			return null;
		}

		[Token(Token = "0x60006AF")]
		[Address(RVA = "0x2AE1AE0", Offset = "0x2AE00E0", VA = "0x182AE1AE0", Slot = "19")]
		public void SetValue(object value)
		{
		}

		[Token(Token = "0x60006B0")]
		[Address(RVA = "0x8E13A0", Offset = "0x8DF9A0", VA = "0x1808E13A0", Slot = "20")]
		public object ValidateValue(object value)
		{
			return null;
		}

		[Token(Token = "0x60006B1")]
		[Address(RVA = "0x19377D0", Offset = "0x1935DD0", VA = "0x1819377D0")]
		public void SetValue(bool value)
		{
		}
	}

	[Token(Token = "0x200009A")]
	public class HBox : Container
	{
		[Token(Token = "0x60006B2")]
		[Address(RVA = "0x2AE3020", Offset = "0x2AE1620", VA = "0x182AE3020")]
		public HBox()
		{
		}
	}

	[Token(Token = "0x200009B")]
	public class VBox : Container
	{
		[Token(Token = "0x60006B3")]
		[Address(RVA = "0x2AE9CD0", Offset = "0x2AE82D0", VA = "0x182AE9CD0")]
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
			[Address(RVA = "0x2AE5290", Offset = "0x2AE3890", VA = "0x182AE5290")]
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
			[Address(RVA = "0x2AE84A0", Offset = "0x2AE6AA0", VA = "0x182AE84A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006B4")]
		[Address(RVA = "0x2AE8450", Offset = "0x2AE6A50", VA = "0x182AE8450")]
		public Table()
		{
		}

		[Token(Token = "0x60006B5")]
		[Address(RVA = "0x2AE8370", Offset = "0x2AE6970", VA = "0x182AE8370")]
		public void SetColumnVisibility(int index, bool visible)
		{
		}

		[Token(Token = "0x60006B6")]
		[Address(RVA = "0x2AE8200", Offset = "0x2AE6800", VA = "0x182AE8200")]
		public bool GetColumnVisibility(int index)
		{
			return default(bool);
		}

		[Token(Token = "0x60006B8")]
		[Address(RVA = "0x2AE8250", Offset = "0x2AE6850", VA = "0x182AE8250", Slot = "16")]
		protected override void OnItemAdded(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x60006B9")]
		[Address(RVA = "0x2AE82E0", Offset = "0x2AE68E0", VA = "0x182AE82E0", Slot = "17")]
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
		[Address(RVA = "0x2AD2D60", Offset = "0x2AD1360", VA = "0x182AD2D60")]
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
			[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006C9")]
			[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700007A")]
		public int historyDepth
		{
			[Token(Token = "0x60006CA")]
			[Address(RVA = "0x2AE30B0", Offset = "0x2AE16B0", VA = "0x182AE30B0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60006CB")]
		[Address(RVA = "0x2AE3070", Offset = "0x2AE1670", VA = "0x182AE3070")]
		public bool GetHistoryValue(int historyIndex)
		{
			return default(bool);
		}

		[Token(Token = "0x60006CC")]
		[Address(RVA = "0x2AD2D60", Offset = "0x2AD1360", VA = "0x182AD2D60")]
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
		[Address(RVA = "0x2AE3120", Offset = "0x2AE1720", VA = "0x182AE3120", Slot = "15")]
		public override int ValidateValue(int value)
		{
			return default(int);
		}

		[Token(Token = "0x60006CE")]
		[Address(RVA = "0x2AE3180", Offset = "0x2AE1780", VA = "0x182AE3180")]
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
		[Address(RVA = "0x2AE3120", Offset = "0x2AE1720", VA = "0x182AE3120", Slot = "15")]
		public override uint ValidateValue(uint value)
		{
			return default(uint);
		}

		[Token(Token = "0x60006D0")]
		[Address(RVA = "0x2AE9C80", Offset = "0x2AE8280", VA = "0x182AE9C80")]
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
		[Address(RVA = "0x2AE1A20", Offset = "0x2AE0020", VA = "0x182AE1A20", Slot = "15")]
		public override float ValidateValue(float value)
		{
			return default(float);
		}

		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x2AE1A80", Offset = "0x2AE0080", VA = "0x182AE1A80")]
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
			[Address(RVA = "0x2AE51E0", Offset = "0x2AE37E0", VA = "0x182AE51E0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700007C")]
		public string[] renderingLayersNames
		{
			[Token(Token = "0x60006D5")]
			[Address(RVA = "0x2AE5220", Offset = "0x2AE3820", VA = "0x182AE5220")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007D")]
		public ObservableList<Widget> children
		{
			[Token(Token = "0x60006D6")]
			[Address(RVA = "0x2AE5170", Offset = "0x2AE3770", VA = "0x182AE5170", Slot = "17")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007E")]
		public Func<int, Vector4> getRenderingLayerColor
		{
			[Token(Token = "0x60006D7")]
			[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006D8")]
			[Address(RVA = "0x58A960", Offset = "0x588F60", VA = "0x18058A960")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700007F")]
		public Action<Vector4, int> setRenderingLayerColor
		{
			[Token(Token = "0x60006D9")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006DA")]
			[Address(RVA = "0xB5BE30", Offset = "0xB5A430", VA = "0x180B5BE30")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60006D4")]
		[Address(RVA = "0x2AE4AC0", Offset = "0x2AE30C0", VA = "0x182AE4AC0")]
		private void Resize()
		{
		}

		[Token(Token = "0x60006DB")]
		[Address(RVA = "0x2AE4960", Offset = "0x2AE2F60", VA = "0x182AE4960", Slot = "11")]
		internal override void GenerateQueryPath()
		{
		}

		[Token(Token = "0x60006DC")]
		[Address(RVA = "0x2AE5060", Offset = "0x2AE3660", VA = "0x182AE5060")]
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
			[Address(RVA = "0x2AE1900", Offset = "0x2ADFF00", VA = "0x182AE1900")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000082")]
		public Func<int> getIndex
		{
			[Token(Token = "0x60006EA")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006EB")]
			[Address(RVA = "0xB5BE30", Offset = "0xB5A430", VA = "0x180B5BE30")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000083")]
		public Action<int> setIndex
		{
			[Token(Token = "0x60006EC")]
			[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006ED")]
			[Address(RVA = "0xA4D750", Offset = "0xA4BD50", VA = "0x180A4D750")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000084")]
		public int currentIndex
		{
			[Token(Token = "0x60006EE")]
			[Address(RVA = "0x2AE18D0", Offset = "0x2ADFED0", VA = "0x182AE18D0")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60006EF")]
			[Address(RVA = "0x2AE19F0", Offset = "0x2ADFFF0", VA = "0x182AE19F0")]
			set
			{
			}
		}

		[Token(Token = "0x17000085")]
		public Type autoEnum
		{
			[Token(Token = "0x60006F0")]
			[Address(RVA = "0x2AE1990", Offset = "0x2ADFF90", VA = "0x182AE1990")]
			set
			{
			}
		}

		[Token(Token = "0x60006F1")]
		[Address(RVA = "0x2AE1520", Offset = "0x2ADFB20", VA = "0x182AE1520")]
		internal void InitQuickSeparators()
		{
		}

		[Token(Token = "0x60006F2")]
		[Address(RVA = "0x2AE1740", Offset = "0x2ADFD40", VA = "0x182AE1740", Slot = "16")]
		public override void SetValue(int value)
		{
		}

		[Token(Token = "0x60006F3")]
		[Address(RVA = "0x2AE1870", Offset = "0x2ADFE70", VA = "0x182AE1870")]
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
			[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006F8")]
			[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60006F9")]
		[Address(RVA = "0x2AE38B0", Offset = "0x2AE1EB0", VA = "0x182AE38B0")]
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
			[Address(RVA = "0x2AD3390", Offset = "0x2AD1990", VA = "0x182AD3390")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006FA")]
		[Address(RVA = "0x2AD3280", Offset = "0x2AD1880", VA = "0x182AD3280")]
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
			[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60006FE")]
			[Address(RVA = "0x58A900", Offset = "0x588F00", VA = "0x18058A900")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000089")]
		public int historyDepth
		{
			[Token(Token = "0x60006FF")]
			[Address(RVA = "0x2AE3100", Offset = "0x2AE1700", VA = "0x182AE3100")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000700")]
		[Address(RVA = "0x2AE30C0", Offset = "0x2AE16C0", VA = "0x182AE30C0")]
		public int GetHistoryValue(int historyIndex)
		{
			return default(int);
		}

		[Token(Token = "0x6000701")]
		[Address(RVA = "0x2AE1870", Offset = "0x2ADFE70", VA = "0x182AE1870")]
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
			[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000703")]
			[Address(RVA = "0x2AD2D00", Offset = "0x2AD1300", VA = "0x182AD2D00")]
			set
			{
			}
		}

		[Token(Token = "0x6000704")]
		[Address(RVA = "0x2AD2CA0", Offset = "0x2AD12A0", VA = "0x182AD2CA0")]
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
		[Address(RVA = "0x2AD3550", Offset = "0x2AD1B50", VA = "0x182AD3550", Slot = "15")]
		public override Color ValidateValue(Color value)
		{
			return default(Color);
		}

		[Token(Token = "0x6000706")]
		[Address(RVA = "0x2AD3600", Offset = "0x2AD1C00", VA = "0x182AD3600")]
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
		[Address(RVA = "0x2AE9E40", Offset = "0x2AE8440", VA = "0x182AE9E40")]
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
		[Address(RVA = "0x2AE9E90", Offset = "0x2AE8490", VA = "0x182AE9E90")]
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
		[Address(RVA = "0x2AE9EE0", Offset = "0x2AE84E0", VA = "0x182AE9EE0")]
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
		[Address(RVA = "0x2AE3790", Offset = "0x2AE1D90", VA = "0x182AE3790")]
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
		[Address(RVA = "0x2AE3820", Offset = "0x2AE1E20", VA = "0x182AE3820")]
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
			[Address(RVA = "0x2AE36B0", Offset = "0x2AE1CB0", VA = "0x182AE36B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600070D")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public MessageBox()
		{
		}
	}

	[Token(Token = "0x20000B6")]
	public class RuntimeDebugShadersMessageBox : MessageBox
	{
		[Token(Token = "0x600070E")]
		[Address(RVA = "0x2AE52E0", Offset = "0x2AE38E0", VA = "0x182AE52E0")]
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
			[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
			[CompilerGenerated]
			get
			{
				return default(Flags);
			}
			[Token(Token = "0x6000713")]
			[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700008D")]
		public string displayName
		{
			[Token(Token = "0x6000714")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000715")]
			[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30", Slot = "6")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700008E")]
		public int groupIndex
		{
			[Token(Token = "0x6000716")]
			[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000717")]
			[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700008F")]
		public string queryPath
		{
			[Token(Token = "0x6000718")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000090")]
		public bool isEditorOnly
		{
			[Token(Token = "0x6000719")]
			[Address(RVA = "0x1D2E990", Offset = "0x1D2CF90", VA = "0x181D2E990")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000091")]
		public bool isRuntimeOnly
		{
			[Token(Token = "0x600071A")]
			[Address(RVA = "0x1D2E9B0", Offset = "0x1D2CFB0", VA = "0x181D2E9B0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000092")]
		public bool isInactiveInEditor
		{
			[Token(Token = "0x600071B")]
			[Address(RVA = "0x2AE3F20", Offset = "0x2AE2520", VA = "0x182AE3F20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000093")]
		public bool editorForceUpdate
		{
			[Token(Token = "0x600071C")]
			[Address(RVA = "0x1D2E9A0", Offset = "0x1D2CFA0", VA = "0x181D2E9A0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000094")]
		public ObservableList<Widget> children
		{
			[Token(Token = "0x600071D")]
			[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "4")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600071E")]
			[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x14000009")]
		public event Action<Panel> onSetDirty
		{
			[Token(Token = "0x600071F")]
			[Address(RVA = "0x2AE3E70", Offset = "0x2AE2470", VA = "0x182AE3E70")]
			[CompilerGenerated]
			add
			{
			}
			[Token(Token = "0x6000720")]
			[Address(RVA = "0x2AE3F80", Offset = "0x2AE2580", VA = "0x182AE3F80")]
			[CompilerGenerated]
			remove
			{
			}
		}

		[Token(Token = "0x6000721")]
		[Address(RVA = "0x2AE3BB0", Offset = "0x2AE21B0", VA = "0x182AE3BB0")]
		public Panel()
		{
		}

		[Token(Token = "0x6000722")]
		[Address(RVA = "0x2AE39D0", Offset = "0x2AE1FD0", VA = "0x182AE39D0", Slot = "9")]
		protected virtual void OnItemAdded(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x6000723")]
		[Address(RVA = "0x2AE3A40", Offset = "0x2AE2040", VA = "0x182AE3A40", Slot = "10")]
		protected virtual void OnItemRemoved(ObservableList<Widget> sender, ListChangedEventArgs<Widget> e)
		{
		}

		[Token(Token = "0x6000724")]
		[Address(RVA = "0x2AE3AB0", Offset = "0x2AE20B0", VA = "0x182AE3AB0")]
		public void SetDirty()
		{
		}

		[Token(Token = "0x6000725")]
		[Address(RVA = "0x2AE38F0", Offset = "0x2AE1EF0", VA = "0x182AE38F0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000726")]
		[Address(RVA = "0x2AE3B80", Offset = "0x2AE2180", VA = "0x182AE3B80", Slot = "8")]
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
			[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x600072C")]
			[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000096")]
		public virtual Panel panel
		{
			[Token(Token = "0x600072D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			get
			{
				return null;
			}
			[Token(Token = "0x600072E")]
			[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30", Slot = "5")]
			internal set
			{
			}
		}

		[Token(Token = "0x17000097")]
		public virtual IContainer parent
		{
			[Token(Token = "0x600072F")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "6")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000730")]
			[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0", Slot = "7")]
			internal set
			{
			}
		}

		[Token(Token = "0x17000098")]
		public Flags flags
		{
			[Token(Token = "0x6000731")]
			[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
			[CompilerGenerated]
			get
			{
				return default(Flags);
			}
			[Token(Token = "0x6000732")]
			[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000099")]
		public string displayName
		{
			[Token(Token = "0x6000733")]
			[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "8")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000734")]
			[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00", Slot = "9")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700009A")]
		public string tooltip
		{
			[Token(Token = "0x6000735")]
			[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000736")]
			[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700009B")]
		public string queryPath
		{
			[Token(Token = "0x6000737")]
			[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "10")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000738")]
			[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700009C")]
		public bool isEditorOnly
		{
			[Token(Token = "0x6000739")]
			[Address(RVA = "0x2AECAC0", Offset = "0x2AEB0C0", VA = "0x182AECAC0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700009D")]
		public bool isRuntimeOnly
		{
			[Token(Token = "0x600073A")]
			[Address(RVA = "0x2AECB50", Offset = "0x2AEB150", VA = "0x182AECB50")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700009E")]
		public bool isInactiveInEditor
		{
			[Token(Token = "0x600073B")]
			[Address(RVA = "0x2AECAF0", Offset = "0x2AEB0F0", VA = "0x182AECAF0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700009F")]
		public bool isHidden
		{
			[Token(Token = "0x600073C")]
			[Address(RVA = "0x2AECAD0", Offset = "0x2AEB0D0", VA = "0x182AECAD0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000A0")]
		public NameAndTooltip nameAndTooltip
		{
			[Token(Token = "0x600073F")]
			[Address(RVA = "0x2AECB60", Offset = "0x2AEB160", VA = "0x182AECB60")]
			set
			{
			}
		}

		[Token(Token = "0x600073D")]
		[Address(RVA = "0x2AEC990", Offset = "0x2AEAF90", VA = "0x182AEC990", Slot = "11")]
		internal virtual void GenerateQueryPath()
		{
		}

		[Token(Token = "0x600073E")]
		[Address(RVA = "0x2AECA40", Offset = "0x2AEB040", VA = "0x182AECA40", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000740")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
			[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000749")]
			[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x600074A")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
			[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600074C")]
			[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x600074D")]
		[Address(RVA = "0x2AE9DF0", Offset = "0x2AE83F0", VA = "0x182AE9DF0")]
		public Value()
		{
		}

		[Token(Token = "0x600074E")]
		[Address(RVA = "0x16EFA60", Offset = "0x16EE060", VA = "0x1816EFA60", Slot = "12")]
		public virtual object GetValue()
		{
			return null;
		}

		[Token(Token = "0x600074F")]
		[Address(RVA = "0x2AE9D90", Offset = "0x2AE8390", VA = "0x182AE9D90", Slot = "13")]
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
		[Address(RVA = "0x2AE4780", Offset = "0x2AE2D80", VA = "0x182AE4780", Slot = "13")]
		public override string FormatString(object value)
		{
			return null;
		}

		[Token(Token = "0x6000751")]
		[Address(RVA = "0x2AE4880", Offset = "0x2AE2E80", VA = "0x182AE4880")]
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
			[Address(RVA = "0x275EBF0", Offset = "0x275D1F0", VA = "0x18275EBF0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000A7")]
		public float refreshRate
		{
			[Token(Token = "0x6000754")]
			[Address(RVA = "0x2AE9D30", Offset = "0x2AE8330", VA = "0x182AE9D30")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x6000755")]
		[Address(RVA = "0x2AE9D20", Offset = "0x2AE8320", VA = "0x182AE9D20")]
		public ValueTuple()
		{
		}
	}

	[Token(Token = "0x20000C3")]
	[Obsolete("Mask field is not longer supported. Please use a BitField or implement your own Widget. #from(6000.2)")]
	public class MaskField : EnumField<uint>
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0x2AE31D0", Offset = "0x2AE17D0", VA = "0x182AE31D0")]
		public void Fill(string[] names)
		{
		}

		[Token(Token = "0x6000757")]
		[Address(RVA = "0x2AE3580", Offset = "0x2AE1B80", VA = "0x182AE3580", Slot = "16")]
		public override void SetValue(uint value)
		{
		}

		[Token(Token = "0x6000758")]
		[Address(RVA = "0x2AE3650", Offset = "0x2AE1C50", VA = "0x182AE3650")]
		public MaskField()
		{
		}
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DebugUI()
	{
	}
}
