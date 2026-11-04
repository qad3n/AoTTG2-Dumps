// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.SortColumnDescription
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
		[Address(RVA = "0x3224FE0", Offset = "0x32235E0", VA = "0x183224FE0")]
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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600087F")]
		[Address(RVA = "0x3223E30", Offset = "0x3222430", VA = "0x183223E30")]
		set
		{
		}
	}

	[Token(Token = "0x17000192")]
	[CreateProperty]
	public int columnIndex
	{
		[Token(Token = "0x6000880")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000881")]
		[Address(RVA = "0x3223DA0", Offset = "0x32223A0", VA = "0x183223DA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000193")]
	public Column column
	{
		[Token(Token = "0x6000882")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000883")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
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
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(SortDirection);
		}
		[Token(Token = "0x6000885")]
		[Address(RVA = "0x3223EE0", Offset = "0x32224E0", VA = "0x183223EE0")]
		set
		{
		}
	}

	[Token(Token = "0x14000021")]
	public event EventHandler<BindablePropertyChangedEventArgs> propertyChanged
	{
		[Token(Token = "0x600087C")]
		[Address(RVA = "0x3223B90", Offset = "0x3222190", VA = "0x183223B90", Slot = "4")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600087D")]
		[Address(RVA = "0x3223CF0", Offset = "0x32222F0", VA = "0x183223CF0", Slot = "5")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000022")]
	internal event Action<SortColumnDescription> changed
	{
		[Token(Token = "0x6000886")]
		[Address(RVA = "0x3223AE0", Offset = "0x32220E0", VA = "0x183223AE0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000887")]
		[Address(RVA = "0x3223C40", Offset = "0x3222240", VA = "0x183223C40")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000888")]
	[Address(RVA = "0x274B710", Offset = "0x2749D10", VA = "0x18274B710")]
	public SortColumnDescription()
	{
	}

	[Token(Token = "0x6000889")]
	[Address(RVA = "0x32239C0", Offset = "0x3221FC0", VA = "0x1832239C0")]
	public SortColumnDescription(int columnIndex, SortDirection direction)
	{
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x3223890", Offset = "0x3221E90", VA = "0x183223890")]
	public SortColumnDescription(string columnName, SortDirection direction)
	{
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x32234B0", Offset = "0x3221AB0", VA = "0x1832234B0")]
	private void NotifyPropertyChanged(in BindingId property)
	{
	}
}
