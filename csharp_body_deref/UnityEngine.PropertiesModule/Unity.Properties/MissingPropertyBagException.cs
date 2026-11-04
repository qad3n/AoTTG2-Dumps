// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.MissingPropertyBagException
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Properties;

[Serializable]
[Token(Token = "0x200000E")]
public class MissingPropertyBagException : Exception
{
	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x90")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly Type _003CType_003Ek__BackingField;

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x2FEB500", Offset = "0x2FE9B00", VA = "0x182FEB500")]
	public MissingPropertyBagException(Type type)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x2FEB490", Offset = "0x2FE9A90", VA = "0x182FEB490")]
	private static string GetMessageForType(Type type)
	{
		return null;
	}
}
