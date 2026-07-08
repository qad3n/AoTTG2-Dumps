using System.Globalization;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004D0")]
public abstract class Binder
{
	[Token(Token = "0x60023DD")]
	[Address(RVA = "0x4EEAC10", Offset = "0x4EEAC10", VA = "0x4EEAC10")]
	protected Binder()
	{
	}

	[Token(Token = "0x60023DE")]
	public abstract FieldInfo BindToField(BindingFlags bindingAttr, FieldInfo[] match, object value, CultureInfo culture);

	[Token(Token = "0x60023DF")]
	public abstract MethodBase BindToMethod(BindingFlags bindingAttr, MethodBase[] match, ref object[] args, ParameterModifier[] modifiers, CultureInfo culture, string[] names, out object state);

	[Token(Token = "0x60023E0")]
	public abstract object ChangeType(object value, Type type, CultureInfo culture);

	[Token(Token = "0x60023E1")]
	public abstract void ReorderArgumentArray(ref object[] args, object state);

	[Token(Token = "0x60023E2")]
	public abstract MethodBase SelectMethod(BindingFlags bindingAttr, MethodBase[] match, Type[] types, ParameterModifier[] modifiers);

	[Token(Token = "0x60023E3")]
	public abstract PropertyInfo SelectProperty(BindingFlags bindingAttr, PropertyInfo[] match, Type returnType, Type[] indexes, ParameterModifier[] modifiers);
}
