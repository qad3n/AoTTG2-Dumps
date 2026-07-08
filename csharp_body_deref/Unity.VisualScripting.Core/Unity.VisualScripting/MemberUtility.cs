using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000F3")]
public static class MemberUtility
{
	[Token(Token = "0x20000FC")]
	[CompilerGenerated]
	private sealed class _003CGetInheritedExtensionMethods_003Ed__8 : IEnumerable<MethodInfo>, IEnumerable, IEnumerator<MethodInfo>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001C5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001C6")]
		[FieldOffset(Offset = "0x18")]
		private MethodInfo _003C_003E2__current;

		[Token(Token = "0x40001C7")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001C8")]
		[FieldOffset(Offset = "0x28")]
		private Type thisArgumentType;

		[Token(Token = "0x40001C9")]
		[FieldOffset(Offset = "0x30")]
		public Type _003C_003E3__thisArgumentType;

		[Token(Token = "0x40001CA")]
		[FieldOffset(Offset = "0x38")]
		private MethodInfo[] _003C_003E7__wrap1;

		[Token(Token = "0x40001CB")]
		[FieldOffset(Offset = "0x40")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x1700015E")]
		private MethodInfo System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EReflection_002EMethodInfo_003E_002ECurrent
		{
			[Token(Token = "0x600069F")]
			[Address(RVA = "0x49AB010", Offset = "0x49AB010", VA = "0x49AB010", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700015F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60006A1")]
			[Address(RVA = "0x49AB060", Offset = "0x49AB060", VA = "0x49AB060", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600069C")]
		[Address(RVA = "0x49A6910", Offset = "0x49A6910", VA = "0x49A6910")]
		[DebuggerHidden]
		public _003CGetInheritedExtensionMethods_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600069D")]
		[Address(RVA = "0x49AABE0", Offset = "0x49AABE0", VA = "0x49AABE0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600069E")]
		[Address(RVA = "0x49AABF0", Offset = "0x49AABF0", VA = "0x49AABF0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60006A0")]
		[Address(RVA = "0x49AB020", Offset = "0x49AB020", VA = "0x49AB020", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60006A2")]
		[Address(RVA = "0x49AB070", Offset = "0x49AB070", VA = "0x49AB070", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<MethodInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EReflection_002EMethodInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60006A3")]
		[Address(RVA = "0x49AB110", Offset = "0x49AB110", VA = "0x49AB110", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Lazy<ExtensionMethodCache> ExtensionMethodsCache;

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Lazy<Dictionary<Type, MethodInfo[]>> InheritedExtensionMethodsCache;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Lazy<HashSet<MethodInfo>> GenericExtensionMethods;

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x49A60C0", Offset = "0x49A60C0", VA = "0x49A60C0")]
	static MemberUtility()
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x49A5760", Offset = "0x49A5760", VA = "0x49A5760")]
	public static bool IsOperator(this MethodInfo method)
	{
		return default(bool);
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x49A5810", Offset = "0x49A5810", VA = "0x49A5810")]
	public static bool IsUserDefinedConversion(this MethodInfo method)
	{
		return default(bool);
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x49A6330", Offset = "0x49A6330", VA = "0x49A6330")]
	public static MethodInfo MakeGenericMethodVia(this MethodInfo openConstructedMethod, params Type[] closedConstructedParameterTypes)
	{
		return null;
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x49A67C0", Offset = "0x49A67C0", VA = "0x49A67C0")]
	public static bool IsGenericExtension(this MethodInfo methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x49A6890", Offset = "0x49A6890", VA = "0x49A6890")]
	[IteratorStateMachine(typeof(_003CGetInheritedExtensionMethods_003Ed__8))]
	private static IEnumerable<MethodInfo> GetInheritedExtensionMethods(Type thisArgumentType)
	{
		return null;
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x49A6940", Offset = "0x49A6940", VA = "0x49A6940")]
	public static IEnumerable<MethodInfo> GetExtensionMethods(this Type thisArgumentType, bool inherited = true)
	{
		return null;
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x49A6D90", Offset = "0x49A6D90", VA = "0x49A6D90")]
	public static bool IsExtension(this MethodInfo methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x49A5670", Offset = "0x49A5670", VA = "0x49A5670")]
	public static bool IsExtensionMethod(this MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x49A6DF0", Offset = "0x49A6DF0", VA = "0x49A6DF0")]
	public static Delegate CreateDelegate(this MethodInfo methodInfo, Type delegateType)
	{
		return null;
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x49A6E00", Offset = "0x49A6E00", VA = "0x49A6E00")]
	public static bool IsAccessor(this MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x49A6E90", Offset = "0x49A6E90", VA = "0x49A6E90")]
	public static Type GetAccessorType(this MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x49A6F40", Offset = "0x49A6F40", VA = "0x49A6F40")]
	public static bool IsPubliclyGettable(this MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x49A70B0", Offset = "0x49A70B0", VA = "0x49A70B0")]
	private static Type ExtendedDeclaringType(this MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x49A7220", Offset = "0x49A7220", VA = "0x49A7220")]
	public static Type ExtendedDeclaringType(this MemberInfo memberInfo, bool invokeAsExtension)
	{
		return null;
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x49A72A0", Offset = "0x49A72A0", VA = "0x49A72A0")]
	public static bool IsStatic(this PropertyInfo propertyInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x49A7310", Offset = "0x49A7310", VA = "0x49A7310")]
	public static bool IsStatic(this MemberInfo memberInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x49A74E0", Offset = "0x49A74E0", VA = "0x49A74E0")]
	private static IEnumerable<ParameterInfo> GetParametersWithoutThis(this MethodBase methodBase)
	{
		return null;
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x49A7570", Offset = "0x49A7570", VA = "0x49A7570")]
	public static bool IsInvokedAsExtension(this MethodBase methodBase, Type targetType)
	{
		return default(bool);
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x49A7650", Offset = "0x49A7650", VA = "0x49A7650")]
	public static IEnumerable<ParameterInfo> GetInvocationParameters(this MethodBase methodBase, bool invokeAsExtension)
	{
		return null;
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x49A76D0", Offset = "0x49A76D0", VA = "0x49A76D0")]
	public static IEnumerable<ParameterInfo> GetInvocationParameters(this MethodBase methodBase, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x49A7790", Offset = "0x49A7790", VA = "0x49A7790")]
	public static Type UnderlyingParameterType(this ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x49A7810", Offset = "0x49A7810", VA = "0x49A7810")]
	public static bool HasDefaultValue(this ParameterInfo parameterInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x49A7840", Offset = "0x49A7840", VA = "0x49A7840")]
	public static object DefaultValue(this ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x49A79D0", Offset = "0x49A79D0", VA = "0x49A79D0")]
	public static object PseudoDefaultValue(this ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x49A7B60", Offset = "0x49A7B60", VA = "0x49A7B60")]
	public static bool AllowsNull(this ParameterInfo parameterInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x49A7C60", Offset = "0x49A7C60", VA = "0x49A7C60")]
	public static bool HasOutModifier(this ParameterInfo parameterInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x49A7D20", Offset = "0x49A7D20", VA = "0x49A7D20")]
	public static bool CanWrite(this FieldInfo fieldInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x49A7D60", Offset = "0x49A7D60", VA = "0x49A7D60")]
	public static Member ToManipulator(this MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x49A7DD0", Offset = "0x49A7DD0", VA = "0x49A7DD0")]
	public static Member ToManipulator(this MemberInfo memberInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x49A8090", Offset = "0x49A8090", VA = "0x49A8090")]
	public static Member ToManipulator(this FieldInfo fieldInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x49A80F0", Offset = "0x49A80F0", VA = "0x49A80F0")]
	public static Member ToManipulator(this PropertyInfo propertyInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x49A8150", Offset = "0x49A8150", VA = "0x49A8150")]
	public static Member ToManipulator(this MethodInfo methodInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x49A81B0", Offset = "0x49A81B0", VA = "0x49A81B0")]
	public static Member ToManipulator(this ConstructorInfo constructorInfo, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x49A8210", Offset = "0x49A8210", VA = "0x49A8210")]
	public static ConstructorInfo GetConstructorAccepting(this Type type, Type[] paramTypes, bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x49A8320", Offset = "0x49A8320", VA = "0x49A8320")]
	public static ConstructorInfo GetConstructorAccepting(this Type type, params Type[] paramTypes)
	{
		return null;
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x49A8380", Offset = "0x49A8380", VA = "0x49A8380")]
	public static ConstructorInfo GetPublicConstructorAccepting(this Type type, params Type[] paramTypes)
	{
		return null;
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x49A83E0", Offset = "0x49A83E0", VA = "0x49A83E0")]
	public static ConstructorInfo GetDefaultConstructor(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x49A8550", Offset = "0x49A8550", VA = "0x49A8550")]
	public static ConstructorInfo GetPublicDefaultConstructor(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x49A86B0", Offset = "0x49A86B0", VA = "0x49A86B0")]
	public static MemberInfo[] GetExtendedMember(this Type type, string name, MemberTypes types, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x49A88A0", Offset = "0x49A88A0", VA = "0x49A88A0")]
	public static MemberInfo[] GetExtendedMembers(this Type type, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x49A8C80", Offset = "0x49A8C80", VA = "0x49A8C80")]
	private static bool NameMatches(this MemberInfo member, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x49A8CB0", Offset = "0x49A8CB0", VA = "0x49A8CB0")]
	private static bool ParametersMatch(this MethodBase methodBase, IEnumerable<Type> parameterTypes, bool invokeAsExtension)
	{
		return default(bool);
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x49A8EE0", Offset = "0x49A8EE0", VA = "0x49A8EE0")]
	private static bool GenericArgumentsMatch(this MethodInfo method, IEnumerable<Type> genericArgumentTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x49A8FD0", Offset = "0x49A8FD0", VA = "0x49A8FD0")]
	public static bool SignatureMatches(this FieldInfo field, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x49A9060", Offset = "0x49A9060", VA = "0x49A9060")]
	public static bool SignatureMatches(this PropertyInfo property, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x49A90F0", Offset = "0x49A90F0", VA = "0x49A90F0")]
	public static bool SignatureMatches(this ConstructorInfo constructor, string name, IEnumerable<Type> parameterTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x49A91C0", Offset = "0x49A91C0", VA = "0x49A91C0")]
	public static bool SignatureMatches(this MethodInfo method, string name, IEnumerable<Type> parameterTypes, bool invokeAsExtension)
	{
		return default(bool);
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x49A92C0", Offset = "0x49A92C0", VA = "0x49A92C0")]
	public static bool SignatureMatches(this MethodInfo method, string name, IEnumerable<Type> parameterTypes, IEnumerable<Type> genericArgumentTypes, bool invokeAsExtension)
	{
		return default(bool);
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x49A93D0", Offset = "0x49A93D0", VA = "0x49A93D0")]
	public static FieldInfo GetFieldUnambiguous(this Type type, string name, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x49A9540", Offset = "0x49A9540", VA = "0x49A9540")]
	public static PropertyInfo GetPropertyUnambiguous(this Type type, string name, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x49A96A0", Offset = "0x49A96A0", VA = "0x49A96A0")]
	public static MethodInfo GetMethodUnambiguous(this Type type, string name, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000680")]
	private static TMemberInfo DisambiguateHierarchy<TMemberInfo>(this IEnumerable<TMemberInfo> members, Type type) where TMemberInfo : MemberInfo
	{
		return null;
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x49A9800", Offset = "0x49A9800", VA = "0x49A9800")]
	public static FieldInfo Disambiguate(this IEnumerable<FieldInfo> fields, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x49A9920", Offset = "0x49A9920", VA = "0x49A9920")]
	public static PropertyInfo Disambiguate(this IEnumerable<PropertyInfo> properties, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x49A9A40", Offset = "0x49A9A40", VA = "0x49A9A40")]
	public static ConstructorInfo Disambiguate(this IEnumerable<ConstructorInfo> constructors, Type type, IEnumerable<Type> parameterTypes)
	{
		return null;
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x49A9C70", Offset = "0x49A9C70", VA = "0x49A9C70")]
	public static MethodInfo Disambiguate(this IEnumerable<MethodInfo> methods, Type type, IEnumerable<Type> parameterTypes)
	{
		return null;
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x49A9EC0", Offset = "0x49A9EC0", VA = "0x49A9EC0")]
	public static MethodInfo Disambiguate(this IEnumerable<MethodInfo> methods, Type type, IEnumerable<Type> parameterTypes, IEnumerable<Type> genericArgumentTypes)
	{
		return null;
	}
}
