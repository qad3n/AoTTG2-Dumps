// ==================== AoTTG2 cross-reference ====================
// Type: System.RuntimeTypeHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Threading;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20001A0")]
[ComVisible(true)]
public struct RuntimeTypeHandle : ISerializable
{
	[Token(Token = "0x4000686")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr value;

	[Token(Token = "0x17000174")]
	public IntPtr Value
	{
		[Token(Token = "0x6001024")]
		[Address(RVA = "0x5516320", Offset = "0x5515320", VA = "0x5516320")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x6001021")]
	[Address(RVA = "0x5516180", Offset = "0x5515180", VA = "0x5516180")]
	internal RuntimeTypeHandle(IntPtr val)
	{
	}

	[Token(Token = "0x6001022")]
	[Address(RVA = "0x5516190", Offset = "0x5515190", VA = "0x5516190")]
	internal RuntimeTypeHandle(System.RuntimeType type)
	{
	}

	[Token(Token = "0x6001023")]
	[Address(RVA = "0x55161B0", Offset = "0x55151B0", VA = "0x55161B0")]
	private RuntimeTypeHandle(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001025")]
	[Address(RVA = "0x5516330", Offset = "0x5515330", VA = "0x5516330", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001026")]
	[Address(RVA = "0x5516490", Offset = "0x5515490", VA = "0x5516490", Slot = "0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001027")]
	[Address(RVA = "0x5516570", Offset = "0x5515570", VA = "0x5516570")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public bool Equals(RuntimeTypeHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001028")]
	[Address(RVA = "0x5516580", Offset = "0x5515580", VA = "0x5516580", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001029")]
	[Address(RVA = "0x5516590", Offset = "0x5515590", VA = "0x5516590")]
	internal static extern TypeAttributes GetAttributes(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600102A")]
	[Address(RVA = "0x55165A0", Offset = "0x55155A0", VA = "0x55165A0")]
	private static extern int GetMetadataToken(System.RuntimeType type);

	[Token(Token = "0x600102B")]
	[Address(RVA = "0x55165B0", Offset = "0x55155B0", VA = "0x55165B0")]
	internal static int GetToken(System.RuntimeType type)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600102C")]
	[Address(RVA = "0x55165C0", Offset = "0x55155C0", VA = "0x55165C0")]
	private static extern Type GetGenericTypeDefinition_impl(System.RuntimeType type);

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x55165D0", Offset = "0x55155D0", VA = "0x55165D0")]
	internal static Type GetGenericTypeDefinition(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x55165E0", Offset = "0x55155E0", VA = "0x55165E0")]
	internal static bool IsPrimitive(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x5516610", Offset = "0x5515610", VA = "0x5516610")]
	internal static bool IsByRef(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x5516620", Offset = "0x5515620", VA = "0x5516620")]
	internal static bool IsPointer(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x5516630", Offset = "0x5515630", VA = "0x5516630")]
	internal static bool IsArray(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001032")]
	[Address(RVA = "0x5516650", Offset = "0x5515650", VA = "0x5516650")]
	internal static bool IsSzArray(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001033")]
	[Address(RVA = "0x5516660", Offset = "0x5515660", VA = "0x5516660")]
	internal static bool HasElementType(System.RuntimeType type)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001034")]
	[Address(RVA = "0x5516600", Offset = "0x5515600", VA = "0x5516600")]
	internal static extern System.Reflection.CorElementType GetCorElementType(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001035")]
	[Address(RVA = "0x5516690", Offset = "0x5515690", VA = "0x5516690")]
	internal static extern bool HasInstantiation(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001036")]
	[Address(RVA = "0x55166A0", Offset = "0x55156A0", VA = "0x55166A0")]
	internal static extern bool IsComObject(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001037")]
	[Address(RVA = "0x55166B0", Offset = "0x55156B0", VA = "0x55166B0")]
	internal static extern bool IsInstanceOfType(System.RuntimeType type, object o);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001038")]
	[Address(RVA = "0x55166C0", Offset = "0x55156C0", VA = "0x55166C0")]
	internal static extern bool HasReferences(System.RuntimeType type);

	[Token(Token = "0x6001039")]
	[Address(RVA = "0x55166D0", Offset = "0x55156D0", VA = "0x55166D0")]
	internal static bool IsComObject(System.RuntimeType type, bool isGenericCOM)
	{
		return default(bool);
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x55166E0", Offset = "0x55156E0", VA = "0x55166E0")]
	internal static bool IsContextful(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600103B")]
	[Address(RVA = "0x5516760", Offset = "0x5515760", VA = "0x5516760")]
	internal static bool IsEquivalentTo(System.RuntimeType rtType1, System.RuntimeType rtType2)
	{
		return default(bool);
	}

	[Token(Token = "0x600103C")]
	[Address(RVA = "0x5516770", Offset = "0x5515770", VA = "0x5516770")]
	internal static bool IsInterface(System.RuntimeType type)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600103D")]
	[Address(RVA = "0x5516790", Offset = "0x5515790", VA = "0x5516790")]
	internal static extern int GetArrayRank(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600103E")]
	[Address(RVA = "0x55167A0", Offset = "0x55157A0", VA = "0x55167A0")]
	internal static extern System.Reflection.RuntimeAssembly GetAssembly(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600103F")]
	[Address(RVA = "0x55167B0", Offset = "0x55157B0", VA = "0x55167B0")]
	internal static extern System.RuntimeType GetElementType(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001040")]
	[Address(RVA = "0x55167C0", Offset = "0x55157C0", VA = "0x55167C0")]
	internal static extern System.Reflection.RuntimeModule GetModule(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001041")]
	[Address(RVA = "0x55167D0", Offset = "0x55157D0", VA = "0x55167D0")]
	internal static extern bool IsGenericVariable(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001042")]
	[Address(RVA = "0x55167E0", Offset = "0x55157E0", VA = "0x55167E0")]
	internal static extern System.RuntimeType GetBaseType(System.RuntimeType type);

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x55167F0", Offset = "0x55157F0", VA = "0x55167F0")]
	internal static bool CanCastTo(System.RuntimeType type, System.RuntimeType target)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001044")]
	[Address(RVA = "0x5516800", Offset = "0x5515800", VA = "0x5516800")]
	private static extern bool type_is_assignable_from(Type a, Type b);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001045")]
	[Address(RVA = "0x5516810", Offset = "0x5515810", VA = "0x5516810")]
	internal static extern bool IsGenericTypeDefinition(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001046")]
	[Address(RVA = "0x5516820", Offset = "0x5515820", VA = "0x5516820")]
	internal static extern IntPtr GetGenericParameterInfo(System.RuntimeType type);

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x5516830", Offset = "0x5515830", VA = "0x5516830")]
	internal static bool IsSubclassOf(System.RuntimeType childType, System.RuntimeType baseType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001048")]
	[Address(RVA = "0x5516850", Offset = "0x5515850", VA = "0x5516850")]
	internal static extern bool is_subclass_of(IntPtr childType, IntPtr baseType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001049")]
	[Address(RVA = "0x5516860", Offset = "0x5515860", VA = "0x5516860")]
	internal static extern bool IsByRefLike(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600104A")]
	[Address(RVA = "0x5516870", Offset = "0x5515870", VA = "0x5516870")]
	private static extern System.RuntimeType internal_from_name(string name, ref System.Threading.StackCrawlMark stackMark, Assembly callerAssembly, bool throwOnError, bool ignoreCase, bool reflectionOnly);

	[Token(Token = "0x600104B")]
	[Address(RVA = "0x5516880", Offset = "0x5515880", VA = "0x5516880")]
	internal static System.RuntimeType GetTypeByName(string typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ref System.Threading.StackCrawlMark stackMark, bool loadTypeFromPartialName)
	{
		return null;
	}
}
