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

[Token(Token = "0x200022D")]
internal static class DiagnosticsExtensions
{
	[Token(Token = "0x4000661")]
	[FieldOffset(Offset = "0x0")]
	private static bool displayFilenames;

	[Token(Token = "0x4000662")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Regex typeBeautifyRegex;

	[Token(Token = "0x4000663")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<Type, string> builtInTypeNames;

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x6307070", Offset = "0x6306070", VA = "0x6307070")]
	public static string CleanupAsyncStackTrace(this StackTrace stackTrace)
	{
		return null;
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x63079C0", Offset = "0x63069C0", VA = "0x63079C0")]
	private static bool IsAsync(MethodBase methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x6307A60", Offset = "0x6306A60", VA = "0x6307A60")]
	private static bool TryResolveStateMachineMethod(ref MethodBase method, out Type declaringType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x6307F60", Offset = "0x6306F60", VA = "0x6307F60")]
	private static string BeautifyType(Type t, bool shortName)
	{
		return null;
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x6307860", Offset = "0x6306860", VA = "0x6307860")]
	private static bool IgnoreLine(MethodBase methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x6308570", Offset = "0x6307570", VA = "0x6308570")]
	private static string AppendHyperLink(string path, string line)
	{
		return null;
	}
}
