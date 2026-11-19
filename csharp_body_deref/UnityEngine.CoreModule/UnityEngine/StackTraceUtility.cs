// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.StackTraceUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001B4")]
public static class StackTraceUtility
{
	[Token(Token = "0x4000637")]
	[FieldOffset(Offset = "0x0")]
	private static string projectFolder;

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x691D840", Offset = "0x691C840", VA = "0x691D840")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void SetProjectFolder(string folder)
	{
	}

	[Token(Token = "0x6000E41")]
	[Address(RVA = "0x691D940", Offset = "0x691C940", VA = "0x691D940")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static string ExtractStackTrace()
	{
		return null;
	}

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x691E250", Offset = "0x691D250", VA = "0x691E250")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ExtractStringFromExceptionInternal(object exceptiono, out string message, out string stackTrace)
	{
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x691DA60", Offset = "0x691CA60", VA = "0x691DA60")]
	internal static string ExtractFormattedStackTrace(StackTrace stackFrames)
	{
		return null;
	}
}
