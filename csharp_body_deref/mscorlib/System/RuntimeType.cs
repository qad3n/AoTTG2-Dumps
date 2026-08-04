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
		[Address(RVA = "0x3CFC660", Offset = "0x3CFC660", VA = "0x3CFC660", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000135")]
	public override Assembly Assembly
	{
		[Token(Token = "0x6000E5F")]
		[Address(RVA = "0x3CFC680", Offset = "0x3CFC680", VA = "0x3CFC680", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000136")]
	public override RuntimeTypeHandle TypeHandle
	{
		[Token(Token = "0x6000E61")]
		[Address(RVA = "0x3CFC6A0", Offset = "0x3CFC6A0", VA = "0x3CFC6A0", Slot = "114")]
		get
		{
			return default(RuntimeTypeHandle);
		}
	}

	[Token(Token = "0x17000137")]
	public override Type BaseType
	{
		[Token(Token = "0x6000E65")]
		[Address(RVA = "0x3CFC850", Offset = "0x3CFC850", VA = "0x3CFC850", Slot = "116")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000138")]
	public override Type UnderlyingSystemType
	{
		[Token(Token = "0x6000E67")]
		[Address(RVA = "0x3CFCA60", Offset = "0x3CFCA60", VA = "0x3CFCA60", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000139")]
	public override bool IsEnum
	{
		[Token(Token = "0x6000E6F")]
		[Address(RVA = "0x3CFCBB0", Offset = "0x3CFCBB0", VA = "0x3CFCBB0", Slot = "71")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013A")]
	public override GenericParameterAttributes GenericParameterAttributes
	{
		[Token(Token = "0x6000E71")]
		[Address(RVA = "0x3CFCC20", Offset = "0x3CFCC20", VA = "0x3CFCC20", Slot = "53")]
		get
		{
			return default(GenericParameterAttributes);
		}
	}

	[Token(Token = "0x1700013B")]
	internal override bool IsSzArray
	{
		[Token(Token = "0x6000E72")]
		[Address(RVA = "0x3CFCD20", Offset = "0x3CFCD20", VA = "0x3CFCD20", Slot = "129")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013C")]
	public override bool IsGenericTypeDefinition
	{
		[Token(Token = "0x6000E7E")]
		[Address(RVA = "0x3CFE0F0", Offset = "0x3CFE0F0", VA = "0x3CFE0F0", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013D")]
	public override bool IsGenericParameter
	{
		[Token(Token = "0x6000E7F")]
		[Address(RVA = "0x3CFE100", Offset = "0x3CFE100", VA = "0x3CFE100", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013E")]
	public override int GenericParameterPosition
	{
		[Token(Token = "0x6000E80")]
		[Address(RVA = "0x3CFE110", Offset = "0x3CFE110", VA = "0x3CFE110", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013F")]
	public override bool IsGenericType
	{
		[Token(Token = "0x6000E82")]
		[Address(RVA = "0x3CFE220", Offset = "0x3CFE220", VA = "0x3CFE220", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000140")]
	public override bool IsConstructedGenericType
	{
		[Token(Token = "0x6000E83")]
		[Address(RVA = "0x3CFE230", Offset = "0x3CFE230", VA = "0x3CFE230", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000141")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6000E8E")]
		[Address(RVA = "0x3CFFF50", Offset = "0x3CFFF50", VA = "0x3CFFF50", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x17000142")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6000E8F")]
		[Address(RVA = "0x3CFFF90", Offset = "0x3CFFF90", VA = "0x3CFFF90", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000143")]
	public override int MetadataToken
	{
		[Token(Token = "0x6000E90")]
		[Address(RVA = "0x3CFFFB0", Offset = "0x3CFFFB0", VA = "0x3CFFFB0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000144")]
	public override bool ContainsGenericParameters
	{
		[Token(Token = "0x6000EA4")]
		[Address(RVA = "0x3D01640", Offset = "0x3D01640", VA = "0x3D01640", Slot = "20")]
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
		[Address(RVA = "0x3D01A20", Offset = "0x3D01A20", VA = "0x3D01A20", Slot = "29")]
		get;
	}

	[Token(Token = "0x17000146")]
	public override string AssemblyQualifiedName
	{
		[Token(Token = "0x6000EBF")]
		[Address(RVA = "0x3D01A70", Offset = "0x3D01A70", VA = "0x3D01A70", Slot = "25")]
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
		[Address(RVA = "0x3D01A80", Offset = "0x3D01A80", VA = "0x3D01A80", Slot = "9")]
		get;
	}

	[Token(Token = "0x17000148")]
	public override extern string Name
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000EC1")]
		[Address(RVA = "0x3D01A90", Offset = "0x3D01A90", VA = "0x3D01A90", Slot = "8")]
		get;
	}

	[Token(Token = "0x17000149")]
	public override extern string Namespace
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000EC2")]
		[Address(RVA = "0x3D01AA0", Offset = "0x3D01AA0", VA = "0x3D01AA0", Slot = "24")]
		get;
	}

	[Token(Token = "0x1700014A")]
	public override string FullName
	{
		[Token(Token = "0x6000EC4")]
		[Address(RVA = "0x3D01B60", Offset = "0x3D01B60", VA = "0x3D01B60", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014B")]
	public override bool IsSZArray
	{
		[Token(Token = "0x6000EC5")]
		[Address(RVA = "0x3D01C50", Offset = "0x3D01C50", VA = "0x3D01C50", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700014C")]
	public override bool IsByRefLike
	{
		[Token(Token = "0x6000EC7")]
		[Address(RVA = "0x3D01D90", Offset = "0x3D01D90", VA = "0x3D01D90", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000E3D")]
	[Address(RVA = "0x3CF79C0", Offset = "0x3CF79C0", VA = "0x3CF79C0")]
	internal static System.RuntimeType GetType(string typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6000E3E")]
	[Address(RVA = "0x3CF7A40", Offset = "0x3CF7A40", VA = "0x3CF7A40")]
	private static void ThrowIfTypeNeverValidGenericArgument(System.RuntimeType type)
	{
	}

	[Token(Token = "0x6000E3F")]
	[Address(RVA = "0x3CF7B70", Offset = "0x3CF7B70", VA = "0x3CF7B70")]
	internal static void SanityCheckGenericArguments(System.RuntimeType[] genericArguments, System.RuntimeType[] genericParamters)
	{
	}

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x3CF7D60", Offset = "0x3CF7D60", VA = "0x3CF7D60")]
	private static void SplitName(string fullname, out string name, out string ns)
	{
	}

	[Token(Token = "0x6000E41")]
	[Address(RVA = "0x3CF7E70", Offset = "0x3CF7E70", VA = "0x3CF7E70")]
	internal static BindingFlags FilterPreCalculate(bool isPublic, bool isInherited, bool isStatic)
	{
		return default(BindingFlags);
	}

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x3CF7EA0", Offset = "0x3CF7EA0", VA = "0x3CF7EA0")]
	private static void FilterHelper(BindingFlags bindingFlags, ref string name, bool allowPrefixLookup, out bool prefixLookup, out bool ignoreCase, out MemberListType listType)
	{
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x3CF7FE0", Offset = "0x3CF7FE0", VA = "0x3CF7FE0")]
	private static void FilterHelper(BindingFlags bindingFlags, ref string name, out bool ignoreCase, out MemberListType listType)
	{
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x3CF8050", Offset = "0x3CF8050", VA = "0x3CF8050")]
	private static bool FilterApplyPrefixLookup(MemberInfo memberInfo, string name, bool ignoreCase)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x3CF80C0", Offset = "0x3CF80C0", VA = "0x3CF80C0")]
	private static bool FilterApplyBase(MemberInfo memberInfo, BindingFlags bindingFlags, bool isPublic, bool isNonProtectedInternal, bool isStatic, string name, bool prefixLookup)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x3CF8320", Offset = "0x3CF8320", VA = "0x3CF8320")]
	private static bool FilterApplyType(Type type, BindingFlags bindingFlags, string name, bool prefixLookup, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x3CF8420", Offset = "0x3CF8420", VA = "0x3CF8420")]
	private static bool FilterApplyMethodInfo(System.Reflection.RuntimeMethodInfo method, BindingFlags bindingFlags, CallingConventions callConv, Type[] argumentTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x3CF8720", Offset = "0x3CF8720", VA = "0x3CF8720")]
	private static bool FilterApplyConstructorInfo(System.Reflection.RuntimeConstructorInfo constructor, BindingFlags bindingFlags, CallingConventions callConv, Type[] argumentTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x3CF84A0", Offset = "0x3CF84A0", VA = "0x3CF84A0")]
	private static bool FilterApplyMethodBase(MethodBase methodBase, BindingFlags methodFlags, BindingFlags bindingFlags, CallingConventions callConv, Type[] argumentTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x3CF87A0", Offset = "0x3CF87A0", VA = "0x3CF87A0")]
	internal RuntimeType()
	{
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x3CF87E0", Offset = "0x3CF87E0", VA = "0x3CF87E0")]
	private ListBuilder<MethodInfo> GetMethodCandidates(string name, BindingFlags bindingAttr, CallingConventions callConv, Type[] types, int genericParamCount, bool allowPrefixLookup)
	{
		return default(ListBuilder<MethodInfo>);
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x3CF8E50", Offset = "0x3CF8E50", VA = "0x3CF8E50")]
	private ListBuilder<ConstructorInfo> GetConstructorCandidates(string name, BindingFlags bindingAttr, CallingConventions callConv, Type[] types, bool allowPrefixLookup)
	{
		return default(ListBuilder<ConstructorInfo>);
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x3CF94F0", Offset = "0x3CF94F0", VA = "0x3CF94F0")]
	private ListBuilder<PropertyInfo> GetPropertyCandidates(string name, BindingFlags bindingAttr, Type[] types, bool allowPrefixLookup)
	{
		return default(ListBuilder<PropertyInfo>);
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x3CF9B60", Offset = "0x3CF9B60", VA = "0x3CF9B60")]
	private ListBuilder<EventInfo> GetEventCandidates(string name, BindingFlags bindingAttr, bool allowPrefixLookup)
	{
		return default(ListBuilder<EventInfo>);
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x3CFA0E0", Offset = "0x3CFA0E0", VA = "0x3CFA0E0")]
	private ListBuilder<FieldInfo> GetFieldCandidates(string name, BindingFlags bindingAttr, bool allowPrefixLookup)
	{
		return default(ListBuilder<FieldInfo>);
	}

	[Token(Token = "0x6000E50")]
	[Address(RVA = "0x3CFA6E0", Offset = "0x3CFA6E0", VA = "0x3CFA6E0")]
	private ListBuilder<Type> GetNestedTypeCandidates(string fullname, BindingFlags bindingAttr, bool allowPrefixLookup)
	{
		return default(ListBuilder<Type>);
	}

	[Token(Token = "0x6000E51")]
	[Address(RVA = "0x3CFAD20", Offset = "0x3CFAD20", VA = "0x3CFAD20", Slot = "104")]
	public override MethodInfo[] GetMethods(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E52")]
	[Address(RVA = "0x3CFADB0", Offset = "0x3CFADB0", VA = "0x3CFADB0", Slot = "84")]
	[ComVisible(true)]
	public override ConstructorInfo[] GetConstructors(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x3CFAE40", Offset = "0x3CFAE40", VA = "0x3CFAE40", Slot = "113")]
	public override PropertyInfo[] GetProperties(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x3CFAEB0", Offset = "0x3CFAEB0", VA = "0x3CFAEB0", Slot = "87")]
	public override EventInfo[] GetEvents(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x3CFAF20", Offset = "0x3CFAF20", VA = "0x3CFAF20", Slot = "91")]
	public override FieldInfo[] GetFields(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E56")]
	[Address(RVA = "0x3CFAF90", Offset = "0x3CFAF90", VA = "0x3CFAF90", Slot = "95")]
	public override MemberInfo[] GetMembers(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x3CFB280", Offset = "0x3CFB280", VA = "0x3CFB280", Slot = "82")]
	protected override ConstructorInfo GetConstructorImpl(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x3CFB4B0", Offset = "0x3CFB4B0", VA = "0x3CFB4B0", Slot = "112")]
	protected override PropertyInfo GetPropertyImpl(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x3CFB760", Offset = "0x3CFB760", VA = "0x3CFB760", Slot = "86")]
	public override EventInfo GetEvent(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x3CFB9E0", Offset = "0x3CFB9E0", VA = "0x3CFB9E0", Slot = "89")]
	public override FieldInfo GetField(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x3CFBE10", Offset = "0x3CFBE10", VA = "0x3CFBE10", Slot = "105")]
	public override Type GetNestedType(string fullname, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E5C")]
	[Address(RVA = "0x3CFC100", Offset = "0x3CFC100", VA = "0x3CFC100", Slot = "94")]
	public override MemberInfo[] GetMember(string name, MemberTypes type, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x3CFC670", Offset = "0x3CFC670", VA = "0x3CFC670")]
	internal System.Reflection.RuntimeModule GetRuntimeModule()
	{
		return null;
	}

	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x3CFC690", Offset = "0x3CFC690", VA = "0x3CFC690")]
	internal System.Reflection.RuntimeAssembly GetRuntimeAssembly()
	{
		return null;
	}

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x3CFC6C0", Offset = "0x3CFC6C0", VA = "0x3CFC6C0", Slot = "119")]
	public override bool IsInstanceOfType(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x3CFC6D0", Offset = "0x3CFC6D0", VA = "0x3CFC6D0", Slot = "22")]
	public override bool IsAssignableFrom(Type c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E64")]
	[Address(RVA = "0x3CFC7A0", Offset = "0x3CFC7A0", VA = "0x3CFC7A0", Slot = "120")]
	public override bool IsEquivalentTo(Type other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E66")]
	[Address(RVA = "0x3CFC860", Offset = "0x3CFC860", VA = "0x3CFC860")]
	private System.RuntimeType GetBaseType()
	{
		return null;
	}

	[Token(Token = "0x6000E68")]
	[Address(RVA = "0x3CFCA70", Offset = "0x3CFCA70", VA = "0x3CFCA70", Slot = "56")]
	protected override TypeAttributes GetAttributeFlagsImpl()
	{
		return default(TypeAttributes);
	}

	[Token(Token = "0x6000E69")]
	[Address(RVA = "0x3CFCA80", Offset = "0x3CFCA80", VA = "0x3CFCA80", Slot = "69")]
	protected override bool IsContextfulImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6A")]
	[Address(RVA = "0x3CFCA90", Offset = "0x3CFCA90", VA = "0x3CFCA90", Slot = "34")]
	protected override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6B")]
	[Address(RVA = "0x3CFCAA0", Offset = "0x3CFCAA0", VA = "0x3CFCAA0", Slot = "75")]
	protected override bool IsPrimitiveImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6C")]
	[Address(RVA = "0x3CFCAB0", Offset = "0x3CFCAB0", VA = "0x3CFCAB0", Slot = "36")]
	protected override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6D")]
	[Address(RVA = "0x3CFCAC0", Offset = "0x3CFCAC0", VA = "0x3CFCAC0", Slot = "67")]
	protected override bool IsCOMObjectImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6E")]
	[Address(RVA = "0x3CFCAD0", Offset = "0x3CFCAD0", VA = "0x3CFCAD0", Slot = "77")]
	protected override bool IsValueTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E70")]
	[Address(RVA = "0x3CFCC10", Offset = "0x3CFCC10", VA = "0x3CFCC10", Slot = "46")]
	protected override bool HasElementTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E73")]
	[Address(RVA = "0x3CFCD30", Offset = "0x3CFCD30", VA = "0x3CFCD30", Slot = "32")]
	protected override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E74")]
	[Address(RVA = "0x3CFCD40", Offset = "0x3CFCD40", VA = "0x3CFCD40", Slot = "48")]
	public override int GetArrayRank()
	{
		return default(int);
	}

	[Token(Token = "0x6000E75")]
	[Address(RVA = "0x3CFCDC0", Offset = "0x3CFCDC0", VA = "0x3CFCDC0", Slot = "47")]
	public override Type GetElementType()
	{
		return null;
	}

	[Token(Token = "0x6000E76")]
	[Address(RVA = "0x3CFCDD0", Offset = "0x3CFCDD0", VA = "0x3CFCDD0", Slot = "18")]
	public override string[] GetEnumNames()
	{
		return null;
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x3CFCF00", Offset = "0x3CFCF00", VA = "0x3CFCF00", Slot = "122")]
	public override Array GetEnumValues()
	{
		return null;
	}

	[Token(Token = "0x6000E78")]
	[Address(RVA = "0x3CFD0B0", Offset = "0x3CFD0B0", VA = "0x3CFD0B0", Slot = "121")]
	public override Type GetEnumUnderlyingType()
	{
		return null;
	}

	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x3CFD160", Offset = "0x3CFD160", VA = "0x3CFD160", Slot = "16")]
	public override bool IsEnumDefined(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E7A")]
	[Address(RVA = "0x3CFD6F0", Offset = "0x3CFD6F0", VA = "0x3CFD6F0", Slot = "17")]
	public override string GetEnumName(object value)
	{
		return null;
	}

	[Token(Token = "0x6000E7B")]
	[Address(RVA = "0x3CFD8F0", Offset = "0x3CFD8F0", VA = "0x3CFD8F0")]
	internal System.RuntimeType[] GetGenericArgumentsInternal()
	{
		return null;
	}

	[Token(Token = "0x6000E7C")]
	[Address(RVA = "0x3CFD970", Offset = "0x3CFD970", VA = "0x3CFD970", Slot = "51")]
	public override Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x6000E7D")]
	[Address(RVA = "0x3CFDA40", Offset = "0x3CFDA40", VA = "0x3CFDA40", Slot = "126")]
	public override Type MakeGenericType(params Type[] instantiation)
	{
		return null;
	}

	[Token(Token = "0x6000E81")]
	[Address(RVA = "0x3CFE1A0", Offset = "0x3CFE1A0", VA = "0x3CFE1A0", Slot = "49")]
	public override Type GetGenericTypeDefinition()
	{
		return null;
	}

	[Token(Token = "0x6000E84")]
	[Address(RVA = "0x3CFE270", Offset = "0x3CFE270", VA = "0x3CFE270", Slot = "117")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public override object InvokeMember(string name, BindingFlags bindingFlags, Binder binder, object target, object[] providedArgs, ParameterModifier[] modifiers, CultureInfo culture, string[] namedParams)
	{
		return null;
	}

	[Token(Token = "0x6000E85")]
	[Address(RVA = "0x3CFF960", Offset = "0x3CFF960", VA = "0x3CFF960", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E86")]
	[Address(RVA = "0x3CE6F00", Offset = "0x3CE6F00", VA = "0x3CE6F00")]
	public static bool operator ==(System.RuntimeType left, System.RuntimeType right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E87")]
	[Address(RVA = "0x3CE9F00", Offset = "0x3CE9F00", VA = "0x3CE9F00")]
	public static bool operator !=(System.RuntimeType left, System.RuntimeType right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E88")]
	[Address(RVA = "0x3CFF970", Offset = "0x3CFF970", VA = "0x3CFF970", Slot = "136")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000E89")]
	[Address(RVA = "0x3CFF980", Offset = "0x3CFF980", VA = "0x3CFF980", Slot = "135")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000E8A")]
	[Address(RVA = "0x3CFF9E0", Offset = "0x3CFF9E0", VA = "0x3CFF9E0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x3CFFA70", Offset = "0x3CFFA70", VA = "0x3CFFA70", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000E8C")]
	[Address(RVA = "0x3CFFBF0", Offset = "0x3CFFBF0", VA = "0x3CFFBF0", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x3CFFD70", Offset = "0x3CFFD70", VA = "0x3CFFD70", Slot = "130")]
	internal override string FormatTypeName(bool serialization)
	{
		return null;
	}

	[Token(Token = "0x6000E91")]
	[Address(RVA = "0x3CFFFC0", Offset = "0x3CFFFC0", VA = "0x3CFFFC0")]
	private void CreateInstanceCheckThis()
	{
	}

	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x3CE6F10", Offset = "0x3CE6F10", VA = "0x3CE6F10")]
	internal object CreateInstanceImpl(BindingFlags bindingAttr, Binder binder, object[] args, CultureInfo culture, object[] activationAttributes, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x3CE7D30", Offset = "0x3CE7D30", VA = "0x3CE7D30")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	internal object CreateInstanceDefaultCtor(bool publicOnly, bool skipCheckThis, bool fillCache, bool wrapExceptions, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x3D00200", Offset = "0x3D00200", VA = "0x3D00200")]
	internal System.Reflection.RuntimeConstructorInfo GetDefaultConstructor()
	{
		return null;
	}

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x3CFF890", Offset = "0x3CFF890", VA = "0x3CFF890")]
	private string GetDefaultMemberName()
	{
		return null;
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x3D003C0", Offset = "0x3D003C0", VA = "0x3D003C0")]
	internal System.Reflection.RuntimeConstructorInfo GetSerializationCtor()
	{
		return null;
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x3D001D0", Offset = "0x3D001D0", VA = "0x3D001D0")]
	internal object CreateInstanceSlow(bool publicOnly, bool wrapExceptions, bool skipCheckThis, bool fillCache)
	{
		return null;
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x3D005F0", Offset = "0x3D005F0", VA = "0x3D005F0")]
	private object CreateInstanceMono(bool nonPublic, bool wrapExceptions)
	{
		return null;
	}

	[Token(Token = "0x6000E99")]
	[Address(RVA = "0x3D008B0", Offset = "0x3D008B0", VA = "0x3D008B0")]
	internal object CheckValue(object value, Binder binder, CultureInfo culture, BindingFlags invokeAttr)
	{
		return null;
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x3D009E0", Offset = "0x3D009E0", VA = "0x3D009E0")]
	private object TryConvertToType(object value, ref bool failed)
	{
		return null;
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x3D00C00", Offset = "0x3D00C00", VA = "0x3D00C00")]
	private static object IsConvertibleToPrimitiveType(object value, Type targetType)
	{
		return null;
	}

	[Token(Token = "0x6000E9C")]
	[Address(RVA = "0x3CFFEF0", Offset = "0x3CFFEF0", VA = "0x3CFFEF0")]
	private string GetCachedName(System.TypeNameKind kind)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x3D01470", Offset = "0x3D01470", VA = "0x3D01470")]
	private extern Type make_array_type(int rank);

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x3D01480", Offset = "0x3D01480", VA = "0x3D01480", Slot = "123")]
	public override Type MakeArrayType()
	{
		return null;
	}

	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x3D01490", Offset = "0x3D01490", VA = "0x3D01490", Slot = "124")]
	public override Type MakeArrayType(int rank)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EA0")]
	[Address(RVA = "0x3D014E0", Offset = "0x3D014E0", VA = "0x3D014E0")]
	private extern Type make_byref_type();

	[Token(Token = "0x6000EA1")]
	[Address(RVA = "0x3D014F0", Offset = "0x3D014F0", VA = "0x3D014F0", Slot = "125")]
	public override Type MakeByRefType()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x3D01550", Offset = "0x3D01550", VA = "0x3D01550")]
	private static extern Type MakePointerType(Type type);

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x3D01560", Offset = "0x3D01560", VA = "0x3D01560", Slot = "127")]
	public override Type MakePointerType()
	{
		return null;
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x3D01740", Offset = "0x3D01740", VA = "0x3D01740", Slot = "54")]
	public override Type[] GetGenericParameterConstraints()
	{
		return null;
	}

	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x3D01840", Offset = "0x3D01840", VA = "0x3D01840")]
	internal static object CreateInstanceForAnotherGenericParameter(Type genericType, System.RuntimeType genericArgument)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x3CFE0E0", Offset = "0x3CFE0E0", VA = "0x3CFE0E0")]
	private static extern Type MakeGenericType(Type gt, Type[] types);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x3D01960", Offset = "0x3D01960", VA = "0x3D01960")]
	internal extern IntPtr GetMethodsByName_native(IntPtr namePtr, BindingFlags bindingAttr, MemberListType listType);

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x3CF8AF0", Offset = "0x3CF8AF0", VA = "0x3CF8AF0")]
	internal System.Reflection.RuntimeMethodInfo[] GetMethodsByName(string name, BindingFlags bindingAttr, MemberListType listType, System.RuntimeType reflectedType)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EAA")]
	[Address(RVA = "0x3D01970", Offset = "0x3D01970", VA = "0x3D01970")]
	private extern IntPtr GetPropertiesByName_native(IntPtr name, BindingFlags bindingAttr, MemberListType listType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EAB")]
	[Address(RVA = "0x3D01980", Offset = "0x3D01980", VA = "0x3D01980")]
	private extern IntPtr GetConstructors_native(BindingFlags bindingAttr);

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x3CF9270", Offset = "0x3CF9270", VA = "0x3CF9270")]
	private System.Reflection.RuntimeConstructorInfo[] GetConstructors_internal(BindingFlags bindingAttr, System.RuntimeType reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x3CF9800", Offset = "0x3CF9800", VA = "0x3CF9800")]
	private System.Reflection.RuntimePropertyInfo[] GetPropertiesByName(string name, BindingFlags bindingAttr, MemberListType listType, System.RuntimeType reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x3D01990", Offset = "0x3D01990", VA = "0x3D01990", Slot = "115")]
	protected override TypeCode GetTypeCodeImpl()
	{
		return default(TypeCode);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x3D019F0", Offset = "0x3D019F0", VA = "0x3D019F0")]
	private static extern TypeCode GetTypeCodeImplInternal(Type type);

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x3D01A00", Offset = "0x3D01A00", VA = "0x3D01A00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x3D001C0", Offset = "0x3D001C0", VA = "0x3D001C0")]
	private bool IsGenericCOMObjectImpl()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x3D008A0", Offset = "0x3D008A0", VA = "0x3D008A0")]
	private static extern object CreateInstanceInternal(Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x3D01A10", Offset = "0x3D01A10", VA = "0x3D01A10")]
	internal extern string getFullName(bool full_name, bool assembly_qualified);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x3CFD960", Offset = "0x3CFD960", VA = "0x3CFD960")]
	private extern Type[] GetGenericArgumentsInternal(bool runtimeArray);

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x3CFCCE0", Offset = "0x3CFCCE0", VA = "0x3CFCCE0")]
	private GenericParameterAttributes GetGenericParameterAttributes()
	{
		return default(GenericParameterAttributes);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x3CFE190", Offset = "0x3CFE190", VA = "0x3CFE190")]
	private extern int GetGenericParameterPosition();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x3D01A30", Offset = "0x3D01A30", VA = "0x3D01A30")]
	private extern IntPtr GetEvents_native(IntPtr name, MemberListType listType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EB9")]
	[Address(RVA = "0x3D01A40", Offset = "0x3D01A40", VA = "0x3D01A40")]
	private extern IntPtr GetFields_native(IntPtr name, BindingFlags bindingAttr, MemberListType listType);

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x3CFA380", Offset = "0x3CFA380", VA = "0x3CFA380")]
	private System.Reflection.RuntimeFieldInfo[] GetFields_internal(string name, BindingFlags bindingAttr, MemberListType listType, System.RuntimeType reflectedType)
	{
		return null;
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x3CF9E00", Offset = "0x3CF9E00", VA = "0x3CF9E00")]
	private System.Reflection.RuntimeEventInfo[] GetEvents_internal(string name, BindingFlags bindingAttr, MemberListType listType, System.RuntimeType reflectedType)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x3D01A50", Offset = "0x3D01A50", VA = "0x3D01A50", Slot = "118")]
	public override extern Type[] GetInterfaces();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x3D01A60", Offset = "0x3D01A60", VA = "0x3D01A60")]
	private extern IntPtr GetNestedTypes_native(IntPtr name, BindingFlags bindingAttr, MemberListType listType);

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x3CFA8D0", Offset = "0x3CFA8D0", VA = "0x3CFA8D0")]
	private System.RuntimeType[] GetNestedTypes_internal(string displayName, BindingFlags bindingAttr, MemberListType listType)
	{
		return null;
	}

	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x3D01AB0", Offset = "0x3D01AB0", VA = "0x3D01AB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x3D01CB0", Offset = "0x3D01CB0", VA = "0x3D01CB0", Slot = "21")]
	[ComVisible(true)]
	public override bool IsSubclassOf(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x3D01DA0", Offset = "0x3D01DA0", VA = "0x3D01DA0", Slot = "102")]
	protected override MethodInfo GetMethodImpl(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConv, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x3D01DD0", Offset = "0x3D01DD0", VA = "0x3D01DD0")]
	private MethodInfo GetMethodImplCommon(string name, int genericParameterCount, BindingFlags bindingAttr, Binder binder, CallingConventions callConv, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x3D02080", Offset = "0x3D02080", VA = "0x3D02080")]
	private ListBuilder<MethodInfo> GetMethodCandidates(string name, int genericParameterCount, BindingFlags bindingAttr, CallingConventions callConv, Type[] types, bool allowPrefixLookup)
	{
		return default(ListBuilder<MethodInfo>);
	}
}
