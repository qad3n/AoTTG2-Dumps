// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.NoAllocEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000025")]
public struct NoAllocEnumerator<T> : IEnumerator<T>, IEnumerator, IDisposable
{
	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x0")]
	private readonly IList<T> list;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x0")]
	private int index;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x0")]
	private T current;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x0")]
	private bool exceeded;

	[Token(Token = "0x1700002E")]
	public T Current
	{
		[Token(Token = "0x6000106")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x1700002F")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6000107")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000103")]
	public NoAllocEnumerator(IList<T> list)
	{
	}

	[Token(Token = "0x6000104")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000105")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000108")]
	private void System_002ECollections_002EIEnumerator_002EReset()
	{
	}
}
