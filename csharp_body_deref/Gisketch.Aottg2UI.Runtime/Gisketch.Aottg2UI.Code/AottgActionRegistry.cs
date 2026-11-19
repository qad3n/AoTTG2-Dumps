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

[Token(Token = "0x2000073")]
public sealed class AottgActionRegistry
{
	[Token(Token = "0x400028E")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, Action<GisketchActionContext>> _actions;

	[Token(Token = "0x400028F")]
	[FieldOffset(Offset = "0x18")]
	private int _next;

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x5261250", Offset = "0x5260250", VA = "0x5261250")]
	public void Clear()
	{
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x52612A0", Offset = "0x52602A0", VA = "0x52612A0")]
	public void ClearOwner(string ownerId)
	{
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x52616E0", Offset = "0x52606E0", VA = "0x52616E0")]
	public void ClearOwnersWithPrefix(string ownerIdPrefix)
	{
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x5261B00", Offset = "0x5260B00", VA = "0x5261B00")]
	public string Register(string ownerId, Action<GisketchActionContext> action)
	{
		return null;
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x5261C20", Offset = "0x5260C20", VA = "0x5261C20")]
	public bool TryHandle(string actionId, GisketchActionContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000381")]
	[Address(RVA = "0x5261CD0", Offset = "0x5260CD0", VA = "0x5261CD0")]
	public AottgActionRegistry()
	{
	}
}
