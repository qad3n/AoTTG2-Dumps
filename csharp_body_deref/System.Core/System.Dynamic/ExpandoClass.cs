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
		[Token(Token = "0x6000BF8")]
		[Address(RVA = "0x450BAF0", Offset = "0x450BAF0", VA = "0x450BAF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x450B080", Offset = "0x450B080", VA = "0x450B080")]
	internal ExpandoClass()
	{
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x450B160", Offset = "0x450B160", VA = "0x450B160")]
	internal ExpandoClass(string[] keys, int hashCode)
	{
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x450B190", Offset = "0x450B190", VA = "0x450B190")]
	internal ExpandoClass FindNewClass(string newKey)
	{
		return null;
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x450B640", Offset = "0x450B640", VA = "0x450B640")]
	private List<WeakReference> GetTransitionList(int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x450B770", Offset = "0x450B770", VA = "0x450B770")]
	internal int GetValueIndex(string name, bool caseInsensitive, ExpandoObject obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x450B9F0", Offset = "0x450B9F0", VA = "0x450B9F0")]
	internal int GetValueIndexCaseSensitive(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x450B7F0", Offset = "0x450B7F0", VA = "0x450B7F0")]
	private int GetValueIndexCaseInsensitive(string name, ExpandoObject obj)
	{
		return default(int);
	}
}
