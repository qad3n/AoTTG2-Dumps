// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.IBindingList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000163")]
public interface IBindingList : IList, ICollection, IEnumerable
{
	[Token(Token = "0x170001E6")]
	bool AllowNew
	{
		[Token(Token = "0x60008F5")]
		get;
	}

	[Token(Token = "0x170001E7")]
	bool AllowEdit
	{
		[Token(Token = "0x60008F7")]
		get;
	}

	[Token(Token = "0x170001E8")]
	bool AllowRemove
	{
		[Token(Token = "0x60008F8")]
		get;
	}

	[Token(Token = "0x170001E9")]
	bool SupportsChangeNotification
	{
		[Token(Token = "0x60008F9")]
		get;
	}

	[Token(Token = "0x170001EA")]
	bool SupportsSearching
	{
		[Token(Token = "0x60008FA")]
		get;
	}

	[Token(Token = "0x170001EB")]
	bool SupportsSorting
	{
		[Token(Token = "0x60008FB")]
		get;
	}

	[Token(Token = "0x170001EC")]
	bool IsSorted
	{
		[Token(Token = "0x60008FC")]
		get;
	}

	[Token(Token = "0x170001ED")]
	PropertyDescriptor SortProperty
	{
		[Token(Token = "0x60008FD")]
		get;
	}

	[Token(Token = "0x170001EE")]
	ListSortDirection SortDirection
	{
		[Token(Token = "0x60008FE")]
		get;
	}

	[Token(Token = "0x14000007")]
	event ListChangedEventHandler ListChanged;

	[Token(Token = "0x60008F6")]
	object AddNew();

	[Token(Token = "0x6000901")]
	void AddIndex(PropertyDescriptor property);

	[Token(Token = "0x6000902")]
	void ApplySort(PropertyDescriptor property, ListSortDirection direction);

	[Token(Token = "0x6000903")]
	int Find(PropertyDescriptor property, object key);

	[Token(Token = "0x6000904")]
	void RemoveIndex(PropertyDescriptor property);

	[Token(Token = "0x6000905")]
	void RemoveSort();
}
