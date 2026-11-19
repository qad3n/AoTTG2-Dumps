// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IndexedCollectionPropertyBagEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000033")]
internal struct IndexedCollectionPropertyBagEnumerator<TContainer> : IEnumerator<IProperty<TContainer>>, IEnumerator, IDisposable
{
	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x0")]
	private readonly IIndexedCollectionPropertyBagEnumerator<TContainer> m_Impl;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x0")]
	private readonly IndexedCollectionSharedPropertyState m_Previous;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x0")]
	private TContainer m_Container;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x0")]
	private int m_Position;

	[Token(Token = "0x17000023")]
	public IProperty<TContainer> Current
	{
		[Token(Token = "0x60000A7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000024")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x60000A8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000A6")]
	internal IndexedCollectionPropertyBagEnumerator(IIndexedCollectionPropertyBagEnumerator<TContainer> impl, TContainer container)
	{
	}

	[Token(Token = "0x60000A9")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60000AA")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000AB")]
	public void Dispose()
	{
	}
}
