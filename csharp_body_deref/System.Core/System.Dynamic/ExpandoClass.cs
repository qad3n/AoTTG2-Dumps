// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.ExpandoClass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000268")]
internal class ExpandoClass
{
	[Token(Token = "0x4000460")]
	[FieldOffset(Offset = "0x10")]
	private readonly string[] _keys;

	[Token(Token = "0x4000461")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _hashCode;

	[Token(Token = "0x4000462")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, List<WeakReference>> _transitions;

	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly ExpandoClass Empty;

	[Token(Token = "0x1700026A")]
	internal string[] Keys
	{
		[Token(Token = "0x6000BF7")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x246D020", Offset = "0x246B620", VA = "0x18246D020")]
	internal ExpandoClass()
	{
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x246CFD0", Offset = "0x246B5D0", VA = "0x18246CFD0")]
	internal ExpandoClass(string[] keys, int hashCode)
	{
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x246C6D0", Offset = "0x246ACD0", VA = "0x18246C6D0")]
	internal ExpandoClass FindNewClass(string newKey)
	{
		return null;
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x246CBC0", Offset = "0x246B1C0", VA = "0x18246CBC0")]
	private List<WeakReference> GetTransitionList(int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x246CF00", Offset = "0x246B500", VA = "0x18246CF00")]
	internal int GetValueIndex(string name, bool caseInsensitive, ExpandoObject obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x246CE60", Offset = "0x246B460", VA = "0x18246CE60")]
	internal int GetValueIndexCaseSensitive(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x246CCF0", Offset = "0x246B2F0", VA = "0x18246CCF0")]
	private int GetValueIndexCaseInsensitive(string name, ExpandoObject obj)
	{
		return default(int);
	}
}
