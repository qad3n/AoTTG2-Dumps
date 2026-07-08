using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000204")]
public sealed class fsContext
{
	[Token(Token = "0x4000998")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Type, object> _contextObjects;

	[Token(Token = "0x6001235")]
	[Address(RVA = "0x4A559E0", Offset = "0x4A559E0", VA = "0x4A559E0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001236")]
	public void Set<T>(T obj)
	{
	}

	[Token(Token = "0x6001237")]
	public bool Has<T>()
	{
		return default(bool);
	}

	[Token(Token = "0x6001238")]
	public T Get<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6001239")]
	[Address(RVA = "0x4A55A20", Offset = "0x4A55A20", VA = "0x4A55A20")]
	public fsContext()
	{
	}
}
