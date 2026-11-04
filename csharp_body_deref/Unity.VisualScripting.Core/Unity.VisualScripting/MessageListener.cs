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
	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x0")]
	private static Type[] _listenerTypes;

	[Token(Token = "0x170000FE")]
	[Obsolete("listenerTypes is deprecated", false)]
	public static Type[] listenerTypes
	{
		[Token(Token = "0x6000426")]
		[Address(RVA = "0x2DB8910", Offset = "0x2DB6F10", VA = "0x182DB8910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x2DB8610", Offset = "0x2DB6C10", VA = "0x182DB8610")]
	[Obsolete("Use the overload with a messageListenerType parameter instead", false)]
	public static void AddTo(GameObject gameObject)
	{
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x2DB88B0", Offset = "0x2DB6EB0", VA = "0x182DB88B0")]
	public static void AddTo(Type messageListenerType, GameObject gameObject)
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	protected MessageListener()
	{
	}
}
