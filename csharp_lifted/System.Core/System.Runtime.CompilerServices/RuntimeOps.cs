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

[Token(Token = "0x200024C")]
[DebuggerStepThrough]
[EditorBrowsable(EditorBrowsableState.Never)]
public static class RuntimeOps
{
	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x5E1C3F0", Offset = "0x5E1B3F0", VA = "0x5E1C3F0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static bool ExpandoTryGetValue(ExpandoObject expando, object indexClass, int index, string name, bool ignoreCase, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x5E1C580", Offset = "0x5E1B580", VA = "0x5E1C580")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static object ExpandoTrySetValue(ExpandoObject expando, object indexClass, int index, object value, string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x5E1CA90", Offset = "0x5E1BA90", VA = "0x5E1CA90")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static bool ExpandoTryDeleteValue(ExpandoObject expando, object indexClass, int index, string name, bool ignoreCase)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x5E1CEE0", Offset = "0x5E1BEE0", VA = "0x5E1CEE0")]
	[Obsolete("do not use this method", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public static bool ExpandoCheckVersion(ExpandoObject expando, object version)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x5E1CF20", Offset = "0x5E1BF20", VA = "0x5E1CF20")]
	[Obsolete("do not use this method", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public static void ExpandoPromoteClass(ExpandoObject expando, object oldClass, object newClass)
	{
	}
}
