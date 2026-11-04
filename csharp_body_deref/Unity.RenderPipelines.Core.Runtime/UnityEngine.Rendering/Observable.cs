// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Observable
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200005B")]
public struct Observable<T>
{
	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private Action<T> m_onValueChanged;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x0")]
	private T m_Value;

	[Token(Token = "0x17000043")]
	public T value
	{
		[Token(Token = "0x6000544")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000545")]
		set
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event Action<T> onValueChanged
	{
		[Token(Token = "0x6000542")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000543")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000546")]
	public Observable(T newValue)
	{
	}
}
