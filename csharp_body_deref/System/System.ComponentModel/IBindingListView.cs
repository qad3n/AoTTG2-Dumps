// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.IBindingListView
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000164")]
public interface IBindingListView : IBindingList, IList, ICollection, IEnumerable
{
	[Token(Token = "0x170001EF")]
	string Filter
	{
		[Token(Token = "0x6000907")]
		get;
		[Token(Token = "0x6000908")]
		set;
	}

	[Token(Token = "0x170001F0")]
	ListSortDescriptionCollection SortDescriptions
	{
		[Token(Token = "0x6000909")]
		get;
	}

	[Token(Token = "0x170001F1")]
	bool SupportsAdvancedSorting
	{
		[Token(Token = "0x600090B")]
		get;
	}

	[Token(Token = "0x170001F2")]
	bool SupportsFiltering
	{
		[Token(Token = "0x600090C")]
		get;
	}

	[Token(Token = "0x6000906")]
	void ApplySort(ListSortDescriptionCollection sorts);

	[Token(Token = "0x600090A")]
	void RemoveFilter();
}
