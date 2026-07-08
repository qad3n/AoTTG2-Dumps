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
		[Token(Token = "0x6000BF8")]
		[Address(RVA = "0x41E69F0", Offset = "0x41E69F0", VA = "0x41E69F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x41E5F80", Offset = "0x41E5F80", VA = "0x41E5F80")]
	internal ExpandoClass()
	{
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x41E6060", Offset = "0x41E6060", VA = "0x41E6060")]
	internal ExpandoClass(string[] keys, int hashCode)
	{
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x41E6090", Offset = "0x41E6090", VA = "0x41E6090")]
	internal ExpandoClass FindNewClass(string newKey)
	{
		return null;
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x41E6540", Offset = "0x41E6540", VA = "0x41E6540")]
	private List<WeakReference> GetTransitionList(int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x41E6670", Offset = "0x41E6670", VA = "0x41E6670")]
	internal int GetValueIndex(string name, bool caseInsensitive, ExpandoObject obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x41E68F0", Offset = "0x41E68F0", VA = "0x41E68F0")]
	internal int GetValueIndexCaseSensitive(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x41E66F0", Offset = "0x41E66F0", VA = "0x41E66F0")]
	private int GetValueIndexCaseInsensitive(string name, ExpandoObject obj)
	{
		return default(int);
	}
}
