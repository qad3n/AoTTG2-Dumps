using System;
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000057")]
public sealed class AottgActionRegistry
{
	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, Action<GisketchActionContext>> _actions;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x18")]
	private int _next;

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x39F0680", Offset = "0x39F0680", VA = "0x39F0680")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x39F06D0", Offset = "0x39F06D0", VA = "0x39F06D0")]
	public void ClearOwner(string ownerId)
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x39F0B60", Offset = "0x39F0B60", VA = "0x39F0B60")]
	public string Register(string ownerId, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x39F0C90", Offset = "0x39F0C90", VA = "0x39F0C90")]
	public bool TryHandle(string actionId, GisketchActionContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x39F0D50", Offset = "0x39F0D50", VA = "0x39F0D50")]
	public AottgActionRegistry()
	{
	}
}
