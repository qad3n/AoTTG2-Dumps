// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchInputCapture
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchInputCapture.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000EA")]
public static class GisketchInputCapture
{
	[Token(Token = "0x40004C0")]
	[FieldOffset(Offset = "0x0")]
	private static int _nextToken;

	[Token(Token = "0x40004C1")]
	[FieldOffset(Offset = "0x4")]
	private static int _activeToken;

	[Token(Token = "0x40004C2")]
	[FieldOffset(Offset = "0x8")]
	private static int _blockedFrame;

	[Token(Token = "0x170000B2")]
	public static bool IsActive
	{
		[Token(Token = "0x6000741")]
		[Address(RVA = "0x52A4160", Offset = "0x52A3160", VA = "0x52A4160")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B3")]
	public static bool BlocksUiInput
	{
		[Token(Token = "0x6000742")]
		[Address(RVA = "0x52981F0", Offset = "0x52971F0", VA = "0x52981F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x52982D0", Offset = "0x52972D0", VA = "0x52982D0")]
	public static void BlockThisFrame()
	{
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x52A41B0", Offset = "0x52A31B0", VA = "0x52A41B0")]
	public static int Begin()
	{
		return default(int);
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x52A4220", Offset = "0x52A3220", VA = "0x52A4220")]
	public static void End(int token)
	{
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x52A42C0", Offset = "0x52A32C0", VA = "0x52A42C0")]
	public static void ForceEnd()
	{
	}
}
