// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchInputCapture
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchInputCapture.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000E4")]
public static class GisketchInputCapture
{
	[Token(Token = "0x4000499")]
	[FieldOffset(Offset = "0x0")]
	private static int _nextToken;

	[Token(Token = "0x400049A")]
	[FieldOffset(Offset = "0x4")]
	private static int _activeToken;

	[Token(Token = "0x400049B")]
	[FieldOffset(Offset = "0x8")]
	private static int _blockedFrame;

	[Token(Token = "0x170000B2")]
	public static bool IsActive
	{
		[Token(Token = "0x60006F3")]
		[Address(RVA = "0x19031A0", Offset = "0x19017A0", VA = "0x1819031A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B3")]
	public static bool BlocksUiInput
	{
		[Token(Token = "0x60006F4")]
		[Address(RVA = "0x19030D0", Offset = "0x19016D0", VA = "0x1819030D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x1902F10", Offset = "0x1901510", VA = "0x181902F10")]
	public static void BlockThisFrame()
	{
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x1902E80", Offset = "0x1901480", VA = "0x181902E80")]
	public static int Begin()
	{
		return default(int);
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x1902F80", Offset = "0x1901580", VA = "0x181902F80")]
	public static void End(int token)
	{
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x1903020", Offset = "0x1901620", VA = "0x181903020")]
	public static void ForceEnd()
	{
	}
}
