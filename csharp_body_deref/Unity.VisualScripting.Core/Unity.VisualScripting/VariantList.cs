using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200002D")]
public class VariantList<TBase, TImplementation> : IList<TBase>, ICollection<TBase>, IEnumerable<TBase>, IEnumerable where TImplementation : TBase
{
	[Token(Token = "0x1700004B")]
	public TBase this[int index]
	{
		[Token(Token = "0x600017D")]
		get
		{
			return (TBase)null;
		}
		[Token(Token = "0x600017E")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public IList<TImplementation> implementation
	{
		[Token(Token = "0x600017F")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000180")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public int Count
	{
		[Token(Token = "0x6000181")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004E")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000182")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600017C")]
	public VariantList(IList<TImplementation> implementation)
	{
	}

	[Token(Token = "0x6000183")]
	public void Add(TBase item)
	{
	}

	[Token(Token = "0x6000184")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000185")]
	public bool Contains(TBase item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000186")]
	public bool Remove(TBase item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000187")]
	public void CopyTo(TBase[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000188")]
	public int IndexOf(TBase item)
	{
		return default(int);
	}

	[Token(Token = "0x6000189")]
	public void Insert(int index, TBase item)
	{
	}

	[Token(Token = "0x600018A")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600018B")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600018C")]
	private IEnumerator<TBase> System_002ECollections_002EGeneric_002EIEnumerable_003CTBase_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600018D")]
	public NoAllocEnumerator<TBase> GetEnumerator()
	{
		return default(NoAllocEnumerator<TBase>);
	}
}
