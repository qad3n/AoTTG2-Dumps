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
		[Address(RVA = "0x2E2E120", Offset = "0x2E2C720", VA = "0x182E2E120", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F5F")]
		[Address(RVA = "0x2E2E220", Offset = "0x2E2C820", VA = "0x182E2E220", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170001A9")]
	[Serialize]
	public Dictionary<string, object> dictionary
	{
		[Token(Token = "0x6000F60")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F61")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001AA")]
	public int Count
	{
		[Token(Token = "0x6000F62")]
		[Address(RVA = "0x2E2E0D0", Offset = "0x2E2C6D0", VA = "0x182E2E0D0", Slot = "20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001AB")]
	public ICollection<string> Keys
	{
		[Token(Token = "0x6000F63")]
		[Address(RVA = "0x2E2E180", Offset = "0x2E2C780", VA = "0x182E2E180", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AC")]
	public ICollection<object> Values
	{
		[Token(Token = "0x6000F64")]
		[Address(RVA = "0x2E2E1D0", Offset = "0x2E2C7D0", VA = "0x182E2E1D0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AD")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000F65")]
		[Address(RVA = "0x2E2DF40", Offset = "0x2E2C540", VA = "0x182E2DF40", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x2E2DA70", Offset = "0x2E2C070", VA = "0x182E2DA70", Slot = "9")]
	protected override void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x2E2D670", Offset = "0x2E2BC70", VA = "0x182E2D670", Slot = "23")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x2E2D6C0", Offset = "0x2E2BCC0", VA = "0x182E2D6C0", Slot = "16")]
	public bool ContainsKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x2E2D600", Offset = "0x2E2BC00", VA = "0x182E2D600", Slot = "17")]
	public void Add(string key, object value)
	{
	}

	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x2E2D7B0", Offset = "0x2E2BDB0", VA = "0x182E2D7B0")]
	public void Merge(DictionaryAsset other, bool overwriteExisting = true)
	{
	}

	[Token(Token = "0x6000F6B")]
	[Address(RVA = "0x2E2DAF0", Offset = "0x2E2C0F0", VA = "0x182E2DAF0", Slot = "18")]
	public bool Remove(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x2E2DFE0", Offset = "0x2E2C5E0", VA = "0x182E2DFE0", Slot = "19")]
	public bool TryGetValue(string key, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F6D")]
	[Address(RVA = "0x2E2D720", Offset = "0x2E2BD20", VA = "0x182E2D720", Slot = "27")]
	public IEnumerator<KeyValuePair<string, object>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x2E2DF90", Offset = "0x2E2C590", VA = "0x182E2DF90", Slot = "28")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x2E2DC00", Offset = "0x2E2C200", VA = "0x182E2DC00", Slot = "22")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EAdd(KeyValuePair<string, object> item)
	{
	}

	[Token(Token = "0x6000F70")]
	[Address(RVA = "0x2E2DCD0", Offset = "0x2E2C2D0", VA = "0x182E2DCD0", Slot = "24")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EContains(KeyValuePair<string, object> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x2E2DDA0", Offset = "0x2E2C3A0", VA = "0x182E2DDA0", Slot = "25")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ECopyTo(KeyValuePair<string, object>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000F72")]
	[Address(RVA = "0x2E2DE70", Offset = "0x2E2C470", VA = "0x182E2DE70", Slot = "26")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ERemove(KeyValuePair<string, object> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x2E2DB50", Offset = "0x2E2C150", VA = "0x182E2DB50", Slot = "11")]
	[ContextMenu("Show Data...")]
	protected override void ShowData()
	{
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x2E2E050", Offset = "0x2E2C650", VA = "0x182E2E050")]
	public DictionaryAsset()
	{
	}
}
