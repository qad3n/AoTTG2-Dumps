using System.ComponentModel;
using System.Diagnostics;
using System.Dynamic;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x200024B")]
[DebuggerStepThrough]
[EditorBrowsable(EditorBrowsableState.Never)]
public static class RuntimeOps
{
	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x41E2100", Offset = "0x41E2100", VA = "0x41E2100")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static bool ExpandoTryGetValue(ExpandoObject expando, object indexClass, int index, string name, bool ignoreCase, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x41E22A0", Offset = "0x41E22A0", VA = "0x41E22A0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static object ExpandoTrySetValue(ExpandoObject expando, object indexClass, int index, object value, string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x41E27F0", Offset = "0x41E27F0", VA = "0x41E27F0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static bool ExpandoTryDeleteValue(ExpandoObject expando, object indexClass, int index, string name, bool ignoreCase)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x41E2D20", Offset = "0x41E2D20", VA = "0x41E2D20")]
	[Obsolete("do not use this method", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public static bool ExpandoCheckVersion(ExpandoObject expando, object version)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x41E2D60", Offset = "0x41E2D60", VA = "0x41E2D60")]
	[Obsolete("do not use this method", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public static void ExpandoPromoteClass(ExpandoObject expando, object oldClass, object newClass)
	{
	}
}
