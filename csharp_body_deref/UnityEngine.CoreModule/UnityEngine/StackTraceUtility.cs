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

[Token(Token = "0x200017E")]
public static class StackTraceUtility
{
	[Token(Token = "0x400059F")]
	[FieldOffset(Offset = "0x0")]
	private static string projectFolder;

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x4DFE860", Offset = "0x4DFE860", VA = "0x4DFE860")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void SetProjectFolder(string folder)
	{
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x4DFE960", Offset = "0x4DFE960", VA = "0x4DFE960")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static string ExtractStackTrace()
	{
		return null;
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x4DFF230", Offset = "0x4DFF230", VA = "0x4DFF230")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ExtractStringFromExceptionInternal(object exceptiono, out string message, out string stackTrace)
	{
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x4DFEA80", Offset = "0x4DFEA80", VA = "0x4DFEA80")]
	internal static string ExtractFormattedStackTrace(StackTrace stackTrace)
	{
		return null;
	}
}
