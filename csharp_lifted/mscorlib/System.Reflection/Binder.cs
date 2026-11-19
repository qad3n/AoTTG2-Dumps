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

[Token(Token = "0x20004D9")]
public abstract class Binder
{
	[Token(Token = "0x600242D")]
	[Address(RVA = "0x53D7990", Offset = "0x53D6990", VA = "0x53D7990")]
	protected Binder()
	{
	}

	[Token(Token = "0x600242E")]
	public abstract FieldInfo BindToField(BindingFlags bindingAttr, FieldInfo[] match, object value, CultureInfo culture);

	[Token(Token = "0x600242F")]
	public abstract MethodBase BindToMethod(BindingFlags bindingAttr, MethodBase[] match, ref object[] args, ParameterModifier[] modifiers, CultureInfo culture, string[] names, out object state);

	[Token(Token = "0x6002430")]
	public abstract object ChangeType(object value, Type type, CultureInfo culture);

	[Token(Token = "0x6002431")]
	public abstract void ReorderArgumentArray(ref object[] args, object state);

	[Token(Token = "0x6002432")]
	public abstract MethodBase SelectMethod(BindingFlags bindingAttr, MethodBase[] match, Type[] types, ParameterModifier[] modifiers);

	[Token(Token = "0x6002433")]
	public abstract PropertyInfo SelectProperty(BindingFlags bindingAttr, PropertyInfo[] match, Type returnType, Type[] indexes, ParameterModifier[] modifiers);
}
