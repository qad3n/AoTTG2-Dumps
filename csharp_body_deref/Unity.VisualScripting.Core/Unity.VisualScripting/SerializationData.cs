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
		[Address(RVA = "0x4A37430", Offset = "0x4A37430", VA = "0x4A37430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B1")]
	public UnityEngine.Object[] objectReferences
	{
		[Token(Token = "0x6000F91")]
		[Address(RVA = "0x4A37440", Offset = "0x4A37440", VA = "0x4A37440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x4A37450", Offset = "0x4A37450", VA = "0x4A37450")]
	public SerializationData(string json, IEnumerable<UnityEngine.Object> objectReferences)
	{
	}

	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x4A34BA0", Offset = "0x4A34BA0", VA = "0x4A34BA0")]
	public SerializationData(string json, params UnityEngine.Object[] objectReferences)
	{
	}

	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x4A351C0", Offset = "0x4A351C0", VA = "0x4A351C0")]
	public string ToString(string title)
	{
		return null;
	}

	[Token(Token = "0x6000F95")]
	[Address(RVA = "0x4A375F0", Offset = "0x4A375F0", VA = "0x4A375F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x4A37600", Offset = "0x4A37600", VA = "0x4A37600")]
	public void ShowString([Optional] string title)
	{
	}
}
