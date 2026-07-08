using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Serializable]
[Token(Token = "0x200016F")]
public struct LazyLoadReference<T> where T : Object
{
	[Token(Token = "0x4000592")]
	private const int kInstanceID_None = 0;

	[Token(Token = "0x4000593")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private int m_InstanceID;

	[Token(Token = "0x170001D0")]
	public bool isSet
	{
		[Token(Token = "0x6000A82")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D1")]
	public T asset
	{
		[Token(Token = "0x6000A83")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A84")]
		set
		{
		}
	}

	[Token(Token = "0x6000A85")]
	public static implicit operator LazyLoadReference<T>(T asset)
	{
		return default(LazyLoadReference<T>);
	}
}
