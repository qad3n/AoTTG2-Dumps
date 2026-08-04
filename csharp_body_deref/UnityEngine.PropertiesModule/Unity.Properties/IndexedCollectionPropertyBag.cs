// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IndexedCollectionPropertyBag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200001C")]
public class IndexedCollectionPropertyBag<TList, TElement> : PropertyBag<TList>, IPropertyBag<TList>, IPropertyBag, IConstructorWithCount<TList>, IConstructor where TList : IList<TElement>
{
	[Token(Token = "0x200001D")]
	private class ListElementProperty : Property<TList, TElement>
	{
		[Token(Token = "0x4000027")]
		[FieldOffset(Offset = "0x0")]
		internal int m_Index;

		[Token(Token = "0x17000016")]
		public int Index
		{
			[Token(Token = "0x6000056")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000017")]
		public override string Name
		{
			[Token(Token = "0x6000057")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000058")]
		public ListElementProperty()
		{
		}
	}

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x0")]
	private readonly ListElementProperty m_Property;

	[Token(Token = "0x6000053")]
	private TList Unity_002EProperties_002EIConstructorWithCount_003CTList_003E_002EInstantiateWithCount(int count)
	{
		return (TList)null;
	}

	[Token(Token = "0x6000054")]
	protected virtual TList InstantiateWithCount(int count)
	{
		return (TList)null;
	}

	[Token(Token = "0x6000055")]
	public IndexedCollectionPropertyBag()
	{
	}
}
