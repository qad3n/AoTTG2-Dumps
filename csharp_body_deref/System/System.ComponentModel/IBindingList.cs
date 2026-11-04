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

[Token(Token = "0x20001A2")]
public interface IBindingList : IList, ICollection, IEnumerable
{
	[Token(Token = "0x17000215")]
	bool AllowNew
	{
		[Token(Token = "0x6000AB5")]
		get;
	}

	[Token(Token = "0x17000216")]
	bool AllowEdit
	{
		[Token(Token = "0x6000AB7")]
		get;
	}

	[Token(Token = "0x17000217")]
	bool AllowRemove
	{
		[Token(Token = "0x6000AB8")]
		get;
	}

	[Token(Token = "0x17000218")]
	bool SupportsChangeNotification
	{
		[Token(Token = "0x6000AB9")]
		get;
	}

	[Token(Token = "0x17000219")]
	bool SupportsSearching
	{
		[Token(Token = "0x6000ABA")]
		get;
	}

	[Token(Token = "0x1700021A")]
	bool SupportsSorting
	{
		[Token(Token = "0x6000ABB")]
		get;
	}

	[Token(Token = "0x1700021B")]
	bool IsSorted
	{
		[Token(Token = "0x6000ABC")]
		get;
	}

	[Token(Token = "0x1700021C")]
	PropertyDescriptor SortProperty
	{
		[Token(Token = "0x6000ABD")]
		get;
	}

	[Token(Token = "0x1700021D")]
	ListSortDirection SortDirection
	{
		[Token(Token = "0x6000ABE")]
		get;
	}

	[Token(Token = "0x14000007")]
	event ListChangedEventHandler ListChanged;

	[Token(Token = "0x6000AB6")]
	object AddNew();

	[Token(Token = "0x6000AC1")]
	void AddIndex(PropertyDescriptor property);

	[Token(Token = "0x6000AC2")]
	void ApplySort(PropertyDescriptor property, ListSortDirection direction);

	[Token(Token = "0x6000AC3")]
	int Find(PropertyDescriptor property, object key);

	[Token(Token = "0x6000AC4")]
	void RemoveIndex(PropertyDescriptor property);

	[Token(Token = "0x6000AC5")]
	void RemoveSort();
}
