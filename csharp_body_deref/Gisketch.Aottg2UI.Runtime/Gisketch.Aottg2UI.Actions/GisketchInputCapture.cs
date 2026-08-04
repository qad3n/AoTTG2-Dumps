// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchInputCapture
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchInputCapture.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000BF")]
public static class GisketchInputCapture
{
	[Token(Token = "0x40003D7")]
	[FieldOffset(Offset = "0x0")]
	private static int _nextToken;

	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0x4")]
	private static int _activeToken;

	[Token(Token = "0x1700007E")]
	public static bool IsActive
	{
		[Token(Token = "0x6000585")]
		[Address(RVA = "0x3A978A0", Offset = "0x3A978A0", VA = "0x3A978A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x3A978E0", Offset = "0x3A978E0", VA = "0x3A978E0")]
	public static int Begin()
	{
		return default(int);
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x3A97920", Offset = "0x3A97920", VA = "0x3A97920")]
	public static void End(int token)
	{
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x3A97970", Offset = "0x3A97970", VA = "0x3A97970")]
	public static void ForceEnd()
	{
	}
}
