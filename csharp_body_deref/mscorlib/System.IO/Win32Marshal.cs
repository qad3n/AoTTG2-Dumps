// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Win32Marshal
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000682")]
internal static class Win32Marshal
{
	[Token(Token = "0x60031F4")]
	[Address(RVA = "0x1B02360", Offset = "0x1B00960", VA = "0x181B02360")]
	internal static Exception GetExceptionForLastWin32Error(string path = "")
	{
		return null;
	}

	[Token(Token = "0x60031F5")]
	[Address(RVA = "0x1B023C0", Offset = "0x1B009C0", VA = "0x181B023C0")]
	internal static Exception GetExceptionForWin32Error(int errorCode, string path = "")
	{
		return null;
	}

	[Token(Token = "0x60031F6")]
	[Address(RVA = "0x1B02890", Offset = "0x1B00E90", VA = "0x181B02890")]
	internal static int MakeHRFromErrorCode(int errorCode)
	{
		return default(int);
	}

	[Token(Token = "0x60031F7")]
	[Address(RVA = "0x1B028B0", Offset = "0x1B00EB0", VA = "0x181B028B0")]
	internal static int TryMakeWin32ErrorCodeFromHR(int hr)
	{
		return default(int);
	}

	[Token(Token = "0x60031F8")]
	[Address(RVA = "0x1B02880", Offset = "0x1B00E80", VA = "0x181B02880")]
	internal static string GetMessage(int errorCode)
	{
		return null;
	}
}
