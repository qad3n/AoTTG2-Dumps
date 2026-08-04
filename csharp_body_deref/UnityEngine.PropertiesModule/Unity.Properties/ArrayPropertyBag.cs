// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.ArrayPropertyBag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000016")]
public sealed class ArrayPropertyBag<TElement> : IndexedCollectionPropertyBag<TElement[], TElement>
{
	[Token(Token = "0x17000013")]
	protected override InstantiationKind InstantiationKind
	{
		[Token(Token = "0x6000044")]
		get
		{
			return default(InstantiationKind);
		}
	}

	[Token(Token = "0x6000045")]
	protected override TElement[] InstantiateWithCount(int count)
	{
		return null;
	}

	[Token(Token = "0x6000046")]
	protected override TElement[] Instantiate()
	{
		return null;
	}

	[Token(Token = "0x6000047")]
	public ArrayPropertyBag()
	{
	}
}
