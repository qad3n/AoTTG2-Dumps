// ==================== AoTTG2 cross-reference ====================
// Type: System.RuntimeType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Globalization;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Threading;
using Il2CppDummyDll;

namespace System;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000193")]
internal class RuntimeType : TypeInfo, ISerializable, ICloneable
{
	[Token(Token = "0x2000194")]
	internal enum MemberListType
	{
		[Token(Token = "0x40005ED")]
		All,
		[Token(Token = "0x40005EE")]
		CaseSensitive,
		[Token(Token = "0x40005EF")]
		CaseInsensitive,
		[Token(Token = "0x40005F0")]
		HandleToInfo
	}

	[Token(Token = "0x2000195")]
	private struct ListBuilder<T> where T : class
	{
		[Token(Token = "0x40005F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T[] _items;

		[Token(Token = "0x40005F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _item;

		[Token(Token = "0x40005F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _count;

		[Token(Token = "0x40005F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _capacity;

		[Token(Token = "0x1700014E")]
		public T this[int index]
		{
			[Token(Token = "0x6000F1B")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014F")]
		public int Count
		{
			[Token(Token = "0x6000F1E")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000F1A")]
		public ListBuilder(int capacity)
		{
		}

		[Token(Token = "0x6000F1C")]
		public T[] ToArray()
		{
			return null;
		}

		[Token(Token = "0x6000F1D")]
		public void CopyTo(object[] array, int index)
		{
		}

		[Token(Token = "0x6000F1F")]
		public void Add(T item)
		{
		}
	}

	[Token(Token = "0x40005D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly System.RuntimeType ValueType;

	[Token(Token = "0x40005D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static readonly System.RuntimeType EnumType;

	[Token(Token = "0x40005D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly System.RuntimeType ObjectType;

	[Token(Token = "0x40005DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly System.RuntimeType StringType;

	[Token(Token = "0x40005DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly System.RuntimeType DelegateType;

	[Token(Token = "0x40005DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Type[] s_SICtorParamTypes;

	[Token(Token = "0x40005DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal static Func<Type, Type[], Type> MakeTypeBuilderInstantiation;

	[Token(Token = "0x40005DE")]
	private const BindingFlags MemberBindingMask = (BindingFlags)255;

	[Token(Token = "0x40005DF")]
	private const BindingFlags InvocationMask = BindingFlags.InvokeMethod | BindingFlags.CreateInstance | BindingFlags.GetField | BindingFlags.SetField | BindingFlags.GetProperty | BindingFlags.SetProperty | BindingFlags.PutDispProperty | BindingFlags.PutRefDispProperty;

	[Token(Token = "0x40005E0")]
	private const BindingFlags BinderNonCreateInstance = BindingFlags.InvokeMethod | BindingFlags.GetField | BindingFlags.SetField | BindingFlags.GetProperty | BindingFlags.SetProperty;

	[Token(Token = "0x40005E1")]
	private const BindingFlags BinderGetSetProperty = BindingFlags.GetProperty | BindingFlags.SetProperty;

	[Token(Token = "0x40005E2")]
	private const BindingFlags BinderSetInvokeProperty = BindingFlags.InvokeMethod | BindingFlags.SetProperty;

	[Token(Token = "0x40005E3")]
	private const BindingFlags BinderGetSetField = BindingFlags.GetField | BindingFlags.SetField;

	[Token(Token = "0x40005E4")]
	private const BindingFlags BinderSetInvokeField = BindingFlags.InvokeMethod | BindingFlags.SetField;

	[Token(Token = "0x40005E5")]
	private const BindingFlags BinderNonFieldGetSet = (BindingFlags)16773888;

	[Token(Token = "0x40005E6")]
	private const BindingFlags ClassicBindingMask = BindingFlags.InvokeMethod | BindingFlags.GetProperty | BindingFlags.SetProperty | BindingFlags.PutDispProperty | BindingFlags.PutRefDispProperty;

	[Token(Token = "0x40005E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static System.RuntimeType s_typedRef;

	[NonSerialized]
	[Token(Token = "0x40005E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private System.MonoTypeInfo type_info;

	[Token(Token = "0x40005E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal object GenericCache;

	[Token(Token = "0x40005EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private System.Reflection.RuntimeConstructorInfo m_serializationCtor;

	[Token(Token = "0x40005EB")]
	private const int GenericParameterCountAny = -1;

	[Token(Token = "0x17000135")]
	public override Module Module
	{
		[Token(Token = "0x6000EAB")]
		[Address(RVA = "0x1B73EF0", Offset = "0x1B724F0", VA = "0x181B73EF0", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000136")]
	public override Assembly Assembly
	{
		[Token(Token = "0x6000EAD")]
		[Address(RVA = "0x1B73EE0", Offset = "0x1B724E0", VA = "0x181B73EE0", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000137")]
	public override RuntimeTypeHandle TypeHandle
	{
		[Token(Token = "0x6000EAF")]
		[Address(RVA = "0x1B78A90", Offset = "0x1B77090", VA = "0x181B78A90", Slot = "116")]
		get
		{
			return default(RuntimeTypeHandle);
		}
	}

	[Token(Token = "0x17000138")]
	public override Type BaseType
	{
		[Token(Token = "0x6000EB3")]
		[Address(RVA = "0x1B784E0", Offset = "0x1B76AE0", VA = "0x181B784E0", Slot = "118")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000139")]
	public override Type UnderlyingSystemType
	{
		[Token(Token = "0x6000EB5")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013A")]
	public override bool IsEnum
	{
		[Token(Token = "0x6000EBD")]
		[Address(RVA = "0x1B788F0", Offset = "0x1B76EF0", VA = "0x181B788F0", Slot = "72")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013B")]
	public override GenericParameterAttributes GenericParameterAttributes
	{
		[Token(Token = "0x6000EBF")]
		[Address(RVA = "0x1B78740", Offset = "0x1B76D40", VA = "0x181B78740", Slot = "53")]
		get
		{
			return default(GenericParameterAttributes);
		}
	}

	[Token(Token = "0x1700013C")]
	internal override bool IsSzArray
	{
		[Token(Token = "0x6000EC0")]
		[Address(RVA = "0x1B789F0", Offset = "0x1B76FF0", VA = "0x181B789F0", Slot = "131")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013D")]
	public override bool IsGenericTypeDefinition
	{
		[Token(Token = "0x6000ECC")]
		[Address(RVA = "0x1B78970", Offset = "0x1B76F70", VA = "0x181B78970", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013E")]
	public override bool IsGenericParameter
	{
		[Token(Token = "0x6000ECD")]
		[Address(RVA = "0x1B78960", Offset = "0x1B76F60", VA = "0x181B78960", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013F")]
	public override int GenericParameterPosition
	{
		[Token(Token = "0x6000ECE")]
		[Address(RVA = "0x1B78800", Offset = "0x1B76E00", VA = "0x181B78800", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000140")]
	public override bool IsGenericType
	{
		[Token(Token = "0x6000ED0")]
		[Address(RVA = "0x1B78980", Offset = "0x1B76F80", VA = "0x181B78980", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000141")]
	public override bool IsConstructedGenericType
	{
		[Token(Token = "0x6000ED1")]
		[Address(RVA = "0x1B788A0", Offset = "0x1B76EA0", VA = "0x181B788A0", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000142")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6000EDC")]
		[Address(RVA = "0x1B78A00", Offset = "0x1B77000", VA = "0x181B78A00", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x17000143")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6000EDD")]
		[Address(RVA = "0x1B78A70", Offset = "0x1B77070", VA = "0x181B78A70", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000144")]
	public override int MetadataToken
	{
		[Token(Token = "0x6000EDE")]
		[Address(RVA = "0x1B78A40", Offset = "0x1B77040", VA = "0x181B78A40", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000145")]
	public override bool ContainsGenericParameters
	{
		[Token(Token = "0x6000EF2")]
		[Address(RVA = "0x1B784F0", Offset = "0x1B76AF0", VA = "0x181B784F0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000146")]
	public override extern MethodBase DeclaringMethod
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F01")]
		[Address(RVA = "0x1B78610", Offset = "0x1B76C10", VA = "0x181B78610", Slot = "29")]
		get;
	}

	[Token(Token = "0x17000147")]
	public override string AssemblyQualifiedName
	{
		[Token(Token = "0x6000F0D")]
		[Address(RVA = "0x1B784D0", Offset = "0x1B76AD0", VA = "0x181B784D0", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000148")]
	public override extern Type DeclaringType
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F0E")]
		[Address(RVA = "0x1B78620", Offset = "0x1B76C20", VA = "0x181B78620", Slot = "9")]
		get;
	}

	[Token(Token = "0x17000149")]
	public override extern string Name
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F0F")]
		[Address(RVA = "0x1B78A50", Offset = "0x1B77050", VA = "0x181B78A50", Slot = "8")]
		get;
	}

	[Token(Token = "0x1700014A")]
	public override extern string Namespace
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F10")]
		[Address(RVA = "0x1B78A60", Offset = "0x1B77060", VA = "0x181B78A60", Slot = "24")]
		get;
	}

	[Token(Token = "0x1700014B")]
	public override string FullName
	{
		[Token(Token = "0x6000F12")]
		[Address(RVA = "0x1B78630", Offset = "0x1B76C30", VA = "0x181B78630", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014C")]
	public override bool IsSZArray
	{
		[Token(Token = "0x6000F13")]
		[Address(RVA = "0x1B78990", Offset = "0x1B76F90", VA = "0x181B78990", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700014D")]
	public override bool IsByRefLike
	{
		[Token(Token = "0x6000F15")]
		[Address(RVA = "0x1B78890", Offset = "0x1B76E90", VA = "0x181B78890", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x1B741B0", Offset = "0x1B727B0", VA = "0x181B741B0")]
	internal static System.RuntimeType GetType(string typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6000E8C")]
	[Address(RVA = "0x1B77BB0", Offset = "0x1B761B0", VA = "0x181B77BB0")]
	private static void ThrowIfTypeNeverValidGenericArgument(System.RuntimeType type)
	{
	}

	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x1B77860", Offset = "0x1B75E60", VA = "0x181B77860")]
	internal static void SanityCheckGenericArguments(System.RuntimeType[] genericArguments, System.RuntimeType[] genericParamters)
	{
	}

	[Token(Token = "0x6000E8E")]
	[Address(RVA = "0x1B77AB0", Offset = "0x1B760B0", VA = "0x181B77AB0")]
	private static void SplitName(string fullname, out string name, out string ns)
	{
	}

	[Token(Token = "0x6000E8F")]
	[Address(RVA = "0x1B6E430", Offset = "0x1B6CA30", VA = "0x181B6E430")]
	internal static BindingFlags FilterPreCalculate(bool isPublic, bool isInherited, bool isStatic)
	{
		return default(BindingFlags);
	}

	[Token(Token = "0x6000E90")]
	[Address(RVA = "0x1B6E2F0", Offset = "0x1B6C8F0", VA = "0x181B6E2F0")]
	private static void FilterHelper(BindingFlags bindingFlags, ref string name, bool allowPrefixLookup, out bool prefixLookup, out bool ignoreCase, out MemberListType listType)
	{
	}

	[Token(Token = "0x6000E91")]
	[Address(RVA = "0x1B6E1F0", Offset = "0x1B6C7F0", VA = "0x181B6E1F0")]
	private static void FilterHelper(BindingFlags bindingFlags, ref string name, out bool ignoreCase, out MemberListType listType)
	{
	}

	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x1B6E050", Offset = "0x1B6C650", VA = "0x181B6E050")]
	private static bool FilterApplyPrefixLookup(MemberInfo memberInfo, string name, bool ignoreCase)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x1B6DAC0", Offset = "0x1B6C0C0", VA = "0x181B6DAC0")]
	private static bool FilterApplyBase(MemberInfo memberInfo, BindingFlags bindingFlags, bool isPublic, bool isNonProtectedInternal, bool isStatic, string name, bool prefixLookup)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x1B6E0D0", Offset = "0x1B6C6D0", VA = "0x181B6E0D0")]
	private static bool FilterApplyType(Type type, BindingFlags bindingFlags, string name, bool prefixLookup, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x1B6DFC0", Offset = "0x1B6C5C0", VA = "0x181B6DFC0")]
	private static bool FilterApplyMethodInfo(System.Reflection.RuntimeMethodInfo method, BindingFlags bindingFlags, CallingConventions callConv, Type[] argumentTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x1B6DCD0", Offset = "0x1B6C2D0", VA = "0x181B6DCD0")]
	private static bool FilterApplyConstructorInfo(System.Reflection.RuntimeConstructorInfo constructor, BindingFlags bindingFlags, CallingConventions callConv, Type[] argumentTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x1B6DD60", Offset = "0x1B6C360", VA = "0x181B6DD60")]
	private static bool FilterApplyMethodBase(MethodBase methodBase, BindingFlags methodFlags, BindingFlags bindingFlags, CallingConventions callConv, Type[] argumentTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x1B78470", Offset = "0x1B76A70", VA = "0x181B78470")]
	internal RuntimeType()
	{
	}

	[Token(Token = "0x6000E99")]
	[Address(RVA = "0x1B71DD0", Offset = "0x1B703D0", VA = "0x181B71DD0")]
	private ListBuilder<MethodInfo> GetMethodCandidates(string name, BindingFlags bindingAttr, CallingConventions callConv, Type[] types, int genericParamCount, bool allowPrefixLookup)
	{
		return default(ListBuilder<MethodInfo>);
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x1B6E8F0", Offset = "0x1B6CEF0", VA = "0x181B6E8F0")]
	private ListBuilder<ConstructorInfo> GetConstructorCandidates(string name, BindingFlags bindingAttr, CallingConventions callConv, Type[] types, bool allowPrefixLookup)
	{
		return default(ListBuilder<ConstructorInfo>);
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x1B738E0", Offset = "0x1B71EE0", VA = "0x181B738E0")]
	private ListBuilder<PropertyInfo> GetPropertyCandidates(string name, BindingFlags bindingAttr, Type[] types, bool allowPrefixLookup)
	{
		return default(ListBuilder<PropertyInfo>);
	}

	[Token(Token = "0x6000E9C")]
	[Address(RVA = "0x1B6FD00", Offset = "0x1B6E300", VA = "0x181B6FD00")]
	private ListBuilder<EventInfo> GetEventCandidates(string name, BindingFlags bindingAttr, bool allowPrefixLookup)
	{
		return default(ListBuilder<EventInfo>);
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x1B704D0", Offset = "0x1B6EAD0", VA = "0x181B704D0")]
	private ListBuilder<FieldInfo> GetFieldCandidates(string name, BindingFlags bindingAttr, bool allowPrefixLookup)
	{
		return default(ListBuilder<FieldInfo>);
	}

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x1B72980", Offset = "0x1B70F80", VA = "0x181B72980")]
	private ListBuilder<Type> GetNestedTypeCandidates(string fullname, BindingFlags bindingAttr, bool allowPrefixLookup)
	{
		return default(ListBuilder<Type>);
	}

	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x1B728D0", Offset = "0x1B70ED0", VA = "0x181B728D0", Slot = "105")]
	public override MethodInfo[] GetMethods(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000EA0")]
	[Address(RVA = "0x1B6F1E0", Offset = "0x1B6D7E0", VA = "0x181B6F1E0", Slot = "85")]
	[ComVisible(true)]
	public override ConstructorInfo[] GetConstructors(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000EA1")]
	[Address(RVA = "0x1B73850", Offset = "0x1B71E50", VA = "0x181B73850", Slot = "115")]
	public override PropertyInfo[] GetProperties(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x1B70430", Offset = "0x1B6EA30", VA = "0x181B70430", Slot = "88")]
	public override EventInfo[] GetEvents(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x1B70EA0", Offset = "0x1B6F4A0", VA = "0x181B70EA0", Slot = "92")]
	public override FieldInfo[] GetFields(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x1B71770", Offset = "0x1B6FD70", VA = "0x181B71770", Slot = "96")]
	public override MemberInfo[] GetMembers(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x1B6ED00", Offset = "0x1B6D300", VA = "0x181B6ED00", Slot = "83")]
	protected override ConstructorInfo GetConstructorImpl(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x1B73C20", Offset = "0x1B72220", VA = "0x181B73C20", Slot = "113")]
	protected override PropertyInfo GetPropertyImpl(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x1B6FFD0", Offset = "0x1B6E5D0", VA = "0x181B6FFD0", Slot = "87")]
	public override EventInfo GetEvent(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x1B707A0", Offset = "0x1B6EDA0", VA = "0x181B707A0", Slot = "90")]
	public override FieldInfo GetField(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x1B72D80", Offset = "0x1B71380", VA = "0x181B72D80", Slot = "106")]
	public override Type GetNestedType(string fullname, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000EAA")]
	[Address(RVA = "0x1B712C0", Offset = "0x1B6F8C0", VA = "0x181B712C0", Slot = "95")]
	public override MemberInfo[] GetMember(string name, MemberTypes type, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x1B73EF0", Offset = "0x1B724F0", VA = "0x181B73EF0")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x1B73EE0", Offset = "0x1B724E0", VA = "0x181B73EE0")]
	internal System.Reflection.RuntimeAssembly GetRuntimeAssembly()
	{
		return null;
	}

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x1B76E90", Offset = "0x1B75490", VA = "0x181B76E90", Slot = "121")]
	public override bool IsInstanceOfType(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x1B758B0", Offset = "0x1B73EB0", VA = "0x181B758B0", Slot = "22")]
	public override bool IsAssignableFrom(Type c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x1B76DE0", Offset = "0x1B753E0", VA = "0x181B76DE0", Slot = "122")]
	public override bool IsEquivalentTo(Type other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x1B6E690", Offset = "0x1B6CC90", VA = "0x181B6E690")]
	private System.RuntimeType GetBaseType()
	{
		return null;
	}

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x1B6E680", Offset = "0x1B6CC80", VA = "0x181B6E680", Slot = "56")]
	protected override TypeAttributes GetAttributeFlagsImpl()
	{
		return default(TypeAttributes);
	}

	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x1B759B0", Offset = "0x1B73FB0", VA = "0x181B759B0", Slot = "70")]
	protected override bool IsContextfulImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x1B75990", Offset = "0x1B73F90", VA = "0x181B75990", Slot = "34")]
	protected override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB9")]
	[Address(RVA = "0x1B76EB0", Offset = "0x1B754B0", VA = "0x181B76EB0", Slot = "76")]
	protected override bool IsPrimitiveImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x1B76EA0", Offset = "0x1B754A0", VA = "0x181B76EA0", Slot = "36")]
	protected override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x1B759A0", Offset = "0x1B73FA0", VA = "0x181B759A0", Slot = "68")]
	protected override bool IsCOMObjectImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x1B76FD0", Offset = "0x1B755D0", VA = "0x181B76FD0", Slot = "78")]
	protected override bool IsValueTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x1B74230", Offset = "0x1B72830", VA = "0x181B74230", Slot = "46")]
	protected override bool HasElementTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x1B758A0", Offset = "0x1B73EA0", VA = "0x181B758A0", Slot = "32")]
	protected override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x1B6E5F0", Offset = "0x1B6CBF0", VA = "0x181B6E5F0", Slot = "48")]
	public override int GetArrayRank()
	{
		return default(int);
	}

	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x1B6F760", Offset = "0x1B6DD60", VA = "0x181B6F760", Slot = "47")]
	public override Type GetElementType()
	{
		return null;
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x1B6F9A0", Offset = "0x1B6DFA0", VA = "0x181B6F9A0", Slot = "18")]
	public override string[] GetEnumNames()
	{
		return null;
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x1B6FB80", Offset = "0x1B6E180", VA = "0x181B6FB80", Slot = "124")]
	public override Array GetEnumValues()
	{
		return null;
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x1B6FAD0", Offset = "0x1B6E0D0", VA = "0x181B6FAD0", Slot = "123")]
	public override Type GetEnumUnderlyingType()
	{
		return null;
	}

	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x1B767E0", Offset = "0x1B74DE0", VA = "0x181B767E0", Slot = "16")]
	public override bool IsEnumDefined(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x1B6F770", Offset = "0x1B6DD70", VA = "0x181B6F770", Slot = "17")]
	public override string GetEnumName(object value)
	{
		return null;
	}

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x1B70F40", Offset = "0x1B6F540", VA = "0x181B70F40")]
	internal System.RuntimeType[] GetGenericArgumentsInternal()
	{
		return null;
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x1B70FC0", Offset = "0x1B6F5C0", VA = "0x181B70FC0", Slot = "51")]
	public override Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x6000ECB")]
	[Address(RVA = "0x1B77190", Offset = "0x1B75790", VA = "0x181B77190", Slot = "128")]
	public override Type MakeGenericType(params Type[] instantiation)
	{
		return null;
	}

	[Token(Token = "0x6000ECF")]
	[Address(RVA = "0x1B71170", Offset = "0x1B6F770", VA = "0x181B71170", Slot = "49")]
	public override Type GetGenericTypeDefinition()
	{
		return null;
	}

	[Token(Token = "0x6000ED2")]
	[Address(RVA = "0x1B74240", Offset = "0x1B72840", VA = "0x181B74240", Slot = "119")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public override object InvokeMember(string name, BindingFlags bindingFlags, Binder binder, object target, object[] providedArgs, ParameterModifier[] modifiers, CultureInfo culture, string[] namedParams)
	{
		return null;
	}

	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x1B6DAB0", Offset = "0x1B6C0B0", VA = "0x181B6DAB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x841F20", Offset = "0x840520", VA = "0x180841F20")]
	public static bool operator ==(System.RuntimeType left, System.RuntimeType right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x5286D0", Offset = "0x526CD0", VA = "0x1805286D0")]
	public static bool operator !=(System.RuntimeType left, System.RuntimeType right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "138")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000ED7")]
	[Address(RVA = "0x1B73530", Offset = "0x1B71B30", VA = "0x181B73530", Slot = "137")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x1B6F290", Offset = "0x1B6D890", VA = "0x181B6F290", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000ED9")]
	[Address(RVA = "0x1B6F330", Offset = "0x1B6D930", VA = "0x181B6F330", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000EDA")]
	[Address(RVA = "0x1B76640", Offset = "0x1B74C40", VA = "0x181B76640", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x1B6E470", Offset = "0x1B6CA70", VA = "0x181B6E470", Slot = "132")]
	internal override string FormatTypeName(bool serialization)
	{
		return null;
	}

	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x1B6CA50", Offset = "0x1B6B050", VA = "0x181B6CA50")]
	private void CreateInstanceCheckThis()
	{
	}

	[Token(Token = "0x6000EE0")]
	[Address(RVA = "0x1B6CF30", Offset = "0x1B6B530", VA = "0x181B6CF30")]
	internal object CreateInstanceImpl(BindingFlags bindingAttr, Binder binder, object[] args, CultureInfo culture, object[] activationAttributes, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x1B6CCE0", Offset = "0x1B6B2E0", VA = "0x181B6CCE0")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	internal object CreateInstanceDefaultCtor(bool publicOnly, bool skipCheckThis, bool fillCache, bool wrapExceptions, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6000EE2")]
	[Address(RVA = "0x1B6F4D0", Offset = "0x1B6DAD0", VA = "0x181B6F4D0")]
	internal System.Reflection.RuntimeConstructorInfo GetDefaultConstructor()
	{
		return null;
	}

	[Token(Token = "0x6000EE3")]
	[Address(RVA = "0x1B6F680", Offset = "0x1B6DC80", VA = "0x181B6F680")]
	private string GetDefaultMemberName()
	{
		return null;
	}

	[Token(Token = "0x6000EE4")]
	[Address(RVA = "0x1B73F00", Offset = "0x1B72500", VA = "0x181B73F00")]
	internal System.Reflection.RuntimeConstructorInfo GetSerializationCtor()
	{
		return null;
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x1B6DA60", Offset = "0x1B6C060", VA = "0x181B6DA60")]
	internal object CreateInstanceSlow(bool publicOnly, bool wrapExceptions, bool skipCheckThis, bool fillCache)
	{
		return null;
	}

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x1B6D790", Offset = "0x1B6BD90", VA = "0x181B6D790")]
	private object CreateInstanceMono(bool nonPublic, bool wrapExceptions)
	{
		return null;
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x1B6C870", Offset = "0x1B6AE70", VA = "0x181B6C870")]
	internal object CheckValue(object value, Binder binder, CultureInfo culture, BindingFlags invokeAttr)
	{
		return null;
	}

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x1B77D00", Offset = "0x1B76300", VA = "0x181B77D00")]
	private object TryConvertToType(object value, ref bool failed)
	{
		return null;
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x1B759C0", Offset = "0x1B73FC0", VA = "0x181B759C0")]
	private static object IsConvertibleToPrimitiveType(object value, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x1B6E890", Offset = "0x1B6CE90", VA = "0x181B6E890")]
	private string GetCachedName(System.TypeNameKind kind)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x1B78AC0", Offset = "0x1B770C0", VA = "0x181B78AC0")]
	private extern Type make_array_type(int rank);

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x1B770B0", Offset = "0x1B756B0", VA = "0x181B770B0", Slot = "125")]
	public override Type MakeArrayType()
	{
		return null;
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x1B770C0", Offset = "0x1B756C0", VA = "0x181B770C0", Slot = "126")]
	public override Type MakeArrayType(int rank)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x1B78AD0", Offset = "0x1B770D0", VA = "0x181B78AD0")]
	private extern Type make_byref_type();

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x1B77120", Offset = "0x1B75720", VA = "0x181B77120", Slot = "127")]
	public override Type MakeByRefType()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x1B77770", Offset = "0x1B75D70", VA = "0x181B77770")]
	private static extern Type MakePointerType(Type type);

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x1B77780", Offset = "0x1B75D80", VA = "0x181B77780", Slot = "129")]
	public override Type MakePointerType()
	{
		return null;
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x1B71060", Offset = "0x1B6F660", VA = "0x181B71060", Slot = "54")]
	public override Type[] GetGenericParameterConstraints()
	{
		return null;
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x1B6CDE0", Offset = "0x1B6B3E0", VA = "0x181B6CDE0")]
	internal static object CreateInstanceForAnotherGenericParameter(Type genericType, System.RuntimeType genericArgument)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x1B77760", Offset = "0x1B75D60", VA = "0x181B77760")]
	private static extern Type MakeGenericType(Type gt, Type[] types);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x1B728C0", Offset = "0x1B70EC0", VA = "0x181B728C0")]
	internal extern IntPtr GetMethodsByName_native(IntPtr namePtr, BindingFlags bindingAttr, MemberListType listType);

	[Token(Token = "0x6000EF7")]
	[Address(RVA = "0x1B72620", Offset = "0x1B70C20", VA = "0x181B72620")]
	internal System.Reflection.RuntimeMethodInfo[] GetMethodsByName(string name, BindingFlags bindingAttr, MemberListType listType, System.RuntimeType reflectedType)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EF8")]
	[Address(RVA = "0x1B73840", Offset = "0x1B71E40", VA = "0x181B73840")]
	private extern IntPtr GetPropertiesByName_native(IntPtr name, BindingFlags bindingAttr, MemberListType listType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EF9")]
	[Address(RVA = "0x1B6F280", Offset = "0x1B6D880", VA = "0x181B6F280")]
	private extern IntPtr GetConstructors_native(BindingFlags bindingAttr);

	[Token(Token = "0x6000EFA")]
	[Address(RVA = "0x1B6EFC0", Offset = "0x1B6D5C0", VA = "0x181B6EFC0")]
	private System.Reflection.RuntimeConstructorInfo[] GetConstructors_internal(BindingFlags bindingAttr, System.RuntimeType reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x1B735A0", Offset = "0x1B71BA0", VA = "0x181B735A0")]
	private System.Reflection.RuntimePropertyInfo[] GetPropertiesByName(string name, BindingFlags bindingAttr, MemberListType listType, System.RuntimeType reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x1B74160", Offset = "0x1B72760", VA = "0x181B74160", Slot = "117")]
	protected override TypeCode GetTypeCodeImpl()
	{
		return default(TypeCode);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x1B74150", Offset = "0x1B72750", VA = "0x181B74150")]
	private static extern TypeCode GetTypeCodeImplInternal(Type type);

	[Token(Token = "0x6000EFE")]
	[Address(RVA = "0x1B77CF0", Offset = "0x1B762F0", VA = "0x181B77CF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	private bool IsGenericCOMObjectImpl()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x1B6D780", Offset = "0x1B6BD80", VA = "0x181B6D780")]
	private static extern object CreateInstanceInternal(Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x1B784C0", Offset = "0x1B76AC0", VA = "0x181B784C0")]
	internal extern string getFullName(bool full_name, bool assembly_qualified);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x1B70FB0", Offset = "0x1B6F5B0", VA = "0x181B70FB0")]
	private extern Type[] GetGenericArgumentsInternal(bool runtimeArray);

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x1B71010", Offset = "0x1B6F610", VA = "0x181B71010")]
	private GenericParameterAttributes GetGenericParameterAttributes()
	{
		return default(GenericParameterAttributes);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x1B71160", Offset = "0x1B6F760", VA = "0x181B71160")]
	private extern int GetGenericParameterPosition();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x1B704C0", Offset = "0x1B6EAC0", VA = "0x181B704C0")]
	private extern IntPtr GetEvents_native(IntPtr name, MemberListType listType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x1B70F30", Offset = "0x1B6F530", VA = "0x181B70F30")]
	private extern IntPtr GetFields_native(IntPtr name, BindingFlags bindingAttr, MemberListType listType);

	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x1B70C00", Offset = "0x1B6F200", VA = "0x181B70C00")]
	private System.Reflection.RuntimeFieldInfo[] GetFields_internal(string name, BindingFlags bindingAttr, MemberListType listType, System.RuntimeType reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6000F09")]
	[Address(RVA = "0x1B70240", Offset = "0x1B6E840", VA = "0x181B70240")]
	private System.Reflection.RuntimeEventInfo[] GetEvents_internal(string name, BindingFlags bindingAttr, MemberListType listType, System.RuntimeType reflectedType)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F0A")]
	[Address(RVA = "0x1B712B0", Offset = "0x1B6F8B0", VA = "0x181B712B0", Slot = "120")]
	public override extern Type[] GetInterfaces();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F0B")]
	[Address(RVA = "0x1B73520", Offset = "0x1B71B20", VA = "0x181B73520")]
	private extern IntPtr GetNestedTypes_native(IntPtr name, BindingFlags bindingAttr, MemberListType listType);

	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x1B731E0", Offset = "0x1B717E0", VA = "0x181B731E0")]
	private System.RuntimeType[] GetNestedTypes_internal(string displayName, BindingFlags bindingAttr, MemberListType listType)
	{
		return null;
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x1B71200", Offset = "0x1B6F800", VA = "0x181B71200", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F14")]
	[Address(RVA = "0x1B76EC0", Offset = "0x1B754C0", VA = "0x181B76EC0", Slot = "21")]
	[ComVisible(true)]
	public override bool IsSubclassOf(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F16")]
	[Address(RVA = "0x1B725D0", Offset = "0x1B70BD0", VA = "0x181B725D0", Slot = "103")]
	protected override MethodInfo GetMethodImpl(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConv, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000F17")]
	[Address(RVA = "0x1B72180", Offset = "0x1B70780", VA = "0x181B72180")]
	private MethodInfo GetMethodImplCommon(string name, int genericParameterCount, BindingFlags bindingAttr, Binder binder, CallingConventions callConv, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000F18")]
	[Address(RVA = "0x1B71A80", Offset = "0x1B70080", VA = "0x181B71A80")]
	private ListBuilder<MethodInfo> GetMethodCandidates(string name, int genericParameterCount, BindingFlags bindingAttr, CallingConventions callConv, Type[] types, bool allowPrefixLookup)
	{
		return default(ListBuilder<MethodInfo>);
	}
}
