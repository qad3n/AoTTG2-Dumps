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

[Token(Token = "0x2000057")]
public class DataViewSettingCollection : ICollection, IEnumerable
{
	[Token(Token = "0x2000058")]
	private sealed class DataViewSettingsEnumerator : IEnumerator
	{
		[Token(Token = "0x40001B7")]
		[FieldOffset(Offset = "0x10")]
		private DataViewSettingCollection _dataViewSettings;

		[Token(Token = "0x40001B8")]
		[FieldOffset(Offset = "0x18")]
		private IEnumerator _tableEnumerator;

		[Token(Token = "0x1700010F")]
		public object Current
		{
			[Token(Token = "0x60005CA")]
			[Address(RVA = "0x250C720", Offset = "0x250AD20", VA = "0x18250C720", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60005C7")]
		[Address(RVA = "0x250C650", Offset = "0x250AC50", VA = "0x18250C650")]
		public DataViewSettingsEnumerator(DataViewManager dvm)
		{
		}

		[Token(Token = "0x60005C8")]
		[Address(RVA = "0x250C5B0", Offset = "0x250ABB0", VA = "0x18250C5B0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60005C9")]
		[Address(RVA = "0x250C600", Offset = "0x250AC00", VA = "0x18250C600", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x10")]
	private readonly DataViewManager _dataViewManager;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x18")]
	private readonly Hashtable _list;

	[Token(Token = "0x1700010B")]
	public virtual DataViewSetting this[DataTable table]
	{
		[Token(Token = "0x60005BF")]
		[Address(RVA = "0x250C310", Offset = "0x250A910", VA = "0x18250C310", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005C0")]
		[Address(RVA = "0x250C470", Offset = "0x250AA70", VA = "0x18250C470", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	[Browsable(false)]
	public virtual int Count
	{
		[Token(Token = "0x60005C2")]
		[Address(RVA = "0x250C2D0", Offset = "0x250A8D0", VA = "0x18250C2D0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010D")]
	[Browsable(false)]
	public bool IsSynchronized
	{
		[Token(Token = "0x60005C4")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010E")]
	[Browsable(false)]
	public object SyncRoot
	{
		[Token(Token = "0x60005C5")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x250C210", Offset = "0x250A810", VA = "0x18250C210")]
	internal DataViewSettingCollection(DataViewManager dataViewManager)
	{
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x250BE90", Offset = "0x250A490", VA = "0x18250BE90", Slot = "4")]
	public void CopyTo(Array ar, int index)
	{
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x250C0E0", Offset = "0x250A6E0", VA = "0x18250C0E0", Slot = "8")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x250C1E0", Offset = "0x250A7E0", VA = "0x18250C1E0")]
	internal void Remove(DataTable table)
	{
	}
}
