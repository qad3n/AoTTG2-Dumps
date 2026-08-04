// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.SerializedPropertyProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
