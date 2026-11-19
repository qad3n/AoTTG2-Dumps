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
	[Token(Token = "0x40008B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[SerializeField]
	private string _json;

	[Token(Token = "0x40008B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[SerializeField]
	private UnityEngine.Object[] _objectReferences;

	[Token(Token = "0x170001B3")]
	public string json
	{
		[Token(Token = "0x6000F9A")]
		[Address(RVA = "0x6846670", Offset = "0x6845670", VA = "0x6846670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B4")]
	public UnityEngine.Object[] objectReferences
	{
		[Token(Token = "0x6000F9B")]
		[Address(RVA = "0x6846680", Offset = "0x6845680", VA = "0x6846680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x6846690", Offset = "0x6845690", VA = "0x6846690")]
	public SerializationData(string json, IEnumerable<UnityEngine.Object> objectReferences)
	{
	}

	[Token(Token = "0x6000F9D")]
	[Address(RVA = "0x68441D0", Offset = "0x68431D0", VA = "0x68441D0")]
	public SerializationData(string json, params UnityEngine.Object[] objectReferences)
	{
	}

	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x6846730", Offset = "0x6845730", VA = "0x6846730")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x68447C0", Offset = "0x68437C0", VA = "0x68447C0")]
	public string ToString(string title)
	{
		return null;
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x6846860", Offset = "0x6845860", VA = "0x6846860", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x6846870", Offset = "0x6845870", VA = "0x6846870")]
	public void ShowString([Optional] string title)
	{
	}
}
