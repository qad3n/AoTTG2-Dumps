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
			[Address(RVA = "0x5EAC8F0", Offset = "0x5EAB8F0", VA = "0x5EAC8F0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60005C7")]
		[Address(RVA = "0x5EAC610", Offset = "0x5EAB610", VA = "0x5EAC610")]
		public DataViewSettingsEnumerator(DataViewManager dvm)
		{
		}

		[Token(Token = "0x60005C8")]
		[Address(RVA = "0x5EAC7C0", Offset = "0x5EAB7C0", VA = "0x5EAC7C0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60005C9")]
		[Address(RVA = "0x5EAC850", Offset = "0x5EAB850", VA = "0x5EAC850", Slot = "6")]
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
		[Address(RVA = "0x5EAC200", Offset = "0x5EAB200", VA = "0x5EAC200", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005C0")]
		[Address(RVA = "0x5EAC350", Offset = "0x5EAB350", VA = "0x5EAC350", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	[Browsable(false)]
	public virtual int Count
	{
		[Token(Token = "0x60005C2")]
		[Address(RVA = "0x5EAC5D0", Offset = "0x5EAB5D0", VA = "0x5EAC5D0", Slot = "11")]
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
		[Address(RVA = "0x5EAC770", Offset = "0x5EAB770", VA = "0x5EAC770", Slot = "7")]
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
		[Address(RVA = "0x5EAC780", Offset = "0x5EAB780", VA = "0x5EAC780", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x5EAACA0", Offset = "0x5EA9CA0", VA = "0x5EAACA0")]
	internal DataViewSettingCollection(DataViewManager dataViewManager)
	{
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x5EAC3F0", Offset = "0x5EAB3F0", VA = "0x5EAC3F0", Slot = "4")]
	public void CopyTo(Array ar, int index)
	{
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x5EAC580", Offset = "0x5EAB580", VA = "0x5EAC580", Slot = "8")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x5EAC790", Offset = "0x5EAB790", VA = "0x5EAC790")]
	internal void Remove(DataTable table)
	{
	}
}
