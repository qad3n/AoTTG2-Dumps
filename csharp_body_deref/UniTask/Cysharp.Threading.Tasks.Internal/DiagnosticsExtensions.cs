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
	[Address(RVA = "0x46F4630", Offset = "0x46F4630", VA = "0x46F4630")]
	public static string CleanupAsyncStackTrace(this StackTrace stackTrace)
	{
		return null;
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x46F4FC0", Offset = "0x46F4FC0", VA = "0x46F4FC0")]
	private static bool IsAsync(MethodBase methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x46F5060", Offset = "0x46F5060", VA = "0x46F5060")]
	private static bool TryResolveStateMachineMethod(ref MethodBase method, out Type declaringType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x46F5610", Offset = "0x46F5610", VA = "0x46F5610")]
	private static string BeautifyType(Type t, bool shortName)
	{
		return null;
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x46F4E60", Offset = "0x46F4E60", VA = "0x46F4E60")]
	private static bool IgnoreLine(MethodBase methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x46F5C20", Offset = "0x46F5C20", VA = "0x46F5C20")]
	private static string AppendHyperLink(string path, string line)
	{
		return null;
	}
}
