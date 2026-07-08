using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000181")]
[IncludeInSettings(false)]
public sealed class DictionaryAsset : LudiqScriptableObject, IDictionary<string, object>, ICollection<KeyValuePair<string, object>>, IEnumerable<KeyValuePair<string, object>>, IEnumerable
{
	[Token(Token = "0x170001A5")]
	public object this[string key]
	{
		[Token(Token = "0x6000F54")]
		[Address(RVA = "0x4A32A10", Offset = "0x4A32A10", VA = "0x4A32A10", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F55")]
		[Address(RVA = "0x4A32A60", Offset = "0x4A32A60", VA = "0x4A32A60", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170001A6")]
	[Serialize]
	public Dictionary<string, object> dictionary
	{
		[Token(Token = "0x6000F56")]
		[Address(RVA = "0x4A32AC0", Offset = "0x4A32AC0", VA = "0x4A32AC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F57")]
		[Address(RVA = "0x4A32AD0", Offset = "0x4A32AD0", VA = "0x4A32AD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001A7")]
	public int Count
	{
		[Token(Token = "0x6000F58")]
		[Address(RVA = "0x4A32AE0", Offset = "0x4A32AE0", VA = "0x4A32AE0", Slot = "20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001A8")]
	public ICollection<string> Keys
	{
		[Token(Token = "0x6000F59")]
		[Address(RVA = "0x4A32B20", Offset = "0x4A32B20", VA = "0x4A32B20", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A9")]
	public ICollection<object> Values
	{
		[Token(Token = "0x6000F5A")]
		[Address(RVA = "0x4A32B60", Offset = "0x4A32B60", VA = "0x4A32B60", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AA")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000F5B")]
		[Address(RVA = "0x4A32BA0", Offset = "0x4A32BA0", VA = "0x4A32BA0", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x4A32C40", Offset = "0x4A32C40", VA = "0x4A32C40", Slot = "9")]
	protected override void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x4A32CD0", Offset = "0x4A32CD0", VA = "0x4A32CD0", Slot = "23")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x4A32D10", Offset = "0x4A32D10", VA = "0x4A32D10", Slot = "16")]
	public bool ContainsKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x4A32D60", Offset = "0x4A32D60", VA = "0x4A32D60", Slot = "17")]
	public void Add(string key, object value)
	{
	}

	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x4A32DC0", Offset = "0x4A32DC0", VA = "0x4A32DC0")]
	public void Merge(DictionaryAsset other, bool overwriteExisting = true)
	{
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x4A33290", Offset = "0x4A33290", VA = "0x4A33290", Slot = "18")]
	public bool Remove(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x4A332E0", Offset = "0x4A332E0", VA = "0x4A332E0", Slot = "19")]
	public bool TryGetValue(string key, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F63")]
	[Address(RVA = "0x4A33340", Offset = "0x4A33340", VA = "0x4A33340", Slot = "27")]
	public IEnumerator<KeyValuePair<string, object>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x4A333D0", Offset = "0x4A333D0", VA = "0x4A333D0", Slot = "28")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x4A33460", Offset = "0x4A33460", VA = "0x4A33460", Slot = "22")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EAdd(KeyValuePair<string, object> item)
	{
	}

	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x4A33520", Offset = "0x4A33520", VA = "0x4A33520", Slot = "24")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EContains(KeyValuePair<string, object> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x4A335E0", Offset = "0x4A335E0", VA = "0x4A335E0", Slot = "25")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ECopyTo(KeyValuePair<string, object>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x4A336A0", Offset = "0x4A336A0", VA = "0x4A336A0", Slot = "26")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ERemove(KeyValuePair<string, object> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x4A33760", Offset = "0x4A33760", VA = "0x4A33760", Slot = "11")]
	[ContextMenu("Show Data...")]
	protected override void ShowData()
	{
	}

	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x4A337C0", Offset = "0x4A337C0", VA = "0x4A337C0")]
	public DictionaryAsset()
	{
	}
}
