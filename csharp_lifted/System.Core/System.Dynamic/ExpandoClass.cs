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

[Token(Token = "0x2000269")]
internal class ExpandoClass
{
	[Token(Token = "0x4000469")]
	[FieldOffset(Offset = "0x10")]
	private readonly string[] _keys;

	[Token(Token = "0x400046A")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _hashCode;

	[Token(Token = "0x400046B")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, List<WeakReference>> _transitions;

	[Token(Token = "0x400046C")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly ExpandoClass Empty;

	[Token(Token = "0x1700026C")]
	internal string[] Keys
	{
		[Token(Token = "0x6000C02")]
		[Address(RVA = "0x5E20A00", Offset = "0x5E1FA00", VA = "0x5E20A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x5E200D0", Offset = "0x5E1F0D0", VA = "0x5E200D0")]
	internal ExpandoClass()
	{
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x5E201B0", Offset = "0x5E1F1B0", VA = "0x5E201B0")]
	internal ExpandoClass(string[] keys, int hashCode)
	{
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x5E201E0", Offset = "0x5E1F1E0", VA = "0x5E201E0")]
	internal ExpandoClass FindNewClass(string newKey)
	{
		return null;
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x5E205E0", Offset = "0x5E1F5E0", VA = "0x5E205E0")]
	private List<WeakReference> GetTransitionList(int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x5E20710", Offset = "0x5E1F710", VA = "0x5E20710")]
	internal int GetValueIndex(string name, bool caseInsensitive, ExpandoObject obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x5E20900", Offset = "0x5E1F900", VA = "0x5E20900")]
	internal int GetValueIndexCaseSensitive(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x5E20790", Offset = "0x5E1F790", VA = "0x5E20790")]
	private int GetValueIndexCaseInsensitive(string name, ExpandoObject obj)
	{
		return default(int);
	}
}
