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

[Token(Token = "0x2000297")]
public interface IBindingList : IList, ICollection, IEnumerable
{
	[Token(Token = "0x170003A6")]
	bool AllowNew
	{
		[Token(Token = "0x600106D")]
		get;
	}

	[Token(Token = "0x170003A7")]
	bool AllowEdit
	{
		[Token(Token = "0x600106F")]
		get;
	}

	[Token(Token = "0x170003A8")]
	bool AllowRemove
	{
		[Token(Token = "0x6001070")]
		get;
	}

	[Token(Token = "0x170003A9")]
	bool SupportsChangeNotification
	{
		[Token(Token = "0x6001071")]
		get;
	}

	[Token(Token = "0x170003AA")]
	bool SupportsSearching
	{
		[Token(Token = "0x6001072")]
		get;
	}

	[Token(Token = "0x170003AB")]
	bool SupportsSorting
	{
		[Token(Token = "0x6001073")]
		get;
	}

	[Token(Token = "0x170003AC")]
	bool IsSorted
	{
		[Token(Token = "0x6001074")]
		get;
	}

	[Token(Token = "0x170003AD")]
	PropertyDescriptor SortProperty
	{
		[Token(Token = "0x6001075")]
		get;
	}

	[Token(Token = "0x170003AE")]
	ListSortDirection SortDirection
	{
		[Token(Token = "0x6001076")]
		get;
	}

	[Token(Token = "0x14000007")]
	event ListChangedEventHandler ListChanged;

	[Token(Token = "0x600106E")]
	object AddNew();

	[Token(Token = "0x6001079")]
	void AddIndex(PropertyDescriptor property);

	[Token(Token = "0x600107A")]
	void ApplySort(PropertyDescriptor property, ListSortDirection direction);

	[Token(Token = "0x600107B")]
	int Find(PropertyDescriptor property, object key);

	[Token(Token = "0x600107C")]
	void RemoveIndex(PropertyDescriptor property);

	[Token(Token = "0x600107D")]
	void RemoveSort();
}
