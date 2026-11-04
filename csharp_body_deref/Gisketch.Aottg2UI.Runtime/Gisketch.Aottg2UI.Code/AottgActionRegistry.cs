// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgActionRegistry
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgActionRegistry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200006D")]
public sealed class AottgActionRegistry
{
	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, Action<GisketchActionContext>> _actions;

	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0x18")]
	private int _next;

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x18C1110", Offset = "0x18BF710", VA = "0x1818C1110")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x18C0A70", Offset = "0x18BF070", VA = "0x1818C0A70")]
	public void ClearOwner(string ownerId)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x18C0DD0", Offset = "0x18BF3D0", VA = "0x1818C0DD0")]
	public void ClearOwnersWithPrefix(string ownerIdPrefix)
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x18C1160", Offset = "0x18BF760", VA = "0x1818C1160")]
	public string Register(string ownerId, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x18C12A0", Offset = "0x18BF8A0", VA = "0x1818C12A0")]
	public bool TryHandle(string actionId, GisketchActionContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x18C1370", Offset = "0x18BF970", VA = "0x1818C1370")]
	public AottgActionRegistry()
	{
	}
}
