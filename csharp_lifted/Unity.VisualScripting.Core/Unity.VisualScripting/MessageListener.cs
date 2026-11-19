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
		[Address(RVA = "0x67A4000", Offset = "0x67A3000", VA = "0x67A4000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x67A4200", Offset = "0x67A3200", VA = "0x67A4200")]
	[Obsolete("Use the overload with a messageListenerType parameter instead", false)]
	public static void AddTo(GameObject gameObject)
	{
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x67A42E0", Offset = "0x67A32E0", VA = "0x67A42E0")]
	public static void AddTo(Type messageListenerType, GameObject gameObject)
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x67A4330", Offset = "0x67A3330", VA = "0x67A4330")]
	protected MessageListener()
	{
	}
}
