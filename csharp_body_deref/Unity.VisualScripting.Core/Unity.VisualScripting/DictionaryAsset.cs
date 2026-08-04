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
	[Token(Token = "0x170001A5")]
	public object this[string key]
	{
		[Token(Token = "0x6000F54")]
		[Address(RVA = "0x4D575E0", Offset = "0x4D575E0", VA = "0x4D575E0", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F55")]
		[Address(RVA = "0x4D57630", Offset = "0x4D57630", VA = "0x4D57630", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170001A6")]
	[Serialize]
	public Dictionary<string, object> dictionary
	{
		[Token(Token = "0x6000F56")]
		[Address(RVA = "0x4D57690", Offset = "0x4D57690", VA = "0x4D57690")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F57")]
		[Address(RVA = "0x4D576A0", Offset = "0x4D576A0", VA = "0x4D576A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001A7")]
	public int Count
	{
		[Token(Token = "0x6000F58")]
		[Address(RVA = "0x4D576B0", Offset = "0x4D576B0", VA = "0x4D576B0", Slot = "20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001A8")]
	public ICollection<string> Keys
	{
		[Token(Token = "0x6000F59")]
		[Address(RVA = "0x4D576F0", Offset = "0x4D576F0", VA = "0x4D576F0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A9")]
	public ICollection<object> Values
	{
		[Token(Token = "0x6000F5A")]
		[Address(RVA = "0x4D57730", Offset = "0x4D57730", VA = "0x4D57730", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AA")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000F5B")]
		[Address(RVA = "0x4D57770", Offset = "0x4D57770", VA = "0x4D57770", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x4D57810", Offset = "0x4D57810", VA = "0x4D57810", Slot = "9")]
	protected override void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x4D578A0", Offset = "0x4D578A0", VA = "0x4D578A0", Slot = "23")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x4D578E0", Offset = "0x4D578E0", VA = "0x4D578E0", Slot = "16")]
	public bool ContainsKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x4D57930", Offset = "0x4D57930", VA = "0x4D57930", Slot = "17")]
	public void Add(string key, object value)
	{
	}

	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x4D57990", Offset = "0x4D57990", VA = "0x4D57990")]
	public void Merge(DictionaryAsset other, bool overwriteExisting = true)
	{
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x4D57E60", Offset = "0x4D57E60", VA = "0x4D57E60", Slot = "18")]
	public bool Remove(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x4D57EB0", Offset = "0x4D57EB0", VA = "0x4D57EB0", Slot = "19")]
	public bool TryGetValue(string key, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F63")]
	[Address(RVA = "0x4D57F10", Offset = "0x4D57F10", VA = "0x4D57F10", Slot = "27")]
	public IEnumerator<KeyValuePair<string, object>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x4D57FA0", Offset = "0x4D57FA0", VA = "0x4D57FA0", Slot = "28")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x4D58030", Offset = "0x4D58030", VA = "0x4D58030", Slot = "22")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EAdd(KeyValuePair<string, object> item)
	{
	}

	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x4D580F0", Offset = "0x4D580F0", VA = "0x4D580F0", Slot = "24")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EContains(KeyValuePair<string, object> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x4D581B0", Offset = "0x4D581B0", VA = "0x4D581B0", Slot = "25")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ECopyTo(KeyValuePair<string, object>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x4D58270", Offset = "0x4D58270", VA = "0x4D58270", Slot = "26")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ERemove(KeyValuePair<string, object> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x4D58330", Offset = "0x4D58330", VA = "0x4D58330", Slot = "11")]
	[ContextMenu("Show Data...")]
	protected override void ShowData()
	{
	}

	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x4D58390", Offset = "0x4D58390", VA = "0x4D58390")]
	public DictionaryAsset()
	{
	}
}
