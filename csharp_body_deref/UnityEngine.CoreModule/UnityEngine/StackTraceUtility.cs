// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.StackTraceUtility
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001B3")]
public static class StackTraceUtility
{
	[Token(Token = "0x4000632")]
	[FieldOffset(Offset = "0x0")]
	private static string projectFolder;

	[Token(Token = "0x6000E2E")]
	[Address(RVA = "0x2F27A80", Offset = "0x2F26080", VA = "0x182F27A80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void SetProjectFolder(string folder)
	{
	}

	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x2F27550", Offset = "0x2F25B50", VA = "0x182F27550")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static string ExtractStackTrace()
	{
		return null;
	}

	[Token(Token = "0x6000E30")]
	[Address(RVA = "0x2F27690", Offset = "0x2F25C90", VA = "0x182F27690")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ExtractStringFromExceptionInternal(object exceptiono, out string message, out string stackTrace)
	{
	}

	[Token(Token = "0x6000E31")]
	[Address(RVA = "0x2F26DC0", Offset = "0x2F253C0", VA = "0x182F26DC0")]
	internal static string ExtractFormattedStackTrace(StackTrace stackFrames)
	{
		return null;
	}
}
