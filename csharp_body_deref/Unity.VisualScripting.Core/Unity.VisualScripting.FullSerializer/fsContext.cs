// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001FD")]
public sealed class fsContext
{
	[Token(Token = "0x4000986")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Type, object> _contextObjects;

	[Token(Token = "0x600120A")]
	[Address(RVA = "0x4D7AEA0", Offset = "0x4D7AEA0", VA = "0x4D7AEA0")]
	public void Reset()
	{
	}

	[Token(Token = "0x600120B")]
	public void Set<T>(T obj)
	{
	}

	[Token(Token = "0x600120C")]
	public bool Has<T>()
	{
		return default(bool);
	}

	[Token(Token = "0x600120D")]
	public T Get<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x600120E")]
	[Address(RVA = "0x4D7AEE0", Offset = "0x4D7AEE0", VA = "0x4D7AEE0")]
	public fsContext()
	{
	}
}
