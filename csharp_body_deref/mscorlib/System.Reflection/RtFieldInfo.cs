// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.RtFieldInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x200051D")]
internal abstract class RtFieldInfo : FieldInfo
{
	[Token(Token = "0x60026A6")]
	internal abstract object UnsafeGetValue(object obj);

	[Token(Token = "0x60026A7")]
	internal abstract void UnsafeSetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture);

	[Token(Token = "0x60026A8")]
	internal abstract void CheckConsistency(object target);

	[Token(Token = "0x60026A9")]
	[Address(RVA = "0x53E7880", Offset = "0x53E6880", VA = "0x53E7880")]
	protected RtFieldInfo()
	{
	}
}
