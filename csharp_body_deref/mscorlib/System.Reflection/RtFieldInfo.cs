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

[Token(Token = "0x2000544")]
internal abstract class RtFieldInfo : FieldInfo
{
	[Token(Token = "0x60026D8")]
	internal abstract object UnsafeGetValue(object obj);

	[Token(Token = "0x60026D9")]
	internal abstract void UnsafeSetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture);

	[Token(Token = "0x60026DA")]
	internal abstract void CheckConsistency(object target);

	[Token(Token = "0x60026DB")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	protected RtFieldInfo()
	{
	}
}
