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
[Token(Token = "0x200016B")]
internal class RuntimeType : TypeInfo, ISerializable, ICloneable
{
	[Token(Token = "0x200016C")]
	internal enum MemberListType
	{
		[Token(Token = "0x400054B")]
		All,
		[Token(Token = "0x400054C")]
		CaseSensitive,
		[Token(Token = "0x400054D")]
		CaseInsensitive,
		[Token(Token = "0x400054E")]
		HandleToInfo
	}

	[Token(Token = "0x200016D")]
	private struct ListBuilder<T> where T : class
	{
		[Token(Token = "0x400054F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T[] _items;

		[Token(Token = "0x4000550")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _item;

		[Token(Token = "0x4000551")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _count;

		[Token(Token = "0x4000552")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _capacity;

		[Token(Token = "0x1700014E")]
		public T this[int index]
		{
			[Token(Token = "0x6000EF5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014F")]
		public int Count
		{
			[Token(Token = "0x6000EF8")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000EF4")]
		public ListBuilder(int capacity)
		{
		}

		[Token(Token = "0x6000EF6")]
		public T[] ToArray()
		{
			return null;
		}

		[Token(Token = "0x6000EF7")]
		public void CopyTo(object[] array, int index)
		{
		}

		[Token(Token = "0x6000EF9")]
		public void Add(T item)
		{
		}
	}

	[Token(Token = "0x4000535")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly System.RuntimeType ValueType;

	[Token(Token = "0x4000536")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static readonly System.RuntimeType EnumType;

	[Token(Token = "0x4000537")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly System.RuntimeType ObjectType;

	[Token(Token = "0x4000538")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly System.RuntimeType StringType;

	[Token(Token = "0x4000539")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly System.RuntimeType DelegateType;

	[Token(Token = "0x400053A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Type[] s_SICtorParamTypes;

	[Token(Token = "0x400053B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal static Func<Type, Type[], Type> MakeTypeBuilderInstantiation;

	[Token(Token = "0x400053C")]
	private const BindingFlags MemberBindingMask = (BindingFlags)255;

	[Token(Token = "0x400053D")]
	private const BindingFlags InvocationMask = BindingFlags.InvokeMethod | BindingFlags.CreateInstance | BindingFlags.GetField | BindingFlags.SetField | BindingFlags.GetProperty | BindingFlags.SetProperty | BindingFlags.PutDispProperty | BindingFlags.PutRefDispProperty;

	[Token(Token = "0x400053E")]
	private const BindingFlags BinderNonCreateInstance = BindingFlags.InvokeMethod | BindingFlags.GetField | BindingFlags.SetField | BindingFlags.GetProperty | BindingFlags.SetProperty;

	[Token(Token = "0x400053F")]
	private const BindingFlags BinderGetSetProperty = BindingFlags.GetProperty | BindingFlags.SetProperty;

	[Token(Token = "0x4000540")]
	private const BindingFlags BinderSetInvokeProperty = BindingFlags.InvokeMethod | BindingFlags.SetProperty;

	[Token(Token = "0x4000541")]
	private const BindingFlags BinderGetSetField = BindingFlags.GetField | BindingFlags.SetField;

	[Token(Token = "0x4000542")]
	private const BindingFlags BinderSetInvokeField = BindingFlags.InvokeMethod | BindingFlags.SetField;

	[Token(Token = "0x4000543")]
	private const BindingFlags BinderNonFieldGetSet = (BindingFlags)16773888;

	[Token(Token = "0x4000544")]
	private const BindingFlags ClassicBindingMask = BindingFlags.InvokeMethod | BindingFlags.GetProperty | BindingFlags.SetProperty | BindingFlags.PutDispProperty | BindingFlags.PutRefDispProperty;

	[Token(Token = "0x4000545")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static System.RuntimeType s_typedRef;

	[NonSerialized]
	[Token(Token = "0x4000546")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private System.MonoTypeInfo type_info;

	[Token(Token = "0x4000547")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal object GenericCache;

	[Token(Token = "0x4000548")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private System.Reflection.RuntimeConstructorInfo m_serializationCtor;

	[Token(Token = "0x4000549")]
	private const int GenericParameterCountAny = -1;

	[Token(Token = "0x17000135")]
	public override Module Module
	{
		[Token(Token = "0x6000E85")]
		[Address(RVA = "0x5500490", Offset = "0x54FF490", VA = "0x5500490", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000136")]
	public override Assembly Assembly
	{
		[Token(Token = "0x6000E87")]
		[Address(RVA = "0x55004B0", Offset = "0x54FF4B0", VA = "0x55004B0", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000137")]
	public override RuntimeTypeHandle TypeHandle
	{
		[Token(Token = "0x6000E89")]
		[Address(RVA = "0x55004D0", Offset = "0x54FF4D0", VA = "0x55004D0", Slot = "116")]
		get
		{
			return default(RuntimeTypeHandle);
		}
	}

	[Token(Token = "0x17000138")]
	public override Type BaseType
	{
		[Token(Token = "0x6000E8D")]
		[Address(RVA = "0x5500670", Offset = "0x54FF670", VA = "0x5500670", Slot = "118")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000139")]
	public override Type UnderlyingSystemType
	{
		[Token(Token = "0x6000E8F")]
		[Address(RVA = "0x5500880", Offset = "0x54FF880", VA = "0x5500880", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013A")]
	public override bool IsEnum
	{
		[Token(Token = "0x6000E97")]
		[Address(RVA = "0x55009D0", Offset = "0x54FF9D0", VA = "0x55009D0", Slot = "72")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013B")]
	public override GenericParameterAttributes GenericParameterAttributes
	{
		[Token(Token = "0x6000E99")]
		[Address(RVA = "0x5500A40", Offset = "0x54FFA40", VA = "0x5500A40", Slot = "53")]
		get
		{
			return default(GenericParameterAttributes);
		}
	}

	[Token(Token = "0x1700013C")]
	internal override bool IsSzArray
	{
		[Token(Token = "0x6000E9A")]
		[Address(RVA = "0x5500B40", Offset = "0x54FFB40", VA = "0x5500B40", Slot = "131")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013D")]
	public override bool IsGenericTypeDefinition
	{
		[Token(Token = "0x6000EA6")]
		[Address(RVA = "0x5501EC0", Offset = "0x5500EC0", VA = "0x5501EC0", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013E")]
	public override bool IsGenericParameter
	{
		[Token(Token = "0x6000EA7")]
		[Address(RVA = "0x5501ED0", Offset = "0x5500ED0", VA = "0x5501ED0", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013F")]
	public override int GenericParameterPosition
	{
		[Token(Token = "0x6000EA8")]
		[Address(RVA = "0x5501EE0", Offset = "0x5500EE0", VA = "0x5501EE0", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000140")]
	public override bool IsGenericType
	{
		[Token(Token = "0x6000EAA")]
		[Address(RVA = "0x5501FF0", Offset = "0x5500FF0", VA = "0x5501FF0", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000141")]
	public override bool IsConstructedGenericType
	{
		[Token(Token = "0x6000EAB")]
		[Address(RVA = "0x5502000", Offset = "0x5501000", VA = "0x5502000", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000142")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6000EB6")]
		[Address(RVA = "0x5503B80", Offset = "0x5502B80", VA = "0x5503B80", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x17000143")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6000EB7")]
		[Address(RVA = "0x5503BC0", Offset = "0x5502BC0", VA = "0x5503BC0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000144")]
	public override int MetadataToken
	{
		[Token(Token = "0x6000EB8")]
		[Address(RVA = "0x5503BE0", Offset = "0x5502BE0", VA = "0x5503BE0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000145")]
	public override bool ContainsGenericParameters
	{
		[Token(Token = "0x6000ECC")]
		[Address(RVA = "0x5504FF0", Offset = "0x5503FF0", VA = "0x5504FF0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000146")]
	public override extern MethodBase DeclaringMethod
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000EDB")]
		[Address(RVA = "0x55053E0", Offset = "0x55043E0", VA = "0x55053E0", Slot = "29")]
		get;
	}

	[Token(Token = "0x17000147")]
	public override string AssemblyQualifiedName
	{
		[Token(Token = "0x6000EE7")]
		[Address(RVA = "0x5505430", Offset = "0x5504430", VA = "0x5505430", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000148")]
	public override extern Type DeclaringType
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000EE8")]
		[Address(RVA = "0x5505440", Offset = "0x5504440", VA = "0x5505440", Slot = "9")]
		get;
	}

	[Token(Token = "0x17000149")]
	public override extern string Name
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000EE9")]
		[Address(RVA = "0x5505450", Offset = "0x5504450", VA = "0x5505450", Slot = "8")]
		get;
	}

	[Token(Token = "0x1700014A")]
	public override extern string Namespace
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000EEA")]
		[Address(RVA = "0x5505460", Offset = "0x5504460", VA = "0x5505460", Slot = "24")]
		get;
	}

	[Token(Token = "0x1700014B")]
	public override string FullName
	{
		[Token(Token = "0x6000EEC")]
		[Address(RVA = "0x5505520", Offset = "0x5504520", VA = "0x5505520", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014C")]
	public override bool IsSZArray
	{
		[Token(Token = "0x6000EED")]
		[Address(RVA = "0x5505610", Offset = "0x5504610", VA = "0x5505610", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700014D")]
	public override bool IsByRefLike
	{
		[Token(Token = "0x6000EEF")]
		[Address(RVA = "0x5505750", Offset = "0x5504750", VA = "0x5505750", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000E65")]
	[Address(RVA = "0x54FBCD0", Offset = "0x54FACD0", VA = "0x54FBCD0")]
	internal static System.RuntimeType GetType(string typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6000E66")]
	[Address(RVA = "0x54FBD50", Offset = "0x54FAD50", VA = "0x54FBD50")]
	private static void ThrowIfTypeNeverValidGenericArgument(System.RuntimeType type)
	{
	}

	[Token(Token = "0x6000E67")]
	[Address(RVA = "0x54FBE80", Offset = "0x54FAE80", VA = "0x54FBE80")]
	internal static void SanityCheckGenericArguments(System.RuntimeType[] genericArguments, System.RuntimeType[] genericParamters)
	{
	}

	[Token(Token = "0x6000E68")]
	[Address(RVA = "0x54FC070", Offset = "0x54FB070", VA = "0x54FC070")]
	private static void SplitName(string fullname, out string name, out string ns)
	{
	}

	[Token(Token = "0x6000E69")]
	[Address(RVA = "0x54FC180", Offset = "0x54FB180", VA = "0x54FC180")]
	internal static BindingFlags FilterPreCalculate(bool isPublic, bool isInherited, bool isStatic)
	{
		return default(BindingFlags);
	}

	[Token(Token = "0x6000E6A")]
	[Address(RVA = "0x54FC1B0", Offset = "0x54FB1B0", VA = "0x54FC1B0")]
	private static void FilterHelper(BindingFlags bindingFlags, ref string name, bool allowPrefixLookup, out bool prefixLookup, out bool ignoreCase, out MemberListType listType)
	{
	}

	[Token(Token = "0x6000E6B")]
	[Address(RVA = "0x54FC2D0", Offset = "0x54FB2D0", VA = "0x54FC2D0")]
	private static void FilterHelper(BindingFlags bindingFlags, ref string name, out bool ignoreCase, out MemberListType listType)
	{
	}

	[Token(Token = "0x6000E6C")]
	[Address(RVA = "0x54FC340", Offset = "0x54FB340", VA = "0x54FC340")]
	private static bool FilterApplyPrefixLookup(MemberInfo memberInfo, string name, bool ignoreCase)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6D")]
	[Address(RVA = "0x54FC3D0", Offset = "0x54FB3D0", VA = "0x54FC3D0")]
	private static bool FilterApplyBase(MemberInfo memberInfo, BindingFlags bindingFlags, bool isPublic, bool isNonProtectedInternal, bool isStatic, string name, bool prefixLookup)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6E")]
	[Address(RVA = "0x54FC600", Offset = "0x54FB600", VA = "0x54FC600")]
	private static bool FilterApplyType(Type type, BindingFlags bindingFlags, string name, bool prefixLookup, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6F")]
	[Address(RVA = "0x54FC700", Offset = "0x54FB700", VA = "0x54FC700")]
	private static bool FilterApplyMethodInfo(System.Reflection.RuntimeMethodInfo method, BindingFlags bindingFlags, CallingConventions callConv, Type[] argumentTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E70")]
	[Address(RVA = "0x54FCA00", Offset = "0x54FBA00", VA = "0x54FCA00")]
	private static bool FilterApplyConstructorInfo(System.Reflection.RuntimeConstructorInfo constructor, BindingFlags bindingFlags, CallingConventions callConv, Type[] argumentTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E71")]
	[Address(RVA = "0x54FC780", Offset = "0x54FB780", VA = "0x54FC780")]
	private static bool FilterApplyMethodBase(MethodBase methodBase, BindingFlags methodFlags, BindingFlags bindingFlags, CallingConventions callConv, Type[] argumentTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E72")]
	[Address(RVA = "0x54FCA80", Offset = "0x54FBA80", VA = "0x54FCA80")]
	internal RuntimeType()
	{
	}

	[Token(Token = "0x6000E73")]
	[Address(RVA = "0x54FCAC0", Offset = "0x54FBAC0", VA = "0x54FCAC0")]
	private ListBuilder<MethodInfo> GetMethodCandidates(string name, BindingFlags bindingAttr, CallingConventions callConv, Type[] types, int genericParamCount, bool allowPrefixLookup)
	{
		return default(ListBuilder<MethodInfo>);
	}

	[Token(Token = "0x6000E74")]
	[Address(RVA = "0x54FD080", Offset = "0x54FC080", VA = "0x54FD080")]
	private ListBuilder<ConstructorInfo> GetConstructorCandidates(string name, BindingFlags bindingAttr, CallingConventions callConv, Type[] types, bool allowPrefixLookup)
	{
		return default(ListBuilder<ConstructorInfo>);
	}

	[Token(Token = "0x6000E75")]
	[Address(RVA = "0x54FD690", Offset = "0x54FC690", VA = "0x54FD690")]
	private ListBuilder<PropertyInfo> GetPropertyCandidates(string name, BindingFlags bindingAttr, Type[] types, bool allowPrefixLookup)
	{
		return default(ListBuilder<PropertyInfo>);
	}

	[Token(Token = "0x6000E76")]
	[Address(RVA = "0x54FDD60", Offset = "0x54FCD60", VA = "0x54FDD60")]
	private ListBuilder<EventInfo> GetEventCandidates(string name, BindingFlags bindingAttr, bool allowPrefixLookup)
	{
		return default(ListBuilder<EventInfo>);
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x54FE220", Offset = "0x54FD220", VA = "0x54FE220")]
	private ListBuilder<FieldInfo> GetFieldCandidates(string name, BindingFlags bindingAttr, bool allowPrefixLookup)
	{
		return default(ListBuilder<FieldInfo>);
	}

	[Token(Token = "0x6000E78")]
	[Address(RVA = "0x54FE750", Offset = "0x54FD750", VA = "0x54FE750")]
	private ListBuilder<Type> GetNestedTypeCandidates(string fullname, BindingFlags bindingAttr, bool allowPrefixLookup)
	{
		return default(ListBuilder<Type>);
	}

	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x54FECE0", Offset = "0x54FDCE0", VA = "0x54FECE0", Slot = "105")]
	public override MethodInfo[] GetMethods(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E7A")]
	[Address(RVA = "0x54FED60", Offset = "0x54FDD60", VA = "0x54FED60", Slot = "85")]
	[ComVisible(true)]
	public override ConstructorInfo[] GetConstructors(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E7B")]
	[Address(RVA = "0x54FEDE0", Offset = "0x54FDDE0", VA = "0x54FEDE0", Slot = "115")]
	public override PropertyInfo[] GetProperties(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E7C")]
	[Address(RVA = "0x54FEE50", Offset = "0x54FDE50", VA = "0x54FEE50", Slot = "88")]
	public override EventInfo[] GetEvents(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E7D")]
	[Address(RVA = "0x54FEEC0", Offset = "0x54FDEC0", VA = "0x54FEEC0", Slot = "92")]
	public override FieldInfo[] GetFields(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E7E")]
	[Address(RVA = "0x54FEF30", Offset = "0x54FDF30", VA = "0x54FEF30", Slot = "96")]
	public override MemberInfo[] GetMembers(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E7F")]
	[Address(RVA = "0x54FF210", Offset = "0x54FE210", VA = "0x54FF210", Slot = "83")]
	protected override ConstructorInfo GetConstructorImpl(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000E80")]
	[Address(RVA = "0x54FF430", Offset = "0x54FE430", VA = "0x54FF430", Slot = "113")]
	protected override PropertyInfo GetPropertyImpl(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000E81")]
	[Address(RVA = "0x54FF6E0", Offset = "0x54FE6E0", VA = "0x54FF6E0", Slot = "87")]
	public override EventInfo GetEvent(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E82")]
	[Address(RVA = "0x54FF950", Offset = "0x54FE950", VA = "0x54FF950", Slot = "90")]
	public override FieldInfo GetField(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E83")]
	[Address(RVA = "0x54FFD50", Offset = "0x54FED50", VA = "0x54FFD50", Slot = "106")]
	public override Type GetNestedType(string fullname, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E84")]
	[Address(RVA = "0x5500030", Offset = "0x54FF030", VA = "0x5500030", Slot = "95")]
	public override MemberInfo[] GetMember(string name, MemberTypes type, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E86")]
	[Address(RVA = "0x55004A0", Offset = "0x54FF4A0", VA = "0x55004A0")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x6000E88")]
	[Address(RVA = "0x55004C0", Offset = "0x54FF4C0", VA = "0x55004C0")]
	internal System.Reflection.RuntimeAssembly GetRuntimeAssembly()
	{
		return null;
	}

	[Token(Token = "0x6000E8A")]
	[Address(RVA = "0x55004F0", Offset = "0x54FF4F0", VA = "0x55004F0", Slot = "121")]
	public override bool IsInstanceOfType(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x5500500", Offset = "0x54FF500", VA = "0x5500500", Slot = "22")]
	public override bool IsAssignableFrom(Type c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E8C")]
	[Address(RVA = "0x55005D0", Offset = "0x54FF5D0", VA = "0x55005D0", Slot = "122")]
	public override bool IsEquivalentTo(Type other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E8E")]
	[Address(RVA = "0x5500680", Offset = "0x54FF680", VA = "0x5500680")]
	private System.RuntimeType GetBaseType()
	{
		return null;
	}

	[Token(Token = "0x6000E90")]
	[Address(RVA = "0x5500890", Offset = "0x54FF890", VA = "0x5500890", Slot = "56")]
	protected override TypeAttributes GetAttributeFlagsImpl()
	{
		return default(TypeAttributes);
	}

	[Token(Token = "0x6000E91")]
	[Address(RVA = "0x55008A0", Offset = "0x54FF8A0", VA = "0x55008A0", Slot = "70")]
	protected override bool IsContextfulImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x55008B0", Offset = "0x54FF8B0", VA = "0x55008B0", Slot = "34")]
	protected override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x55008C0", Offset = "0x54FF8C0", VA = "0x55008C0", Slot = "76")]
	protected override bool IsPrimitiveImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x55008D0", Offset = "0x54FF8D0", VA = "0x55008D0", Slot = "36")]
	protected override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x55008E0", Offset = "0x54FF8E0", VA = "0x55008E0", Slot = "68")]
	protected override bool IsCOMObjectImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x55008F0", Offset = "0x54FF8F0", VA = "0x55008F0", Slot = "78")]
	protected override bool IsValueTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x5500A30", Offset = "0x54FFA30", VA = "0x5500A30", Slot = "46")]
	protected override bool HasElementTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x5500B50", Offset = "0x54FFB50", VA = "0x5500B50", Slot = "32")]
	protected override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E9C")]
	[Address(RVA = "0x5500B60", Offset = "0x54FFB60", VA = "0x5500B60", Slot = "48")]
	public override int GetArrayRank()
	{
		return default(int);
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x5500BE0", Offset = "0x54FFBE0", VA = "0x5500BE0", Slot = "47")]
	public override Type GetElementType()
	{
		return null;
	}

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x5500BF0", Offset = "0x54FFBF0", VA = "0x5500BF0", Slot = "18")]
	public override string[] GetEnumNames()
	{
		return null;
	}

	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x5500D20", Offset = "0x54FFD20", VA = "0x5500D20", Slot = "124")]
	public override Array GetEnumValues()
	{
		return null;
	}

	[Token(Token = "0x6000EA0")]
	[Address(RVA = "0x5500EC0", Offset = "0x54FFEC0", VA = "0x5500EC0", Slot = "123")]
	public override Type GetEnumUnderlyingType()
	{
		return null;
	}

	[Token(Token = "0x6000EA1")]
	[Address(RVA = "0x5500F70", Offset = "0x54FFF70", VA = "0x5500F70", Slot = "16")]
	public override bool IsEnumDefined(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x55014D0", Offset = "0x55004D0", VA = "0x55014D0", Slot = "17")]
	public override string GetEnumName(object value)
	{
		return null;
	}

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x55016D0", Offset = "0x55006D0", VA = "0x55016D0")]
	internal System.RuntimeType[] GetGenericArgumentsInternal()
	{
		return null;
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x5501750", Offset = "0x5500750", VA = "0x5501750", Slot = "51")]
	public override Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x5501820", Offset = "0x5500820", VA = "0x5501820", Slot = "128")]
	public override Type MakeGenericType(params Type[] instantiation)
	{
		return null;
	}

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x5501F70", Offset = "0x5500F70", VA = "0x5501F70", Slot = "49")]
	public override Type GetGenericTypeDefinition()
	{
		return null;
	}

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x5502040", Offset = "0x5501040", VA = "0x5502040", Slot = "119")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public override object InvokeMember(string name, BindingFlags bindingFlags, Binder binder, object target, object[] providedArgs, ParameterModifier[] modifiers, CultureInfo culture, string[] namedParams)
	{
		return null;
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x5503590", Offset = "0x5502590", VA = "0x5503590", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x54EB5A0", Offset = "0x54EA5A0", VA = "0x54EB5A0")]
	public static bool operator ==(System.RuntimeType left, System.RuntimeType right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x54EE400", Offset = "0x54ED400", VA = "0x54EE400")]
	public static bool operator !=(System.RuntimeType left, System.RuntimeType right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x55035A0", Offset = "0x55025A0", VA = "0x55035A0", Slot = "138")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x55035B0", Offset = "0x55025B0", VA = "0x55035B0", Slot = "137")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x5503610", Offset = "0x5502610", VA = "0x5503610", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x55036A0", Offset = "0x55026A0", VA = "0x55036A0", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x5503820", Offset = "0x5502820", VA = "0x5503820", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x55039A0", Offset = "0x55029A0", VA = "0x55039A0", Slot = "132")]
	internal override string FormatTypeName(bool serialization)
	{
		return null;
	}

	[Token(Token = "0x6000EB9")]
	[Address(RVA = "0x5503BF0", Offset = "0x5502BF0", VA = "0x5503BF0")]
	private void CreateInstanceCheckThis()
	{
	}

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x54EB5B0", Offset = "0x54EA5B0", VA = "0x54EB5B0")]
	internal object CreateInstanceImpl(BindingFlags bindingAttr, Binder binder, object[] args, CultureInfo culture, object[] activationAttributes, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x54EC1E0", Offset = "0x54EB1E0", VA = "0x54EC1E0")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	internal object CreateInstanceDefaultCtor(bool publicOnly, bool skipCheckThis, bool fillCache, bool wrapExceptions, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x5503E30", Offset = "0x5502E30", VA = "0x5503E30")]
	internal System.Reflection.RuntimeConstructorInfo GetDefaultConstructor()
	{
		return null;
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x55034C0", Offset = "0x55024C0", VA = "0x55034C0")]
	private string GetDefaultMemberName()
	{
		return null;
	}

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x5503FF0", Offset = "0x5502FF0", VA = "0x5503FF0")]
	internal System.Reflection.RuntimeConstructorInfo GetSerializationCtor()
	{
		return null;
	}

	[Token(Token = "0x6000EBF")]
	[Address(RVA = "0x5503E00", Offset = "0x5502E00", VA = "0x5503E00")]
	internal object CreateInstanceSlow(bool publicOnly, bool wrapExceptions, bool skipCheckThis, bool fillCache)
	{
		return null;
	}

	[Token(Token = "0x6000EC0")]
	[Address(RVA = "0x5504230", Offset = "0x5503230", VA = "0x5504230")]
	private object CreateInstanceMono(bool nonPublic, bool wrapExceptions)
	{
		return null;
	}

	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x55044F0", Offset = "0x55034F0", VA = "0x55044F0")]
	internal object CheckValue(object value, Binder binder, CultureInfo culture, BindingFlags invokeAttr)
	{
		return null;
	}

	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x5504630", Offset = "0x5503630", VA = "0x5504630")]
	private object TryConvertToType(object value, ref bool failed)
	{
		return null;
	}

	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x5504850", Offset = "0x5503850", VA = "0x5504850")]
	private static object IsConvertibleToPrimitiveType(object value, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x5503B20", Offset = "0x5502B20", VA = "0x5503B20")]
	private string GetCachedName(System.TypeNameKind kind)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x5504E20", Offset = "0x5503E20", VA = "0x5504E20")]
	private extern Type make_array_type(int rank);

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x5504E30", Offset = "0x5503E30", VA = "0x5504E30", Slot = "125")]
	public override Type MakeArrayType()
	{
		return null;
	}

	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x5504E40", Offset = "0x5503E40", VA = "0x5504E40", Slot = "126")]
	public override Type MakeArrayType(int rank)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x5504E90", Offset = "0x5503E90", VA = "0x5504E90")]
	private extern Type make_byref_type();

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x5504EA0", Offset = "0x5503EA0", VA = "0x5504EA0", Slot = "127")]
	public override Type MakeByRefType()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x5504F00", Offset = "0x5503F00", VA = "0x5504F00")]
	private static extern Type MakePointerType(Type type);

	[Token(Token = "0x6000ECB")]
	[Address(RVA = "0x5504F10", Offset = "0x5503F10", VA = "0x5504F10", Slot = "129")]
	public override Type MakePointerType()
	{
		return null;
	}

	[Token(Token = "0x6000ECD")]
	[Address(RVA = "0x5505100", Offset = "0x5504100", VA = "0x5505100", Slot = "54")]
	public override Type[] GetGenericParameterConstraints()
	{
		return null;
	}

	[Token(Token = "0x6000ECE")]
	[Address(RVA = "0x5505200", Offset = "0x5504200", VA = "0x5505200")]
	internal static object CreateInstanceForAnotherGenericParameter(Type genericType, System.RuntimeType genericArgument)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECF")]
	[Address(RVA = "0x5501EB0", Offset = "0x5500EB0", VA = "0x5501EB0")]
	private static extern Type MakeGenericType(Type gt, Type[] types);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED0")]
	[Address(RVA = "0x5505320", Offset = "0x5504320", VA = "0x5505320")]
	internal extern IntPtr GetMethodsByName_native(IntPtr namePtr, BindingFlags bindingAttr, MemberListType listType);

	[Token(Token = "0x6000ED1")]
	[Address(RVA = "0x54FCD90", Offset = "0x54FBD90", VA = "0x54FCD90")]
	internal System.Reflection.RuntimeMethodInfo[] GetMethodsByName(string name, BindingFlags bindingAttr, MemberListType listType, System.RuntimeType reflectedType)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED2")]
	[Address(RVA = "0x5505330", Offset = "0x5504330", VA = "0x5505330")]
	private extern IntPtr GetPropertiesByName_native(IntPtr name, BindingFlags bindingAttr, MemberListType listType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x5505340", Offset = "0x5504340", VA = "0x5505340")]
	private extern IntPtr GetConstructors_native(BindingFlags bindingAttr);

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x54FD450", Offset = "0x54FC450", VA = "0x54FD450")]
	private System.Reflection.RuntimeConstructorInfo[] GetConstructors_internal(BindingFlags bindingAttr, System.RuntimeType reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x54FDA70", Offset = "0x54FCA70", VA = "0x54FDA70")]
	private System.Reflection.RuntimePropertyInfo[] GetPropertiesByName(string name, BindingFlags bindingAttr, MemberListType listType, System.RuntimeType reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x5505350", Offset = "0x5504350", VA = "0x5505350", Slot = "117")]
	protected override TypeCode GetTypeCodeImpl()
	{
		return default(TypeCode);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED7")]
	[Address(RVA = "0x55053B0", Offset = "0x55043B0", VA = "0x55053B0")]
	private static extern TypeCode GetTypeCodeImplInternal(Type type);

	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x55053C0", Offset = "0x55043C0", VA = "0x55053C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000ED9")]
	[Address(RVA = "0x5503DF0", Offset = "0x5502DF0", VA = "0x5503DF0")]
	private bool IsGenericCOMObjectImpl()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDA")]
	[Address(RVA = "0x55044E0", Offset = "0x55034E0", VA = "0x55044E0")]
	private static extern object CreateInstanceInternal(Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDC")]
	[Address(RVA = "0x55053D0", Offset = "0x55043D0", VA = "0x55053D0")]
	internal extern string getFullName(bool full_name, bool assembly_qualified);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x5501740", Offset = "0x5500740", VA = "0x5501740")]
	private extern Type[] GetGenericArgumentsInternal(bool runtimeArray);

	[Token(Token = "0x6000EDE")]
	[Address(RVA = "0x5500B00", Offset = "0x54FFB00", VA = "0x5500B00")]
	private GenericParameterAttributes GetGenericParameterAttributes()
	{
		return default(GenericParameterAttributes);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x5501F60", Offset = "0x5500F60", VA = "0x5501F60")]
	private extern int GetGenericParameterPosition();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EE0")]
	[Address(RVA = "0x55053F0", Offset = "0x55043F0", VA = "0x55053F0")]
	private extern IntPtr GetEvents_native(IntPtr name, MemberListType listType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x5505400", Offset = "0x5504400", VA = "0x5505400")]
	private extern IntPtr GetFields_native(IntPtr name, BindingFlags bindingAttr, MemberListType listType);

	[Token(Token = "0x6000EE2")]
	[Address(RVA = "0x54FE460", Offset = "0x54FD460", VA = "0x54FE460")]
	private System.Reflection.RuntimeFieldInfo[] GetFields_internal(string name, BindingFlags bindingAttr, MemberListType listType, System.RuntimeType reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6000EE3")]
	[Address(RVA = "0x54FDFA0", Offset = "0x54FCFA0", VA = "0x54FDFA0")]
	private System.Reflection.RuntimeEventInfo[] GetEvents_internal(string name, BindingFlags bindingAttr, MemberListType listType, System.RuntimeType reflectedType)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EE4")]
	[Address(RVA = "0x5505410", Offset = "0x5504410", VA = "0x5505410", Slot = "120")]
	public override extern Type[] GetInterfaces();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x5505420", Offset = "0x5504420", VA = "0x5505420")]
	private extern IntPtr GetNestedTypes_native(IntPtr name, BindingFlags bindingAttr, MemberListType listType);

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x54FE930", Offset = "0x54FD930", VA = "0x54FE930")]
	private System.RuntimeType[] GetNestedTypes_internal(string displayName, BindingFlags bindingAttr, MemberListType listType)
	{
		return null;
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x5505470", Offset = "0x5504470", VA = "0x5505470", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x5505670", Offset = "0x5504670", VA = "0x5505670", Slot = "21")]
	[ComVisible(true)]
	public override bool IsSubclassOf(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x5505760", Offset = "0x5504760", VA = "0x5505760", Slot = "103")]
	protected override MethodInfo GetMethodImpl(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConv, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x5505790", Offset = "0x5504790", VA = "0x5505790")]
	private MethodInfo GetMethodImplCommon(string name, int genericParameterCount, BindingFlags bindingAttr, Binder binder, CallingConventions callConv, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x5505A30", Offset = "0x5504A30", VA = "0x5505A30")]
	private ListBuilder<MethodInfo> GetMethodCandidates(string name, int genericParameterCount, BindingFlags bindingAttr, CallingConventions callConv, Type[] types, bool allowPrefixLookup)
	{
		return default(ListBuilder<MethodInfo>);
	}
}
