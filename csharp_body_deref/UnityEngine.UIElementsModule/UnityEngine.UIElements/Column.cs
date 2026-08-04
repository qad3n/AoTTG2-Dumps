// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Column
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4FE39F0", Offset = "0x4FE39F0", VA = "0x4FE39F0")]
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
		[Address(RVA = "0x4FE2CD0", Offset = "0x4FE2CD0", VA = "0x4FE2CD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600057D")]
		[Address(RVA = "0x4FE2CE0", Offset = "0x4FE2CE0", VA = "0x4FE2CE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public string title
	{
		[Token(Token = "0x600057E")]
		[Address(RVA = "0x4FE2D70", Offset = "0x4FE2D70", VA = "0x4FE2D70")]
		get
		{
			return null;
		}
		[Token(Token = "0x600057F")]
		[Address(RVA = "0x4FE2D80", Offset = "0x4FE2D80", VA = "0x4FE2D80")]
		set
		{
		}
	}

	[Token(Token = "0x170000E9")]
	public Background icon
	{
		[Token(Token = "0x6000580")]
		[Address(RVA = "0x4FE2DE0", Offset = "0x4FE2DE0", VA = "0x4FE2DE0")]
		get
		{
			return default(Background);
		}
	}

	[Token(Token = "0x170000EA")]
	internal int index
	{
		[Token(Token = "0x6000581")]
		[Address(RVA = "0x4FE2E00", Offset = "0x4FE2E00", VA = "0x4FE2E00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000EB")]
	internal int displayIndex
	{
		[Token(Token = "0x6000582")]
		[Address(RVA = "0x4FE2F80", Offset = "0x4FE2F80", VA = "0x4FE2F80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000EC")]
	internal int visibleIndex
	{
		[Token(Token = "0x6000583")]
		[Address(RVA = "0x4FE3130", Offset = "0x4FE3130", VA = "0x4FE3130")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000ED")]
	public bool visible
	{
		[Token(Token = "0x6000584")]
		[Address(RVA = "0x4FE31E0", Offset = "0x4FE31E0", VA = "0x4FE31E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000585")]
		[Address(RVA = "0x4FE31F0", Offset = "0x4FE31F0", VA = "0x4FE31F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000EE")]
	public Length width
	{
		[Token(Token = "0x6000586")]
		[Address(RVA = "0x4FE3230", Offset = "0x4FE3230", VA = "0x4FE3230")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6000587")]
		[Address(RVA = "0x4FE3240", Offset = "0x4FE3240", VA = "0x4FE3240")]
		set
		{
		}
	}

	[Token(Token = "0x170000EF")]
	public Length minWidth
	{
		[Token(Token = "0x6000588")]
		[Address(RVA = "0x4FE32E0", Offset = "0x4FE32E0", VA = "0x4FE32E0")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x6000589")]
		[Address(RVA = "0x4FE32F0", Offset = "0x4FE32F0", VA = "0x4FE32F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F0")]
	public Length maxWidth
	{
		[Token(Token = "0x600058A")]
		[Address(RVA = "0x4FE3340", Offset = "0x4FE3340", VA = "0x4FE3340")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x600058B")]
		[Address(RVA = "0x4FE3350", Offset = "0x4FE3350", VA = "0x4FE3350")]
		set
		{
		}
	}

	[Token(Token = "0x170000F1")]
	internal float desiredWidth
	{
		[Token(Token = "0x600058C")]
		[Address(RVA = "0x4FE33A0", Offset = "0x4FE33A0", VA = "0x4FE33A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600058D")]
		[Address(RVA = "0x4FE32B0", Offset = "0x4FE32B0", VA = "0x4FE32B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F2")]
	public bool sortable
	{
		[Token(Token = "0x600058E")]
		[Address(RVA = "0x4FE33B0", Offset = "0x4FE33B0", VA = "0x4FE33B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600058F")]
		[Address(RVA = "0x4FE33C0", Offset = "0x4FE33C0", VA = "0x4FE33C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	public bool stretchable
	{
		[Token(Token = "0x6000590")]
		[Address(RVA = "0x4FE3400", Offset = "0x4FE3400", VA = "0x4FE3400")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000591")]
		[Address(RVA = "0x4FE3410", Offset = "0x4FE3410", VA = "0x4FE3410")]
		set
		{
		}
	}

	[Token(Token = "0x170000F4")]
	public bool optional
	{
		[Token(Token = "0x6000592")]
		[Address(RVA = "0x4FE3450", Offset = "0x4FE3450", VA = "0x4FE3450")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000593")]
		[Address(RVA = "0x4FE3460", Offset = "0x4FE3460", VA = "0x4FE3460")]
		set
		{
		}
	}

	[Token(Token = "0x170000F5")]
	public bool resizable
	{
		[Token(Token = "0x6000594")]
		[Address(RVA = "0x4FE34A0", Offset = "0x4FE34A0", VA = "0x4FE34A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000595")]
		[Address(RVA = "0x4FE34B0", Offset = "0x4FE34B0", VA = "0x4FE34B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F6")]
	public Func<VisualElement> makeHeader
	{
		[Token(Token = "0x6000596")]
		[Address(RVA = "0x4FE34F0", Offset = "0x4FE34F0", VA = "0x4FE34F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000597")]
		[Address(RVA = "0x4FE3500", Offset = "0x4FE3500", VA = "0x4FE3500")]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	public Action<VisualElement> bindHeader
	{
		[Token(Token = "0x6000598")]
		[Address(RVA = "0x4FE3560", Offset = "0x4FE3560", VA = "0x4FE3560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F8")]
	public Action<VisualElement> unbindHeader
	{
		[Token(Token = "0x6000599")]
		[Address(RVA = "0x4FE3570", Offset = "0x4FE3570", VA = "0x4FE3570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F9")]
	public Action<VisualElement> destroyHeader
	{
		[Token(Token = "0x600059A")]
		[Address(RVA = "0x4FE3580", Offset = "0x4FE3580", VA = "0x4FE3580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FA")]
	public Func<VisualElement> makeCell
	{
		[Token(Token = "0x600059B")]
		[Address(RVA = "0x4FE3590", Offset = "0x4FE3590", VA = "0x4FE3590")]
		get
		{
			return null;
		}
		[Token(Token = "0x600059C")]
		[Address(RVA = "0x4FE35A0", Offset = "0x4FE35A0", VA = "0x4FE35A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	public Action<VisualElement, int> bindCell
	{
		[Token(Token = "0x600059D")]
		[Address(RVA = "0x4FE3610", Offset = "0x4FE3610", VA = "0x4FE3610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FC")]
	public Action<VisualElement, int> unbindCell
	{
		[Token(Token = "0x600059E")]
		[Address(RVA = "0x4FE3620", Offset = "0x4FE3620", VA = "0x4FE3620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FD")]
	public Action<VisualElement> destroyCell
	{
		[Token(Token = "0x600059F")]
		[Address(RVA = "0x4FE3630", Offset = "0x4FE3630", VA = "0x4FE3630")]
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
		[Address(RVA = "0x4FE3640", Offset = "0x4FE3640", VA = "0x4FE3640")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60005A1")]
		[Address(RVA = "0x4FE3650", Offset = "0x4FE3650", VA = "0x4FE3650")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1400000E")]
	internal event Action<Column, ColumnDataType> changed
	{
		[Token(Token = "0x60005A2")]
		[Address(RVA = "0x4FE3670", Offset = "0x4FE3670", VA = "0x4FE3670")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005A3")]
		[Address(RVA = "0x4FE3720", Offset = "0x4FE3720", VA = "0x4FE3720")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000F")]
	internal event Action<Column> resized
	{
		[Token(Token = "0x60005A4")]
		[Address(RVA = "0x4FE37D0", Offset = "0x4FE37D0", VA = "0x4FE37D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005A5")]
		[Address(RVA = "0x4FE3880", Offset = "0x4FE3880", VA = "0x4FE3880")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x4FE2D40", Offset = "0x4FE2D40", VA = "0x4FE2D40")]
	private void NotifyChange(ColumnDataType type)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x4FE3930", Offset = "0x4FE3930", VA = "0x4FE3930")]
	public Column()
	{
	}
}
