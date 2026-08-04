// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.SerializationData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Serializable]
[Token(Token = "0x2000188")]
public struct SerializationData
{
	[Token(Token = "0x40008BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[SerializeField]
	private string _json;

	[Token(Token = "0x40008BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[SerializeField]
	private UnityEngine.Object[] _objectReferences;

	[Token(Token = "0x170001B0")]
	public string json
	{
		[Token(Token = "0x6000F90")]
		[Address(RVA = "0x4D5C000", Offset = "0x4D5C000", VA = "0x4D5C000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B1")]
	public UnityEngine.Object[] objectReferences
	{
		[Token(Token = "0x6000F91")]
		[Address(RVA = "0x4D5C010", Offset = "0x4D5C010", VA = "0x4D5C010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x4D5C020", Offset = "0x4D5C020", VA = "0x4D5C020")]
	public SerializationData(string json, IEnumerable<UnityEngine.Object> objectReferences)
	{
	}

	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x4D59770", Offset = "0x4D59770", VA = "0x4D59770")]
	public SerializationData(string json, params UnityEngine.Object[] objectReferences)
	{
	}

	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x4D59D90", Offset = "0x4D59D90", VA = "0x4D59D90")]
	public string ToString(string title)
	{
		return null;
	}

	[Token(Token = "0x6000F95")]
	[Address(RVA = "0x4D5C1C0", Offset = "0x4D5C1C0", VA = "0x4D5C1C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x4D5C1D0", Offset = "0x4D5C1D0", VA = "0x4D5C1D0")]
	public void ShowString([Optional] string title)
	{
	}
}
