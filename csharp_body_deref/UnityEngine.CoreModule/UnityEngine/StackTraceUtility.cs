using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200017B")]
public static class StackTraceUtility
{
	[Token(Token = "0x400059F")]
	[FieldOffset(Offset = "0x0")]
	private static string projectFolder;

	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x4AD6F30", Offset = "0x4AD6F30", VA = "0x4AD6F30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void SetProjectFolder(string folder)
	{
	}

	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x4AD7030", Offset = "0x4AD7030", VA = "0x4AD7030")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static string ExtractStackTrace()
	{
		return null;
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x4AD7900", Offset = "0x4AD7900", VA = "0x4AD7900")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ExtractStringFromExceptionInternal(object exceptiono, out string message, out string stackTrace)
	{
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x4AD7150", Offset = "0x4AD7150", VA = "0x4AD7150")]
	internal static string ExtractFormattedStackTrace(StackTrace stackTrace)
	{
		return null;
	}
}
