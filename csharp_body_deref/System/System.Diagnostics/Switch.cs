// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.Switch
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x2000103")]
public abstract class Switch
{
	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x10")]
	private readonly string description;

	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x18")]
	private readonly string displayName;

	[Token(Token = "0x400044D")]
	[FieldOffset(Offset = "0x20")]
	private string switchValueString;

	[Token(Token = "0x400044E")]
	[FieldOffset(Offset = "0x28")]
	private string defaultValue;

	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0x0")]
	private static List<WeakReference> switches;

	[Token(Token = "0x4000450")]
	[FieldOffset(Offset = "0x8")]
	private static int s_LastCollectionCount;

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x2874270", Offset = "0x2872870", VA = "0x182874270")]
	protected Switch(string displayName, string description)
	{
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x28742E0", Offset = "0x28728E0", VA = "0x1828742E0")]
	protected Switch(string displayName, string description, string defaultSwitchValue)
	{
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x2874540", Offset = "0x2872B40", VA = "0x182874540")]
	private static void _pruneCachedSwitches()
	{
	}
}
