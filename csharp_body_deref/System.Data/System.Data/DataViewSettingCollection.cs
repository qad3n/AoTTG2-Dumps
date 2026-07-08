using System.Collections;
using System.ComponentModel;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200004A")]
public class DataViewSettingCollection : ICollection, IEnumerable
{
	[Token(Token = "0x200004B")]
	private sealed class DataViewSettingsEnumerator : IEnumerator
	{
		[Token(Token = "0x400016F")]
		[FieldOffset(Offset = "0x10")]
		private DataViewSettingCollection _dataViewSettings;

		[Token(Token = "0x4000170")]
		[FieldOffset(Offset = "0x18")]
		private IEnumerator _tableEnumerator;

		[Token(Token = "0x1700010A")]
		public object Current
		{
			[Token(Token = "0x6000597")]
			[Address(RVA = "0x425D470", Offset = "0x425D470", VA = "0x425D470", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000594")]
		[Address(RVA = "0x425D190", Offset = "0x425D190", VA = "0x425D190")]
		public DataViewSettingsEnumerator(DataViewManager dvm)
		{
		}

		[Token(Token = "0x6000595")]
		[Address(RVA = "0x425D340", Offset = "0x425D340", VA = "0x425D340", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000596")]
		[Address(RVA = "0x425D3D0", Offset = "0x425D3D0", VA = "0x425D3D0", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x10")]
	private readonly DataViewManager _dataViewManager;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x18")]
	private readonly Hashtable _list;

	[Token(Token = "0x17000106")]
	public virtual DataViewSetting this[DataTable table]
	{
		[Token(Token = "0x600058C")]
		[Address(RVA = "0x425CC90", Offset = "0x425CC90", VA = "0x425CC90", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600058D")]
		[Address(RVA = "0x425CDE0", Offset = "0x425CDE0", VA = "0x425CDE0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	[Browsable(false)]
	public virtual int Count
	{
		[Token(Token = "0x600058F")]
		[Address(RVA = "0x425D150", Offset = "0x425D150", VA = "0x425D150", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000108")]
	[Browsable(false)]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000591")]
		[Address(RVA = "0x425D2F0", Offset = "0x425D2F0", VA = "0x425D2F0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000109")]
	[Browsable(false)]
	public object SyncRoot
	{
		[Token(Token = "0x6000592")]
		[Address(RVA = "0x425D300", Offset = "0x425D300", VA = "0x425D300", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x425B7B0", Offset = "0x425B7B0", VA = "0x425B7B0")]
	internal DataViewSettingCollection(DataViewManager dataViewManager)
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x425CE80", Offset = "0x425CE80", VA = "0x425CE80", Slot = "4")]
	public void CopyTo(Array ar, int index)
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x425D100", Offset = "0x425D100", VA = "0x425D100", Slot = "8")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x425D310", Offset = "0x425D310", VA = "0x425D310")]
	internal void Remove(DataTable table)
	{
	}
}
