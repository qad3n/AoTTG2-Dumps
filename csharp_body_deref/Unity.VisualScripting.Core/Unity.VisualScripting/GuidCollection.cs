using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000018")]
public class GuidCollection<T> : KeyedCollection<Guid, T>, IKeyedCollection<Guid, T>, ICollection<T>, IEnumerable<T>, IEnumerable where T : IIdentifiable
{
	[Token(Token = "0x600008A")]
	protected override Guid GetKeyForItem(T item)
	{
		return default(Guid);
	}

	[Token(Token = "0x600008B")]
	protected override void InsertItem(int index, T item)
	{
	}

	[Token(Token = "0x600008C")]
	protected override void SetItem(int index, T item)
	{
	}

	[Token(Token = "0x600008D")]
	public new bool TryGetValue(Guid key, out T value)
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	public GuidCollection()
	{
	}

	[Token(Token = "0x600008F")]
	private T Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EGuid_002CT_003E_002Eget_Item(Guid key)
	{
		return (T)null;
	}

	[Token(Token = "0x6000090")]
	private bool Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EGuid_002CT_003E_002EContains(Guid key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000091")]
	private bool Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EGuid_002CT_003E_002ERemove(Guid key)
	{
		return default(bool);
	}
}
