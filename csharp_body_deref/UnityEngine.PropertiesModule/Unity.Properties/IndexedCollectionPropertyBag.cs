// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IndexedCollectionPropertyBag
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200002D")]
public class IndexedCollectionPropertyBag<TList, TElement> : PropertyBag<TList>, IListPropertyBag<TList, TElement>, ICollectionPropertyBag<TList, TElement>, IPropertyBag<TList>, IPropertyBag, ICollectionPropertyBagAccept<TList>, IListPropertyBagAccept<TList>, IListPropertyAccept<TList>, IIndexedProperties<TList>, IConstructorWithCount<TList>, IConstructor, IIndexedCollectionPropertyBagEnumerator<TList> where TList : IList<TElement>
{
	[Token(Token = "0x200002E")]
	private class ListElementProperty : Property<TList, TElement>, IListElementProperty
	{
		[Token(Token = "0x400004E")]
		[FieldOffset(Offset = "0x0")]
		internal int m_Index;

		[Token(Token = "0x400004F")]
		[FieldOffset(Offset = "0x0")]
		internal bool m_IsReadOnly;

		[Token(Token = "0x17000025")]
		public int Index
		{
			[Token(Token = "0x60000B5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000026")]
		public override string Name
		{
			[Token(Token = "0x60000B6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000027")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60000B7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60000B8")]
		public override TElement GetValue(ref TList container)
		{
			return (TElement)null;
		}

		[Token(Token = "0x60000B9")]
		public override void SetValue(ref TList container, TElement value)
		{
		}

		[Token(Token = "0x60000BA")]
		public ListElementProperty()
		{
		}
	}

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x0")]
	private readonly ListElementProperty m_Property;

	[Token(Token = "0x60000A8")]
	public override PropertyCollection<TList> GetProperties()
	{
		return default(PropertyCollection<TList>);
	}

	[Token(Token = "0x60000A9")]
	public override PropertyCollection<TList> GetProperties(ref TList container)
	{
		return default(PropertyCollection<TList>);
	}

	[Token(Token = "0x60000AA")]
	public bool TryGetProperty(ref TList container, int index, out IProperty<TList> property)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AB")]
	private void Unity_002EProperties_002EICollectionPropertyBagAccept_003CTList_003E_002EAccept(ICollectionPropertyBagVisitor visitor, ref TList container)
	{
	}

	[Token(Token = "0x60000AC")]
	private void Unity_002EProperties_002EIListPropertyBagAccept_003CTList_003E_002EAccept(IListPropertyBagVisitor visitor, ref TList list)
	{
	}

	[Token(Token = "0x60000AD")]
	private void Unity_002EProperties_002EIListPropertyAccept_003CTList_003E_002EAccept<TContainer>(IListPropertyVisitor visitor, Property<TContainer, TList> property, ref TContainer container, ref TList list)
	{
	}

	[Token(Token = "0x60000AE")]
	private TList Unity_002EProperties_002EIConstructorWithCount_003CTList_003E_002EInstantiateWithCount(int count)
	{
		return (TList)null;
	}

	[Token(Token = "0x60000AF")]
	protected virtual TList InstantiateWithCount(int count)
	{
		return (TList)null;
	}

	[Token(Token = "0x60000B0")]
	private int Unity_002EProperties_002EIIndexedCollectionPropertyBagEnumerator_003CTList_003E_002EGetCount(ref TList container)
	{
		return default(int);
	}

	[Token(Token = "0x60000B1")]
	private IProperty<TList> Unity_002EProperties_002EIIndexedCollectionPropertyBagEnumerator_003CTList_003E_002EGetSharedProperty()
	{
		return null;
	}

	[Token(Token = "0x60000B2")]
	private IndexedCollectionSharedPropertyState Unity_002EProperties_002EIIndexedCollectionPropertyBagEnumerator_003CTList_003E_002EGetSharedPropertyState()
	{
		return default(IndexedCollectionSharedPropertyState);
	}

	[Token(Token = "0x60000B3")]
	private void Unity_002EProperties_002EIIndexedCollectionPropertyBagEnumerator_003CTList_003E_002ESetSharedPropertyState(IndexedCollectionSharedPropertyState state)
	{
	}

	[Token(Token = "0x60000B4")]
	public IndexedCollectionPropertyBag()
	{
	}
}
