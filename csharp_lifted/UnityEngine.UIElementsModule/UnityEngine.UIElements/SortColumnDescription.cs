// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.SortColumnDescription
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

[Serializable]
[Token(Token = "0x2000121")]
[UxmlObject]
public class SortColumnDescription : INotifyBindablePropertyChanged
{
	[Token(Token = "0x2000122")]
	[Obsolete("UxmlObjectFactory<T> is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	internal class UxmlObjectFactory<T> : UxmlObjectFactory<T, UxmlObjectTraits<T>> where T : SortColumnDescription, new()
	{
		[Token(Token = "0x600088D")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x2000123")]
	[Obsolete("UxmlObjectFactory<T> is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	internal class UxmlObjectFactory : UxmlObjectFactory<SortColumnDescription>
	{
		[Token(Token = "0x600088E")]
		[Address(RVA = "0x6C25A80", Offset = "0x6C24A80", VA = "0x6C25A80")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x2000124")]
	[Obsolete("UxmlObjectTraits<T> is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	internal class UxmlObjectTraits<T> : UnityEngine.UIElements.UxmlObjectTraits<T> where T : SortColumnDescription
	{
		[Token(Token = "0x4000532")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlStringAttributeDescription m_ColumnName;

		[Token(Token = "0x4000533")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlIntAttributeDescription m_ColumnIndex;

		[Token(Token = "0x4000534")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlEnumAttributeDescription<SortDirection> m_SortDescription;

		[Token(Token = "0x600088F")]
		public override void Init(ref T obj, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000890")]
		public UxmlObjectTraits()
		{
		}
	}

	[Token(Token = "0x4000529")]
	[FieldOffset(Offset = "0x0")]
	private static readonly BindingId columnNameProperty;

	[Token(Token = "0x400052A")]
	[FieldOffset(Offset = "0x98")]
	private static readonly BindingId columnIndexProperty;

	[Token(Token = "0x400052B")]
	[FieldOffset(Offset = "0x130")]
	private static readonly BindingId directionProperty;

	[Token(Token = "0x400052C")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private int m_ColumnIndex;

	[Token(Token = "0x400052D")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private string m_ColumnName;

	[Token(Token = "0x400052E")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private SortDirection m_SortDirection;

	[Token(Token = "0x400052F")]
	[FieldOffset(Offset = "0x28")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private EventHandler<BindablePropertyChangedEventArgs> m_propertyChanged;

	[Token(Token = "0x4000531")]
	[FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<SortColumnDescription> m_changed;

	[Token(Token = "0x17000191")]
	[CreateProperty]
	public string columnName
	{
		[Token(Token = "0x600087E")]
		[Address(RVA = "0x6C25280", Offset = "0x6C24280", VA = "0x6C25280")]
		get
		{
			return null;
		}
		[Token(Token = "0x600087F")]
		[Address(RVA = "0x6C25290", Offset = "0x6C24290", VA = "0x6C25290")]
		set
		{
		}
	}

	[Token(Token = "0x17000192")]
	[CreateProperty]
	public int columnIndex
	{
		[Token(Token = "0x6000880")]
		[Address(RVA = "0x6C254A0", Offset = "0x6C244A0", VA = "0x6C254A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000881")]
		[Address(RVA = "0x6C254B0", Offset = "0x6C244B0", VA = "0x6C254B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000193")]
	public Column column
	{
		[Token(Token = "0x6000882")]
		[Address(RVA = "0x6C255E0", Offset = "0x6C245E0", VA = "0x6C255E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000883")]
		[Address(RVA = "0x6C255F0", Offset = "0x6C245F0", VA = "0x6C255F0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000194")]
	[CreateProperty]
	public SortDirection direction
	{
		[Token(Token = "0x6000884")]
		[Address(RVA = "0x6C25600", Offset = "0x6C24600", VA = "0x6C25600")]
		get
		{
			return default(SortDirection);
		}
		[Token(Token = "0x6000885")]
		[Address(RVA = "0x6C25610", Offset = "0x6C24610", VA = "0x6C25610")]
		set
		{
		}
	}

	[Token(Token = "0x14000021")]
	public event EventHandler<BindablePropertyChangedEventArgs> propertyChanged
	{
		[Token(Token = "0x600087C")]
		[Address(RVA = "0x6C25140", Offset = "0x6C24140", VA = "0x6C25140", Slot = "4")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600087D")]
		[Address(RVA = "0x6C251E0", Offset = "0x6C241E0", VA = "0x6C251E0", Slot = "5")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000022")]
	internal event Action<SortColumnDescription> changed
	{
		[Token(Token = "0x6000886")]
		[Address(RVA = "0x6C25740", Offset = "0x6C24740", VA = "0x6C25740")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000887")]
		[Address(RVA = "0x6C257E0", Offset = "0x6C247E0", VA = "0x6C257E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000888")]
	[Address(RVA = "0x6C25880", Offset = "0x6C24880", VA = "0x6C25880")]
	public SortColumnDescription()
	{
	}

	[Token(Token = "0x6000889")]
	[Address(RVA = "0x6C25890", Offset = "0x6C24890", VA = "0x6C25890")]
	public SortColumnDescription(int columnIndex, SortDirection direction)
	{
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x6C258D0", Offset = "0x6C248D0", VA = "0x6C258D0")]
	public SortColumnDescription(string columnName, SortDirection direction)
	{
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x6C253E0", Offset = "0x6C243E0", VA = "0x6C253E0")]
	private void NotifyPropertyChanged(in BindingId property)
	{
	}
}
