// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgActionRegistry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgActionRegistry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000059")]
public sealed class AottgActionRegistry
{
	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, Action<GisketchActionContext>> _actions;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x18")]
	private int _next;

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x3A5B400", Offset = "0x3A5B400", VA = "0x3A5B400")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x3A5B450", Offset = "0x3A5B450", VA = "0x3A5B450")]
	public void ClearOwner(string ownerId)
	{
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x3A5B8E0", Offset = "0x3A5B8E0", VA = "0x3A5B8E0")]
	public string Register(string ownerId, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x3A5BA10", Offset = "0x3A5BA10", VA = "0x3A5BA10")]
	public bool TryHandle(string actionId, GisketchActionContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x3A5BAD0", Offset = "0x3A5BAD0", VA = "0x3A5BAD0")]
	public AottgActionRegistry()
	{
	}
}
