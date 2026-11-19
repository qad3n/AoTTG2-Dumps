// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.RuleCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x2000256")]
[EditorBrowsable(EditorBrowsableState.Never)]
[DebuggerStepThrough]
public class RuleCache<T> where T : class
{
	[Token(Token = "0x4000451")]
	[FieldOffset(Offset = "0x0")]
	private T[] _rules;

	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0x0")]
	private readonly object _cacheLock;

	[Token(Token = "0x6000BA4")]
	internal RuleCache()
	{
	}

	[Token(Token = "0x6000BA5")]
	internal T[] GetRules()
	{
		return null;
	}

	[Token(Token = "0x6000BA6")]
	internal void MoveRule(T rule, int i)
	{
	}

	[Token(Token = "0x6000BA7")]
	internal void AddRule(T newRule)
	{
	}

	[Token(Token = "0x6000BA8")]
	private static T[] AddOrInsert(T[] rules, T item)
	{
		return null;
	}
}
