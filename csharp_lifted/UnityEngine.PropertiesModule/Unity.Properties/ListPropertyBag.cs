// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.ListPropertyBag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200003F")]
public class ListPropertyBag<TElement> : IndexedCollectionPropertyBag<List<TElement>, TElement>
{
	[Token(Token = "0x17000030")]
	protected override InstantiationKind InstantiationKind
	{
		[Token(Token = "0x60000EC")]
		get
		{
			return default(InstantiationKind);
		}
	}

	[Token(Token = "0x60000ED")]
	protected override List<TElement> InstantiateWithCount(int count)
	{
		return null;
	}

	[Token(Token = "0x60000EE")]
	protected override List<TElement> Instantiate()
	{
		return null;
	}

	[Token(Token = "0x60000EF")]
	public ListPropertyBag()
	{
	}
}
