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
		[Address(RVA = "0x4990910", Offset = "0x4990910", VA = "0x4990910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x4990B30", Offset = "0x4990B30", VA = "0x4990B30")]
	[Obsolete("Use the overload with a messageListenerType parameter instead", false)]
	public static void AddTo(GameObject gameObject)
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x4990C10", Offset = "0x4990C10", VA = "0x4990C10")]
	public static void AddTo(Type messageListenerType, GameObject gameObject)
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x4990C60", Offset = "0x4990C60", VA = "0x4990C60")]
	protected MessageListener()
	{
	}
}
