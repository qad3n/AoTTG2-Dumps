// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.RuntimeOps
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Diagnostics;
using System.Dynamic;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x200024B")]
[EditorBrowsable(EditorBrowsableState.Never)]
[DebuggerStepThrough]
public static class RuntimeOps
{
	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x247DFB0", Offset = "0x247C5B0", VA = "0x18247DFB0")]
	[Obsolete("do not use this method", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public static bool ExpandoTryGetValue(ExpandoObject expando, object indexClass, int index, string name, bool ignoreCase, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x247DFE0", Offset = "0x247C5E0", VA = "0x18247DFE0")]
	[Obsolete("do not use this method", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public static object ExpandoTrySetValue(ExpandoObject expando, object indexClass, int index, object value, string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x247DF10", Offset = "0x247C510", VA = "0x18247DF10")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static bool ExpandoTryDeleteValue(ExpandoObject expando, object indexClass, int index, string name, bool ignoreCase)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x247DEC0", Offset = "0x247C4C0", VA = "0x18247DEC0")]
	[Obsolete("do not use this method", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public static bool ExpandoCheckVersion(ExpandoObject expando, object version)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x247DEF0", Offset = "0x247C4F0", VA = "0x18247DEF0")]
	[Obsolete("do not use this method", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public static void ExpandoPromoteClass(ExpandoObject expando, object oldClass, object newClass)
	{
	}
}
