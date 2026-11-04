// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.VariantList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200002D")]
public class VariantList<TBase, TImplementation> : IList<TBase>, ICollection<TBase>, IEnumerable<TBase>, IEnumerable where TImplementation : TBase
{
	[Token(Token = "0x1700004C")]
	public TBase this[int index]
	{
		[Token(Token = "0x6000181")]
		get
		{
			return (TBase)null;
		}
		[Token(Token = "0x6000182")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public IList<TImplementation> implementation
	{
		[Token(Token = "0x6000183")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000184")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public int Count
	{
		[Token(Token = "0x6000185")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004F")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000186")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000180")]
	public VariantList(IList<TImplementation> implementation)
	{
	}

	[Token(Token = "0x6000187")]
	public void Add(TBase item)
	{
	}

	[Token(Token = "0x6000188")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000189")]
	public bool Contains(TBase item)
	{
		return default(bool);
	}

	[Token(Token = "0x600018A")]
	public bool Remove(TBase item)
	{
		return default(bool);
	}

	[Token(Token = "0x600018B")]
	public void CopyTo(TBase[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x600018C")]
	public int IndexOf(TBase item)
	{
		return default(int);
	}

	[Token(Token = "0x600018D")]
	public void Insert(int index, TBase item)
	{
	}

	[Token(Token = "0x600018E")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600018F")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000190")]
	private IEnumerator<TBase> System_002ECollections_002EGeneric_002EIEnumerable_003CTBase_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000191")]
	public NoAllocEnumerator<TBase> GetEnumerator()
	{
		return default(NoAllocEnumerator<TBase>);
	}
}
