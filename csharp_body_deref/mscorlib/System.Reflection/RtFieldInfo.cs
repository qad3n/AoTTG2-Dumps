using System.Globalization;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000514")]
internal abstract class RtFieldInfo : FieldInfo
{
	[Token(Token = "0x6002655")]
	internal abstract object UnsafeGetValue(object obj);

	[Token(Token = "0x6002656")]
	internal abstract void UnsafeSetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture);

	[Token(Token = "0x6002657")]
	internal abstract void CheckConsistency(object target);

	[Token(Token = "0x6002658")]
	[Address(RVA = "0x4EFB180", Offset = "0x4EFB180", VA = "0x4EFB180")]
	protected RtFieldInfo()
	{
	}
}
