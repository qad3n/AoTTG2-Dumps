// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LazyLoadReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Serializable]
[Token(Token = "0x2000172")]
public struct LazyLoadReference<T> where T : Object
{
	[Token(Token = "0x4000592")]
	private const int kInstanceID_None = 0;

	[Token(Token = "0x4000593")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private int m_InstanceID;

	[Token(Token = "0x170001D1")]
	public bool isSet
	{
		[Token(Token = "0x6000A84")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D2")]
	public T asset
	{
		[Token(Token = "0x6000A85")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A86")]
		set
		{
		}
	}

	[Token(Token = "0x6000A87")]
	public static implicit operator LazyLoadReference<T>(T asset)
	{
		return default(LazyLoadReference<T>);
	}
}
