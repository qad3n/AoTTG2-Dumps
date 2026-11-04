// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.Binder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000500")]
public abstract class Binder
{
	[Token(Token = "0x600245F")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected Binder()
	{
	}

	[Token(Token = "0x6002460")]
	public abstract FieldInfo BindToField(BindingFlags bindingAttr, FieldInfo[] match, object value, CultureInfo culture);

	[Token(Token = "0x6002461")]
	public abstract MethodBase BindToMethod(BindingFlags bindingAttr, MethodBase[] match, ref object[] args, ParameterModifier[] modifiers, CultureInfo culture, string[] names, out object state);

	[Token(Token = "0x6002462")]
	public abstract object ChangeType(object value, Type type, CultureInfo culture);

	[Token(Token = "0x6002463")]
	public abstract void ReorderArgumentArray(ref object[] args, object state);

	[Token(Token = "0x6002464")]
	public abstract MethodBase SelectMethod(BindingFlags bindingAttr, MethodBase[] match, Type[] types, ParameterModifier[] modifiers);

	[Token(Token = "0x6002465")]
	public abstract PropertyInfo SelectProperty(BindingFlags bindingAttr, PropertyInfo[] match, Type returnType, Type[] indexes, ParameterModifier[] modifiers);
}
