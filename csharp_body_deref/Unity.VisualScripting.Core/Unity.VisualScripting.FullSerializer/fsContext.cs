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

[Token(Token = "0x2000204")]
public sealed class fsContext
{
	[Token(Token = "0x4000996")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Type, object> _contextObjects;

	[Token(Token = "0x6001242")]
	[Address(RVA = "0x2E5EF00", Offset = "0x2E5D500", VA = "0x182E5EF00")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001243")]
	public void Set<T>(T obj)
	{
	}

	[Token(Token = "0x6001244")]
	public bool Has<T>()
	{
		return default(bool);
	}

	[Token(Token = "0x6001245")]
	public T Get<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6001246")]
	[Address(RVA = "0x2E5EF50", Offset = "0x2E5D550", VA = "0x182E5EF50")]
	public fsContext()
	{
	}
}
