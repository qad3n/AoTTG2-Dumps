// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.SerializationData
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B4")]
	public UnityEngine.Object[] objectReferences
	{
		[Token(Token = "0x6000F9B")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x2E3A5D0", Offset = "0x2E38BD0", VA = "0x182E3A5D0")]
	public SerializationData(string json, IEnumerable<UnityEngine.Object> objectReferences)
	{
	}

	[Token(Token = "0x6000F9D")]
	[Address(RVA = "0x2E3A5C0", Offset = "0x2E38BC0", VA = "0x182E3A5C0")]
	public SerializationData(string json, params UnityEngine.Object[] objectReferences)
	{
	}

	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x2E39DD0", Offset = "0x2E383D0", VA = "0x182E39DD0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x2E39EE0", Offset = "0x2E384E0", VA = "0x182E39EE0")]
	public string ToString(string title)
	{
		return null;
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x2E3A5B0", Offset = "0x2E38BB0", VA = "0x182E3A5B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x2E39E00", Offset = "0x2E38400", VA = "0x182E39E00")]
	public void ShowString([Optional] string title)
	{
	}
}
