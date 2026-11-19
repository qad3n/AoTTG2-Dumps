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

[Token(Token = "0x20000C4")]
public abstract class Switch
{
	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x10")]
	private readonly string description;

	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x18")]
	private readonly string displayName;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x20")]
	private string switchValueString;

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x28")]
	private string defaultValue;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x0")]
	private static List<WeakReference> switches;

	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x8")]
	private static int s_LastCollectionCount;

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x61FF780", Offset = "0x61FE780", VA = "0x61FF780")]
	protected Switch(string displayName, string description)
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x62002C0", Offset = "0x61FF2C0", VA = "0x62002C0")]
	protected Switch(string displayName, string description, string defaultSwitchValue)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x6200520", Offset = "0x61FF520", VA = "0x6200520")]
	private static void _pruneCachedSwitches()
	{
	}
}
