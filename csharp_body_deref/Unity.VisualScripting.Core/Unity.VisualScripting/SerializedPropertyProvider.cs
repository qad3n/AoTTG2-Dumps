using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200018E")]
public abstract class SerializedPropertyProvider<T> : ScriptableObject, ISerializedPropertyProvider
{
	[Token(Token = "0x40008BE")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	protected T item;

	[Token(Token = "0x170001B5")]
	private object Unity_002EVisualScripting_002EISerializedPropertyProvider_002Eitem
	{
		[Token(Token = "0x6000FA2")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FA3")]
		set
		{
		}
	}

	[Token(Token = "0x6000FA4")]
	protected SerializedPropertyProvider()
	{
	}
}
