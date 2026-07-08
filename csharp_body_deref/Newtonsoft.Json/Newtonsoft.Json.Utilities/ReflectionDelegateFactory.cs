using System;
using System.Reflection;
using Il2CppDummyDll;
using Newtonsoft.Json.Serialization;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000E1")]
internal abstract class ReflectionDelegateFactory
{
	[Token(Token = "0x6000690")]
	public Func<T, object> CreateGet<T>(MemberInfo memberInfo) where T : notnull
	{
		return null;
	}

	[Token(Token = "0x6000691")]
	public Action<T, object> CreateSet<T>(MemberInfo memberInfo) where T : notnull
	{
		return null;
	}

	[Token(Token = "0x6000692")]
	public abstract MethodCall<T, object> CreateMethodCall<T>(MethodBase method) where T : notnull;

	[Token(Token = "0x6000693")]
	public abstract ObjectConstructor<object> CreateParameterizedConstructor(MethodBase method);

	[Token(Token = "0x6000694")]
	public abstract Func<T> CreateDefaultConstructor<T>(Type type) where T : notnull;

	[Token(Token = "0x6000695")]
	public abstract Func<T, object> CreateGet<T>(PropertyInfo propertyInfo) where T : notnull;

	[Token(Token = "0x6000696")]
	public abstract Func<T, object> CreateGet<T>(FieldInfo fieldInfo) where T : notnull;

	[Token(Token = "0x6000697")]
	public abstract Action<T, object> CreateSet<T>(FieldInfo fieldInfo) where T : notnull;

	[Token(Token = "0x6000698")]
	public abstract Action<T, object> CreateSet<T>(PropertyInfo propertyInfo) where T : notnull;

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x3ACA4E0", Offset = "0x3ACA4E0", VA = "0x3ACA4E0")]
	protected ReflectionDelegateFactory()
	{
	}
}
