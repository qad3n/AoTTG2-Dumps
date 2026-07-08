using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000298")]
public interface IBindingListView : IBindingList, IList, ICollection, IEnumerable
{
	[Token(Token = "0x170003AF")]
	string Filter
	{
		[Token(Token = "0x600107F")]
		get;
		[Token(Token = "0x6001080")]
		set;
	}

	[Token(Token = "0x170003B0")]
	ListSortDescriptionCollection SortDescriptions
	{
		[Token(Token = "0x6001081")]
		get;
	}

	[Token(Token = "0x170003B1")]
	bool SupportsAdvancedSorting
	{
		[Token(Token = "0x6001083")]
		get;
	}

	[Token(Token = "0x170003B2")]
	bool SupportsFiltering
	{
		[Token(Token = "0x6001084")]
		get;
	}

	[Token(Token = "0x600107E")]
	void ApplySort(ListSortDescriptionCollection sorts);

	[Token(Token = "0x6001082")]
	void RemoveFilter();
}
