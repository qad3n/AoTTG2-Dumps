// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataViewSettingCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x459ABD0", Offset = "0x459ABD0", VA = "0x459ABD0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000594")]
		[Address(RVA = "0x459A8F0", Offset = "0x459A8F0", VA = "0x459A8F0")]
		public DataViewSettingsEnumerator(DataViewManager dvm)
		{
		}

		[Token(Token = "0x6000595")]
		[Address(RVA = "0x459AAA0", Offset = "0x459AAA0", VA = "0x459AAA0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000596")]
		[Address(RVA = "0x459AB30", Offset = "0x459AB30", VA = "0x459AB30", Slot = "6")]
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
		[Address(RVA = "0x459A3F0", Offset = "0x459A3F0", VA = "0x459A3F0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600058D")]
		[Address(RVA = "0x459A540", Offset = "0x459A540", VA = "0x459A540", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	[Browsable(false)]
	public virtual int Count
	{
		[Token(Token = "0x600058F")]
		[Address(RVA = "0x459A8B0", Offset = "0x459A8B0", VA = "0x459A8B0", Slot = "11")]
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
		[Address(RVA = "0x459AA50", Offset = "0x459AA50", VA = "0x459AA50", Slot = "7")]
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
		[Address(RVA = "0x459AA60", Offset = "0x459AA60", VA = "0x459AA60", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x4598F10", Offset = "0x4598F10", VA = "0x4598F10")]
	internal DataViewSettingCollection(DataViewManager dataViewManager)
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x459A5E0", Offset = "0x459A5E0", VA = "0x459A5E0", Slot = "4")]
	public void CopyTo(Array ar, int index)
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x459A860", Offset = "0x459A860", VA = "0x459A860", Slot = "8")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x459AA70", Offset = "0x459AA70", VA = "0x459AA70")]
	internal void Remove(DataTable table)
	{
	}
}
