// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.DictionaryAsset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Token(Token = "0x170001A8")]
	public object this[string key]
	{
		[Token(Token = "0x6000F5E")]
		[Address(RVA = "0x68421A0", Offset = "0x68411A0", VA = "0x68421A0", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F5F")]
		[Address(RVA = "0x68421F0", Offset = "0x68411F0", VA = "0x68421F0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170001A9")]
	[Serialize]
	public Dictionary<string, object> dictionary
	{
		[Token(Token = "0x6000F60")]
		[Address(RVA = "0x6842250", Offset = "0x6841250", VA = "0x6842250")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F61")]
		[Address(RVA = "0x6842260", Offset = "0x6841260", VA = "0x6842260")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001AA")]
	public int Count
	{
		[Token(Token = "0x6000F62")]
		[Address(RVA = "0x6842270", Offset = "0x6841270", VA = "0x6842270", Slot = "20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001AB")]
	public ICollection<string> Keys
	{
		[Token(Token = "0x6000F63")]
		[Address(RVA = "0x68422B0", Offset = "0x68412B0", VA = "0x68422B0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AC")]
	public ICollection<object> Values
	{
		[Token(Token = "0x6000F64")]
		[Address(RVA = "0x68422F0", Offset = "0x68412F0", VA = "0x68422F0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AD")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000F65")]
		[Address(RVA = "0x6842330", Offset = "0x6841330", VA = "0x6842330", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x68423D0", Offset = "0x68413D0", VA = "0x68423D0", Slot = "9")]
	protected override void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x6842460", Offset = "0x6841460", VA = "0x6842460", Slot = "23")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x68424A0", Offset = "0x68414A0", VA = "0x68424A0", Slot = "16")]
	public bool ContainsKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x68424F0", Offset = "0x68414F0", VA = "0x68424F0", Slot = "17")]
	public void Add(string key, object value)
	{
	}

	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x6842550", Offset = "0x6841550", VA = "0x6842550")]
	public void Merge(DictionaryAsset other, bool overwriteExisting = true)
	{
	}

	[Token(Token = "0x6000F6B")]
	[Address(RVA = "0x68429D0", Offset = "0x68419D0", VA = "0x68429D0", Slot = "18")]
	public bool Remove(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x6842A20", Offset = "0x6841A20", VA = "0x6842A20", Slot = "19")]
	public bool TryGetValue(string key, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F6D")]
	[Address(RVA = "0x6842A80", Offset = "0x6841A80", VA = "0x6842A80", Slot = "27")]
	public IEnumerator<KeyValuePair<string, object>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x6842B10", Offset = "0x6841B10", VA = "0x6842B10", Slot = "28")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x6842BA0", Offset = "0x6841BA0", VA = "0x6842BA0", Slot = "22")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EAdd(KeyValuePair<string, object> item)
	{
	}

	[Token(Token = "0x6000F70")]
	[Address(RVA = "0x6842C60", Offset = "0x6841C60", VA = "0x6842C60", Slot = "24")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EContains(KeyValuePair<string, object> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x6842D20", Offset = "0x6841D20", VA = "0x6842D20", Slot = "25")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ECopyTo(KeyValuePair<string, object>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000F72")]
	[Address(RVA = "0x6842DE0", Offset = "0x6841DE0", VA = "0x6842DE0", Slot = "26")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ERemove(KeyValuePair<string, object> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x6842EA0", Offset = "0x6841EA0", VA = "0x6842EA0", Slot = "11")]
	[ContextMenu("Show Data...")]
	protected override void ShowData()
	{
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x6842F60", Offset = "0x6841F60", VA = "0x6842F60")]
	public DictionaryAsset()
	{
	}
}
