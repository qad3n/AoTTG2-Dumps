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

[Token(Token = "0x20001A3")]
public interface IBindingListView : IBindingList, IList, ICollection, IEnumerable
{
	[Token(Token = "0x1700021E")]
	string Filter
	{
		[Token(Token = "0x6000AC7")]
		get;
		[Token(Token = "0x6000AC8")]
		set;
	}

	[Token(Token = "0x1700021F")]
	ListSortDescriptionCollection SortDescriptions
	{
		[Token(Token = "0x6000AC9")]
		get;
	}

	[Token(Token = "0x17000220")]
	bool SupportsAdvancedSorting
	{
		[Token(Token = "0x6000ACB")]
		get;
	}

	[Token(Token = "0x17000221")]
	bool SupportsFiltering
	{
		[Token(Token = "0x6000ACC")]
		get;
	}

	[Token(Token = "0x6000AC6")]
	void ApplySort(ListSortDescriptionCollection sorts);

	[Token(Token = "0x6000ACA")]
	void RemoveFilter();
}
