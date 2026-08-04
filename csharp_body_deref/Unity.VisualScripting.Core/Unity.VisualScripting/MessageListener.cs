// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.MessageListener
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000095")]
[DisableAnnotation]
[AddComponentMenu("")]
[IncludeInSettings(false)]
public abstract class MessageListener : MonoBehaviour
{
	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x0")]
	private static Type[] _listenerTypes;

	[Token(Token = "0x170000FB")]
	[Obsolete("listenerTypes is deprecated", false)]
	public static Type[] listenerTypes
	{
		[Token(Token = "0x600041C")]
		[Address(RVA = "0x4CB54E0", Offset = "0x4CB54E0", VA = "0x4CB54E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x4CB5700", Offset = "0x4CB5700", VA = "0x4CB5700")]
	[Obsolete("Use the overload with a messageListenerType parameter instead", false)]
	public static void AddTo(GameObject gameObject)
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x4CB57E0", Offset = "0x4CB57E0", VA = "0x4CB57E0")]
	public static void AddTo(Type messageListenerType, GameObject gameObject)
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x4CB5830", Offset = "0x4CB5830", VA = "0x4CB5830")]
	protected MessageListener()
	{
	}
}
