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
[Token(Token = "0x2000169")]
internal class RuntimeType : TypeInfo, ISerializable, ICloneable
{
	[Token(Token = "0x200016A")]
	internal enum MemberListType
	{
		[Token(Token = "0x400058C")]
		All,
		[Token(Token = "0x400058D")]
		CaseSensitive,
		[Token(Token = "0x400058E")]
		CaseInsensitive,
		[Token(Token = "0x400058F")]
		HandleToInfo
	}

	[Token(Token = "0x200016B")]
	private struct ListBuilder<T> where T : class
	{
		[Token(Token = "0x4000590")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T[] _items;

		[Token(Token = "0x4000591")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _item;

		[Token(Token = "0x4000592")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _count;

		[Token(Token = "0x4000593")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _capacity;

		[Token(Token = "0x1700014D")]
		public T this[int index]
		{
			[Token(Token = "0x6000ECD")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014E")]
		public int Count
		{
			[Token(Token = "0x6000ED0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000ECC")]
		public ListBuilder(int capacity)
		{
		}

		[Token(Token = "0x6000ECE")]
		public T[] ToArray()
		{
			return null;
		}

		[Token(Token = "0x6000ECF")]
		public void CopyTo(object[] array, int index)
		{
		}

		[Token(Token = "0x6000ED1")]
		public void Add(T item)
		{
		}
	}

	[Token(Token = "0x4000576")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly System.RuntimeType ValueType;

	[Token(Token = "0x4000577")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static readonly System.RuntimeType EnumType;

	[Token(Token = "0x4000578")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly System.RuntimeType ObjectType;

	[Token(Token = "0x4000579")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly System.RuntimeType StringType;

	[Token(Token = "0x400057A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly System.RuntimeType DelegateType;

	[Token(Token = "0x400057B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Type[] s_SICtorParamTypes;

	[Token(Token = "0x400057C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal static Func<Type, Type[], Type> MakeTypeBuilderInstantiation;

	[Token(Token = "0x400057D")]
	private const BindingFlags MemberBindingMask = (BindingFlags)255;

	[Token(Token = "0x400057E")]
	private const BindingFlags InvocationMask = BindingFlags.InvokeMethod | BindingFlags.CreateInstance | BindingFlags.GetField | BindingFlags.SetField | BindingFlags.GetProperty | BindingFlags.SetProperty | BindingFlags.PutDispProperty | BindingFlags.PutRefDispProperty;

	[Token(Token = "0x400057F")]
	private const BindingFlags BinderNonCreateInstance = BindingFlags.InvokeMethod | BindingFlags.GetField | BindingFlags.SetField | BindingFlags.GetProperty | BindingFlags.SetProperty;

	[Token(Token = "0x4000580")]
	private const BindingFlags BinderGetSetProperty = BindingFlags.GetProperty | BindingFlags.SetProperty;

	[Token(Token = "0x4000581")]
	private const BindingFlags BinderSetInvokeProperty = BindingFlags.InvokeMethod | BindingFlags.SetProperty;

	[Token(Token = "0x4000582")]
	private const BindingFlags BinderGetSetField = BindingFlags.GetField | BindingFlags.SetField;

	[Token(Token = "0x4000583")]
	private const BindingFlags BinderSetInvokeField = BindingFlags.InvokeMethod | BindingFlags.SetField;

	[Token(Token = "0x4000584")]
	private const BindingFlags BinderNonFieldGetSet = (BindingFlags)16773888;

	[Token(Token = "0x4000585")]
	private const BindingFlags ClassicBindingMask = BindingFlags.InvokeMethod | BindingFlags.GetProperty | BindingFlags.SetProperty | BindingFlags.PutDispProperty | BindingFlags.PutRefDispProperty;

	[Token(Token = "0x4000586")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static System.RuntimeType s_typedRef;

	[NonSerialized]
	[Token(Token = "0x4000587")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private System.MonoTypeInfo type_info;

	[Token(Token = "0x4000588")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal object GenericCache;

	[Token(Token = "0x4000589")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private System.Reflection.RuntimeConstructorInfo m_serializationCtor;

	[Token(Token = "0x400058A")]
	private const int GenericParameterCountAny = -1;

	[Token(Token = "0x17000134")]
	public override Module Module
	{
		[Token(Token = "0x6000E5D")]
		[Address(RVA = "0x5016B40", Offset = "0x5016B40", VA = "0x5016B40", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000135")]
	public override Assembly Assembly
	{
		[Token(Token = "0x6000E5F")]
		[Address(RVA = "0x5016B60", Offset = "0x5016B60", VA = "0x5016B60", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000136")]
	public override RuntimeTypeHandle TypeHandle
	{
		[Token(Token = "0x6000E61")]
		[Address(RVA = "0x5016B80", Offset = "0x5016B80", VA = "0x5016B80", Slot = "114")]
		get
		{
			return default(RuntimeTypeHandle);
		}
	}

	[Token(Token = "0x17000137")]
	public override Type BaseType
	{
		[Token(Token = "0x6000E65")]
		[Address(RVA = "0x5016D30", Offset = "0x5016D30", VA = "0x5016D30", Slot = "116")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000138")]
	public override Type UnderlyingSystemType
	{
		[Token(Token = "0x6000E67")]
		[Address(RVA = "0x5016F40", Offset = "0x5016F40", VA = "0x5016F40", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000139")]
	public override bool IsEnum
	{
		[Token(Token = "0x6000E6F")]
		[Address(RVA = "0x5017090", Offset = "0x5017090", VA = "0x5017090", Slot = "71")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013A")]
	public override GenericParameterAttributes GenericParameterAttributes
	{
		[Token(Token = "0x6000E71")]
		[Address(RVA = "0x5017100", Offset = "0x5017100", VA = "0x5017100", Slot = "53")]
		get
		{
			return default(GenericParameterAttributes);
		}
	}

	[Token(Token = "0x1700013B")]
	internal override bool IsSzArray
	{
		[Token(Token = "0x6000E72")]
		[Address(RVA = "0x5017200", Offset = "0x5017200", VA = "0x5017200", Slot = "129")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013C")]
	public override bool IsGenericTypeDefinition
	{
		[Token(Token = "0x6000E7E")]
		[Address(RVA = "0x50185D0", Offset = "0x50185D0", VA = "0x50185D0", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013D")]
	public override bool IsGenericParameter
	{
		[Token(Token = "0x6000E7F")]
		[Address(RVA = "0x50185E0", Offset = "0x50185E0", VA = "0x50185E0", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013E")]
	public override int GenericParameterPosition
	{
		[Token(Token = "0x6000E80")]
		[Address(RVA = "0x50185F0", Offset = "0x50185F0", VA = "0x50185F0", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013F")]
	public override bool IsGenericType
	{
		[Token(Token = "0x6000E82")]
		[Address(RVA = "0x5018700", Offset = "0x5018700", VA = "0x5018700", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000140")]
	public override bool IsConstructedGenericType
	{
		[Token(Token = "0x6000E83")]
		[Address(RVA = "0x5018710", Offset = "0x5018710", VA = "0x5018710", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000141")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6000E8E")]
		[Address(RVA = "0x501A430", Offset = "0x501A430", VA = "0x501A430", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x17000142")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6000E8F")]
		[Address(RVA = "0x501A470", Offset = "0x501A470", VA = "0x501A470", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000143")]
	public override int MetadataToken
	{
		[Token(Token = "0x6000E90")]
		[Address(RVA = "0x501A490", Offset = "0x501A490", VA = "0x501A490", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000144")]
	public override bool ContainsGenericParameters
	{
		[Token(Token = "0x6000EA4")]
		[Address(RVA = "0x501BB20", Offset = "0x501BB20", VA = "0x501BB20", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000145")]
	public override extern MethodBase DeclaringMethod
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000EB3")]
		[Address(RVA = "0x501BF00", Offset = "0x501BF00", VA = "0x501BF00", Slot = "29")]
		get;
	}

	[Token(Token = "0x17000146")]
	public override string AssemblyQualifiedName
	{
		[Token(Token = "0x6000EBF")]
		[Address(RVA = "0x501BF50", Offset = "0x501BF50", VA = "0x501BF50", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000147")]
	public override extern Type DeclaringType
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000EC0")]
		[Address(RVA = "0x501BF60", Offset = "0x501BF60", VA = "0x501BF60", Slot = "9")]
		get;
	}

	[Token(Token = "0x17000148")]
	public override extern string Name
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000EC1")]
		[Address(RVA = "0x501BF70", Offset = "0x501BF70", VA = "0x501BF70", Slot = "8")]
		get;
	}

	[Token(Token = "0x17000149")]
	public override extern string Namespace
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000EC2")]
		[Address(RVA = "0x501BF80", Offset = "0x501BF80", VA = "0x501BF80", Slot = "24")]
		get;
	}

	[Token(Token = "0x1700014A")]
	public override string FullName
	{
		[Token(Token = "0x6000EC4")]
		[Address(RVA = "0x501C040", Offset = "0x501C040", VA = "0x501C040", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014B")]
	public override bool IsSZArray
	{
		[Token(Token = "0x6000EC5")]
		[Address(RVA = "0x501C130", Offset = "0x501C130", VA = "0x501C130", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700014C")]
	public override bool IsByRefLike
	{
		[Token(Token = "0x6000EC7")]
		[Address(RVA = "0x501C270", Offset = "0x501C270", VA = "0x501C270", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000E3D")]
	[Address(RVA = "0x5011EA0", Offset = "0x5011EA0", VA = "0x5011EA0")]
	internal static System.RuntimeType GetType(string typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6000E3E")]
	[Address(RVA = "0x5011F20", Offset = "0x5011F20", VA = "0x5011F20")]
	private static void ThrowIfTypeNeverValidGenericArgument(System.RuntimeType type)
	{
	}

	[Token(Token = "0x6000E3F")]
	[Address(RVA = "0x5012050", Offset = "0x5012050", VA = "0x5012050")]
	internal static void SanityCheckGenericArguments(System.RuntimeType[] genericArguments, System.RuntimeType[] genericParamters)
	{
	}

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x5012240", Offset = "0x5012240", VA = "0x5012240")]
	private static void SplitName(string fullname, out string name, out string ns)
	{
	}

	[Token(Token = "0x6000E41")]
	[Address(RVA = "0x5012350", Offset = "0x5012350", VA = "0x5012350")]
	internal static BindingFlags FilterPreCalculate(bool isPublic, bool isInherited, bool isStatic)
	{
		return default(BindingFlags);
	}

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x5012380", Offset = "0x5012380", VA = "0x5012380")]
	private static void FilterHelper(BindingFlags bindingFlags, ref string name, bool allowPrefixLookup, out bool prefixLookup, out bool ignoreCase, out MemberListType listType)
	{
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x50124C0", Offset = "0x50124C0", VA = "0x50124C0")]
	private static void FilterHelper(BindingFlags bindingFlags, ref string name, out bool ignoreCase, out MemberListType listType)
	{
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x5012530", Offset = "0x5012530", VA = "0x5012530")]
	private static bool FilterApplyPrefixLookup(MemberInfo memberInfo, string name, bool ignoreCase)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x50125A0", Offset = "0x50125A0", VA = "0x50125A0")]
	private static bool FilterApplyBase(MemberInfo memberInfo, BindingFlags bindingFlags, bool isPublic, bool isNonProtectedInternal, bool isStatic, string name, bool prefixLookup)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x5012800", Offset = "0x5012800", VA = "0x5012800")]
	private static bool FilterApplyType(Type type, BindingFlags bindingFlags, string name, bool prefixLookup, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x5012900", Offset = "0x5012900", VA = "0x5012900")]
	private static bool FilterApplyMethodInfo(System.Reflection.RuntimeMethodInfo method, BindingFlags bindingFlags, CallingConventions callConv, Type[] argumentTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x5012C00", Offset = "0x5012C00", VA = "0x5012C00")]
	private static bool FilterApplyConstructorInfo(System.Reflection.RuntimeConstructorInfo constructor, BindingFlags bindingFlags, CallingConventions callConv, Type[] argumentTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x5012980", Offset = "0x5012980", VA = "0x5012980")]
	private static bool FilterApplyMethodBase(MethodBase methodBase, BindingFlags methodFlags, BindingFlags bindingFlags, CallingConventions callConv, Type[] argumentTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x5012C80", Offset = "0x5012C80", VA = "0x5012C80")]
	internal RuntimeType()
	{
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x5012CC0", Offset = "0x5012CC0", VA = "0x5012CC0")]
	private ListBuilder<MethodInfo> GetMethodCandidates(string name, BindingFlags bindingAttr, CallingConventions callConv, Type[] types, int genericParamCount, bool allowPrefixLookup)
	{
		return default(ListBuilder<MethodInfo>);
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x5013330", Offset = "0x5013330", VA = "0x5013330")]
	private ListBuilder<ConstructorInfo> GetConstructorCandidates(string name, BindingFlags bindingAttr, CallingConventions callConv, Type[] types, bool allowPrefixLookup)
	{
		return default(ListBuilder<ConstructorInfo>);
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x50139D0", Offset = "0x50139D0", VA = "0x50139D0")]
	private ListBuilder<PropertyInfo> GetPropertyCandidates(string name, BindingFlags bindingAttr, Type[] types, bool allowPrefixLookup)
	{
		return default(ListBuilder<PropertyInfo>);
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x5014040", Offset = "0x5014040", VA = "0x5014040")]
	private ListBuilder<EventInfo> GetEventCandidates(string name, BindingFlags bindingAttr, bool allowPrefixLookup)
	{
		return default(ListBuilder<EventInfo>);
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x50145C0", Offset = "0x50145C0", VA = "0x50145C0")]
	private ListBuilder<FieldInfo> GetFieldCandidates(string name, BindingFlags bindingAttr, bool allowPrefixLookup)
	{
		return default(ListBuilder<FieldInfo>);
	}

	[Token(Token = "0x6000E50")]
	[Address(RVA = "0x5014BC0", Offset = "0x5014BC0", VA = "0x5014BC0")]
	private ListBuilder<Type> GetNestedTypeCandidates(string fullname, BindingFlags bindingAttr, bool allowPrefixLookup)
	{
		return default(ListBuilder<Type>);
	}

	[Token(Token = "0x6000E51")]
	[Address(RVA = "0x5015200", Offset = "0x5015200", VA = "0x5015200", Slot = "104")]
	public override MethodInfo[] GetMethods(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E52")]
	[Address(RVA = "0x5015290", Offset = "0x5015290", VA = "0x5015290", Slot = "84")]
	[ComVisible(true)]
	public override ConstructorInfo[] GetConstructors(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x5015320", Offset = "0x5015320", VA = "0x5015320", Slot = "113")]
	public override PropertyInfo[] GetProperties(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x5015390", Offset = "0x5015390", VA = "0x5015390", Slot = "87")]
	public override EventInfo[] GetEvents(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x5015400", Offset = "0x5015400", VA = "0x5015400", Slot = "91")]
	public override FieldInfo[] GetFields(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E56")]
	[Address(RVA = "0x5015470", Offset = "0x5015470", VA = "0x5015470", Slot = "95")]
	public override MemberInfo[] GetMembers(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x5015760", Offset = "0x5015760", VA = "0x5015760", Slot = "82")]
	protected override ConstructorInfo GetConstructorImpl(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x5015990", Offset = "0x5015990", VA = "0x5015990", Slot = "112")]
	protected override PropertyInfo GetPropertyImpl(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x5015C40", Offset = "0x5015C40", VA = "0x5015C40", Slot = "86")]
	public override EventInfo GetEvent(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x5015EC0", Offset = "0x5015EC0", VA = "0x5015EC0", Slot = "89")]
	public override FieldInfo GetField(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x50162F0", Offset = "0x50162F0", VA = "0x50162F0", Slot = "105")]
	public override Type GetNestedType(string fullname, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E5C")]
	[Address(RVA = "0x50165E0", Offset = "0x50165E0", VA = "0x50165E0", Slot = "94")]
	public override MemberInfo[] GetMember(string name, MemberTypes type, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x5016B50", Offset = "0x5016B50", VA = "0x5016B50")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x5016B70", Offset = "0x5016B70", VA = "0x5016B70")]
	internal System.Reflection.RuntimeAssembly GetRuntimeAssembly()
	{
		return null;
	}

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x5016BA0", Offset = "0x5016BA0", VA = "0x5016BA0", Slot = "119")]
	public override bool IsInstanceOfType(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x5016BB0", Offset = "0x5016BB0", VA = "0x5016BB0", Slot = "22")]
	public override bool IsAssignableFrom(Type c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E64")]
	[Address(RVA = "0x5016C80", Offset = "0x5016C80", VA = "0x5016C80", Slot = "120")]
	public override bool IsEquivalentTo(Type other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E66")]
	[Address(RVA = "0x5016D40", Offset = "0x5016D40", VA = "0x5016D40")]
	private System.RuntimeType GetBaseType()
	{
		return null;
	}

	[Token(Token = "0x6000E68")]
	[Address(RVA = "0x5016F50", Offset = "0x5016F50", VA = "0x5016F50", Slot = "56")]
	protected override TypeAttributes GetAttributeFlagsImpl()
	{
		return default(TypeAttributes);
	}

	[Token(Token = "0x6000E69")]
	[Address(RVA = "0x5016F60", Offset = "0x5016F60", VA = "0x5016F60", Slot = "69")]
	protected override bool IsContextfulImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6A")]
	[Address(RVA = "0x5016F70", Offset = "0x5016F70", VA = "0x5016F70", Slot = "34")]
	protected override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6B")]
	[Address(RVA = "0x5016F80", Offset = "0x5016F80", VA = "0x5016F80", Slot = "75")]
	protected override bool IsPrimitiveImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6C")]
	[Address(RVA = "0x5016F90", Offset = "0x5016F90", VA = "0x5016F90", Slot = "36")]
	protected override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6D")]
	[Address(RVA = "0x5016FA0", Offset = "0x5016FA0", VA = "0x5016FA0", Slot = "67")]
	protected override bool IsCOMObjectImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6E")]
	[Address(RVA = "0x5016FB0", Offset = "0x5016FB0", VA = "0x5016FB0", Slot = "77")]
	protected override bool IsValueTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E70")]
	[Address(RVA = "0x50170F0", Offset = "0x50170F0", VA = "0x50170F0", Slot = "46")]
	protected override bool HasElementTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E73")]
	[Address(RVA = "0x5017210", Offset = "0x5017210", VA = "0x5017210", Slot = "32")]
	protected override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E74")]
	[Address(RVA = "0x5017220", Offset = "0x5017220", VA = "0x5017220", Slot = "48")]
	public override int GetArrayRank()
	{
		return default(int);
	}

	[Token(Token = "0x6000E75")]
	[Address(RVA = "0x50172A0", Offset = "0x50172A0", VA = "0x50172A0", Slot = "47")]
	public override Type GetElementType()
	{
		return null;
	}

	[Token(Token = "0x6000E76")]
	[Address(RVA = "0x50172B0", Offset = "0x50172B0", VA = "0x50172B0", Slot = "18")]
	public override string[] GetEnumNames()
	{
		return null;
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x50173E0", Offset = "0x50173E0", VA = "0x50173E0", Slot = "122")]
	public override Array GetEnumValues()
	{
		return null;
	}

	[Token(Token = "0x6000E78")]
	[Address(RVA = "0x5017590", Offset = "0x5017590", VA = "0x5017590", Slot = "121")]
	public override Type GetEnumUnderlyingType()
	{
		return null;
	}

	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x5017640", Offset = "0x5017640", VA = "0x5017640", Slot = "16")]
	public override bool IsEnumDefined(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E7A")]
	[Address(RVA = "0x5017BD0", Offset = "0x5017BD0", VA = "0x5017BD0", Slot = "17")]
	public override string GetEnumName(object value)
	{
		return null;
	}

	[Token(Token = "0x6000E7B")]
	[Address(RVA = "0x5017DD0", Offset = "0x5017DD0", VA = "0x5017DD0")]
	internal System.RuntimeType[] GetGenericArgumentsInternal()
	{
		return null;
	}

	[Token(Token = "0x6000E7C")]
	[Address(RVA = "0x5017E50", Offset = "0x5017E50", VA = "0x5017E50", Slot = "51")]
	public override Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x6000E7D")]
	[Address(RVA = "0x5017F20", Offset = "0x5017F20", VA = "0x5017F20", Slot = "126")]
	public override Type MakeGenericType(params Type[] instantiation)
	{
		return null;
	}

	[Token(Token = "0x6000E81")]
	[Address(RVA = "0x5018680", Offset = "0x5018680", VA = "0x5018680", Slot = "49")]
	public override Type GetGenericTypeDefinition()
	{
		return null;
	}

	[Token(Token = "0x6000E84")]
	[Address(RVA = "0x5018750", Offset = "0x5018750", VA = "0x5018750", Slot = "117")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public override object InvokeMember(string name, BindingFlags bindingFlags, Binder binder, object target, object[] providedArgs, ParameterModifier[] modifiers, CultureInfo culture, string[] namedParams)
	{
		return null;
	}

	[Token(Token = "0x6000E85")]
	[Address(RVA = "0x5019E40", Offset = "0x5019E40", VA = "0x5019E40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E86")]
	[Address(RVA = "0x50013E0", Offset = "0x50013E0", VA = "0x50013E0")]
	public static bool operator ==(System.RuntimeType left, System.RuntimeType right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E87")]
	[Address(RVA = "0x50043E0", Offset = "0x50043E0", VA = "0x50043E0")]
	public static bool operator !=(System.RuntimeType left, System.RuntimeType right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E88")]
	[Address(RVA = "0x5019E50", Offset = "0x5019E50", VA = "0x5019E50", Slot = "136")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000E89")]
	[Address(RVA = "0x5019E60", Offset = "0x5019E60", VA = "0x5019E60", Slot = "135")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000E8A")]
	[Address(RVA = "0x5019EC0", Offset = "0x5019EC0", VA = "0x5019EC0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x5019F50", Offset = "0x5019F50", VA = "0x5019F50", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000E8C")]
	[Address(RVA = "0x501A0D0", Offset = "0x501A0D0", VA = "0x501A0D0", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x501A250", Offset = "0x501A250", VA = "0x501A250", Slot = "130")]
	internal override string FormatTypeName(bool serialization)
	{
		return null;
	}

	[Token(Token = "0x6000E91")]
	[Address(RVA = "0x501A4A0", Offset = "0x501A4A0", VA = "0x501A4A0")]
	private void CreateInstanceCheckThis()
	{
	}

	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x50013F0", Offset = "0x50013F0", VA = "0x50013F0")]
	internal object CreateInstanceImpl(BindingFlags bindingAttr, Binder binder, object[] args, CultureInfo culture, object[] activationAttributes, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x5002210", Offset = "0x5002210", VA = "0x5002210")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	internal object CreateInstanceDefaultCtor(bool publicOnly, bool skipCheckThis, bool fillCache, bool wrapExceptions, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x501A6E0", Offset = "0x501A6E0", VA = "0x501A6E0")]
	internal System.Reflection.RuntimeConstructorInfo GetDefaultConstructor()
	{
		return null;
	}

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x5019D70", Offset = "0x5019D70", VA = "0x5019D70")]
	private string GetDefaultMemberName()
	{
		return null;
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x501A8A0", Offset = "0x501A8A0", VA = "0x501A8A0")]
	internal System.Reflection.RuntimeConstructorInfo GetSerializationCtor()
	{
		return null;
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x501A6B0", Offset = "0x501A6B0", VA = "0x501A6B0")]
	internal object CreateInstanceSlow(bool publicOnly, bool wrapExceptions, bool skipCheckThis, bool fillCache)
	{
		return null;
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x501AAD0", Offset = "0x501AAD0", VA = "0x501AAD0")]
	private object CreateInstanceMono(bool nonPublic, bool wrapExceptions)
	{
		return null;
	}

	[Token(Token = "0x6000E99")]
	[Address(RVA = "0x501AD90", Offset = "0x501AD90", VA = "0x501AD90")]
	internal object CheckValue(object value, Binder binder, CultureInfo culture, BindingFlags invokeAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x501AEC0", Offset = "0x501AEC0", VA = "0x501AEC0")]
	private object TryConvertToType(object value, ref bool failed)
	{
		return null;
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x501B0E0", Offset = "0x501B0E0", VA = "0x501B0E0")]
	private static object IsConvertibleToPrimitiveType(object value, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000E9C")]
	[Address(RVA = "0x501A3D0", Offset = "0x501A3D0", VA = "0x501A3D0")]
	private string GetCachedName(System.TypeNameKind kind)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x501B950", Offset = "0x501B950", VA = "0x501B950")]
	private extern Type make_array_type(int rank);

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x501B960", Offset = "0x501B960", VA = "0x501B960", Slot = "123")]
	public override Type MakeArrayType()
	{
		return null;
	}

	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x501B970", Offset = "0x501B970", VA = "0x501B970", Slot = "124")]
	public override Type MakeArrayType(int rank)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EA0")]
	[Address(RVA = "0x501B9C0", Offset = "0x501B9C0", VA = "0x501B9C0")]
	private extern Type make_byref_type();

	[Token(Token = "0x6000EA1")]
	[Address(RVA = "0x501B9D0", Offset = "0x501B9D0", VA = "0x501B9D0", Slot = "125")]
	public override Type MakeByRefType()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x501BA30", Offset = "0x501BA30", VA = "0x501BA30")]
	private static extern Type MakePointerType(Type type);

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x501BA40", Offset = "0x501BA40", VA = "0x501BA40", Slot = "127")]
	public override Type MakePointerType()
	{
		return null;
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x501BC20", Offset = "0x501BC20", VA = "0x501BC20", Slot = "54")]
	public override Type[] GetGenericParameterConstraints()
	{
		return null;
	}

	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x501BD20", Offset = "0x501BD20", VA = "0x501BD20")]
	internal static object CreateInstanceForAnotherGenericParameter(Type genericType, System.RuntimeType genericArgument)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x50185C0", Offset = "0x50185C0", VA = "0x50185C0")]
	private static extern Type MakeGenericType(Type gt, Type[] types);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x501BE40", Offset = "0x501BE40", VA = "0x501BE40")]
	internal extern IntPtr GetMethodsByName_native(IntPtr namePtr, BindingFlags bindingAttr, MemberListType listType);

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x5012FD0", Offset = "0x5012FD0", VA = "0x5012FD0")]
	internal System.Reflection.RuntimeMethodInfo[] GetMethodsByName(string name, BindingFlags bindingAttr, MemberListType listType, System.RuntimeType reflectedType)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EAA")]
	[Address(RVA = "0x501BE50", Offset = "0x501BE50", VA = "0x501BE50")]
	private extern IntPtr GetPropertiesByName_native(IntPtr name, BindingFlags bindingAttr, MemberListType listType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EAB")]
	[Address(RVA = "0x501BE60", Offset = "0x501BE60", VA = "0x501BE60")]
	private extern IntPtr GetConstructors_native(BindingFlags bindingAttr);

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x5013750", Offset = "0x5013750", VA = "0x5013750")]
	private System.Reflection.RuntimeConstructorInfo[] GetConstructors_internal(BindingFlags bindingAttr, System.RuntimeType reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x5013CE0", Offset = "0x5013CE0", VA = "0x5013CE0")]
	private System.Reflection.RuntimePropertyInfo[] GetPropertiesByName(string name, BindingFlags bindingAttr, MemberListType listType, System.RuntimeType reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x501BE70", Offset = "0x501BE70", VA = "0x501BE70", Slot = "115")]
	protected override TypeCode GetTypeCodeImpl()
	{
		return default(TypeCode);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x501BED0", Offset = "0x501BED0", VA = "0x501BED0")]
	private static extern TypeCode GetTypeCodeImplInternal(Type type);

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x501BEE0", Offset = "0x501BEE0", VA = "0x501BEE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x501A6A0", Offset = "0x501A6A0", VA = "0x501A6A0")]
	private bool IsGenericCOMObjectImpl()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x501AD80", Offset = "0x501AD80", VA = "0x501AD80")]
	private static extern object CreateInstanceInternal(Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x501BEF0", Offset = "0x501BEF0", VA = "0x501BEF0")]
	internal extern string getFullName(bool full_name, bool assembly_qualified);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x5017E40", Offset = "0x5017E40", VA = "0x5017E40")]
	private extern Type[] GetGenericArgumentsInternal(bool runtimeArray);

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x50171C0", Offset = "0x50171C0", VA = "0x50171C0")]
	private GenericParameterAttributes GetGenericParameterAttributes()
	{
		return default(GenericParameterAttributes);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x5018670", Offset = "0x5018670", VA = "0x5018670")]
	private extern int GetGenericParameterPosition();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x501BF10", Offset = "0x501BF10", VA = "0x501BF10")]
	private extern IntPtr GetEvents_native(IntPtr name, MemberListType listType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EB9")]
	[Address(RVA = "0x501BF20", Offset = "0x501BF20", VA = "0x501BF20")]
	private extern IntPtr GetFields_native(IntPtr name, BindingFlags bindingAttr, MemberListType listType);

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x5014860", Offset = "0x5014860", VA = "0x5014860")]
	private System.Reflection.RuntimeFieldInfo[] GetFields_internal(string name, BindingFlags bindingAttr, MemberListType listType, System.RuntimeType reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x50142E0", Offset = "0x50142E0", VA = "0x50142E0")]
	private System.Reflection.RuntimeEventInfo[] GetEvents_internal(string name, BindingFlags bindingAttr, MemberListType listType, System.RuntimeType reflectedType)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x501BF30", Offset = "0x501BF30", VA = "0x501BF30", Slot = "118")]
	public override extern Type[] GetInterfaces();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x501BF40", Offset = "0x501BF40", VA = "0x501BF40")]
	private extern IntPtr GetNestedTypes_native(IntPtr name, BindingFlags bindingAttr, MemberListType listType);

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x5014DB0", Offset = "0x5014DB0", VA = "0x5014DB0")]
	private System.RuntimeType[] GetNestedTypes_internal(string displayName, BindingFlags bindingAttr, MemberListType listType)
	{
		return null;
	}

	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x501BF90", Offset = "0x501BF90", VA = "0x501BF90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x501C190", Offset = "0x501C190", VA = "0x501C190", Slot = "21")]
	[ComVisible(true)]
	public override bool IsSubclassOf(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x501C280", Offset = "0x501C280", VA = "0x501C280", Slot = "102")]
	protected override MethodInfo GetMethodImpl(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConv, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x501C2B0", Offset = "0x501C2B0", VA = "0x501C2B0")]
	private MethodInfo GetMethodImplCommon(string name, int genericParameterCount, BindingFlags bindingAttr, Binder binder, CallingConventions callConv, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x501C560", Offset = "0x501C560", VA = "0x501C560")]
	private ListBuilder<MethodInfo> GetMethodCandidates(string name, int genericParameterCount, BindingFlags bindingAttr, CallingConventions callConv, Type[] types, bool allowPrefixLookup)
	{
		return default(ListBuilder<MethodInfo>);
	}
}
