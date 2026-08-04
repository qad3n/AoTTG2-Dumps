// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_ObjectPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace TMPro;

[Token(Token = "0x2000071")]
internal class TMP_ObjectPool<T> where T : new()
{
	[Token(Token = "0x4000301")]
	[FieldOffset(Offset = "0x0")]
	private readonly Stack<T> m_Stack;

	[Token(Token = "0x4000302")]
	[FieldOffset(Offset = "0x0")]
	private readonly UnityAction<T> m_ActionOnGet;

	[Token(Token = "0x4000303")]
	[FieldOffset(Offset = "0x0")]
	private readonly UnityAction<T> m_ActionOnRelease;

	[Token(Token = "0x170000BA")]
	public int countAll
	{
		[Token(Token = "0x60003B9")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60003BA")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000BB")]
	public int countActive
	{
		[Token(Token = "0x60003BB")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000BC")]
	public int countInactive
	{
		[Token(Token = "0x60003BC")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003BD")]
	public TMP_ObjectPool(UnityAction<T> actionOnGet, UnityAction<T> actionOnRelease)
	{
	}

	[Token(Token = "0x60003BE")]
	public T Get()
	{
		return (T)null;
	}

	[Token(Token = "0x60003BF")]
	public void Release(T element)
	{
	}
}
