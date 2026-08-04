// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Text.RegularExpressions;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x200022A")]
internal static class DiagnosticsExtensions
{
	[Token(Token = "0x400064E")]
	[FieldOffset(Offset = "0x0")]
	private static bool displayFilenames;

	[Token(Token = "0x400064F")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Regex typeBeautifyRegex;

	[Token(Token = "0x4000650")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<Type, string> builtInTypeNames;

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x4A19730", Offset = "0x4A19730", VA = "0x4A19730")]
	public static string CleanupAsyncStackTrace(this StackTrace stackTrace)
	{
		return null;
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x4A1A0C0", Offset = "0x4A1A0C0", VA = "0x4A1A0C0")]
	private static bool IsAsync(MethodBase methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x4A1A160", Offset = "0x4A1A160", VA = "0x4A1A160")]
	private static bool TryResolveStateMachineMethod(ref MethodBase method, out Type declaringType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x4A1A710", Offset = "0x4A1A710", VA = "0x4A1A710")]
	private static string BeautifyType(Type t, bool shortName)
	{
		return null;
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x4A19F60", Offset = "0x4A19F60", VA = "0x4A19F60")]
	private static bool IgnoreLine(MethodBase methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x4A1AD20", Offset = "0x4A1AD20", VA = "0x4A1AD20")]
	private static string AppendHyperLink(string path, string line)
	{
		return null;
	}
}
