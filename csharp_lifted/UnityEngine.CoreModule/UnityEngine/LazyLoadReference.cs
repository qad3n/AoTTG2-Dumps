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
[Token(Token = "0x20001A7")]
public struct LazyLoadReference<T> where T : Object
{
	[Token(Token = "0x4000628")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private int m_InstanceID;

	[Token(Token = "0x17000244")]
	public bool isSet
	{
		[Token(Token = "0x6000DEB")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000245")]
	public T asset
	{
		[Token(Token = "0x6000DEC")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DED")]
		set
		{
		}
	}

	[Token(Token = "0x6000DEE")]
	public static implicit operator LazyLoadReference<T>(T asset)
	{
		return default(LazyLoadReference<T>);
	}
}
