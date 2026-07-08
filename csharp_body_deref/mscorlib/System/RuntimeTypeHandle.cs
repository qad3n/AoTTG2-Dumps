using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Threading;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200019D")]
[ComVisible(true)]
public struct RuntimeTypeHandle : ISerializable
{
	[Token(Token = "0x40006C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr value;

	[Token(Token = "0x17000173")]
	public IntPtr Value
	{
		[Token(Token = "0x6000FF6")]
		[Address(RVA = "0x502CF60", Offset = "0x502CF60", VA = "0x502CF60")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x502CDC0", Offset = "0x502CDC0", VA = "0x502CDC0")]
	internal RuntimeTypeHandle(IntPtr val)
	{
	}

	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x502CDD0", Offset = "0x502CDD0", VA = "0x502CDD0")]
	internal RuntimeTypeHandle(System.RuntimeType type)
	{
	}

	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x502CDF0", Offset = "0x502CDF0", VA = "0x502CDF0")]
	private RuntimeTypeHandle(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FF7")]
	[Address(RVA = "0x502CF70", Offset = "0x502CF70", VA = "0x502CF70", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FF8")]
	[Address(RVA = "0x502D0D0", Offset = "0x502D0D0", VA = "0x502D0D0", Slot = "0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x502D1B0", Offset = "0x502D1B0", VA = "0x502D1B0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public bool Equals(RuntimeTypeHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x502D1C0", Offset = "0x502D1C0", VA = "0x502D1C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x502D1D0", Offset = "0x502D1D0", VA = "0x502D1D0")]
	internal static extern TypeAttributes GetAttributes(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x502D1E0", Offset = "0x502D1E0", VA = "0x502D1E0")]
	private static extern int GetMetadataToken(System.RuntimeType type);

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x502D1F0", Offset = "0x502D1F0", VA = "0x502D1F0")]
	internal static int GetToken(System.RuntimeType type)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FFE")]
	[Address(RVA = "0x502D200", Offset = "0x502D200", VA = "0x502D200")]
	private static extern Type GetGenericTypeDefinition_impl(System.RuntimeType type);

	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x502D210", Offset = "0x502D210", VA = "0x502D210")]
	internal static Type GetGenericTypeDefinition(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001000")]
	[Address(RVA = "0x502D220", Offset = "0x502D220", VA = "0x502D220")]
	internal static bool IsPrimitive(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001001")]
	[Address(RVA = "0x502D250", Offset = "0x502D250", VA = "0x502D250")]
	internal static bool IsByRef(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001002")]
	[Address(RVA = "0x502D260", Offset = "0x502D260", VA = "0x502D260")]
	internal static bool IsPointer(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001003")]
	[Address(RVA = "0x502D270", Offset = "0x502D270", VA = "0x502D270")]
	internal static bool IsArray(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001004")]
	[Address(RVA = "0x502D290", Offset = "0x502D290", VA = "0x502D290")]
	internal static bool IsSzArray(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001005")]
	[Address(RVA = "0x502D2A0", Offset = "0x502D2A0", VA = "0x502D2A0")]
	internal static bool HasElementType(System.RuntimeType type)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001006")]
	[Address(RVA = "0x502D240", Offset = "0x502D240", VA = "0x502D240")]
	internal static extern System.Reflection.CorElementType GetCorElementType(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001007")]
	[Address(RVA = "0x502D2C0", Offset = "0x502D2C0", VA = "0x502D2C0")]
	internal static extern bool HasInstantiation(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001008")]
	[Address(RVA = "0x502D2D0", Offset = "0x502D2D0", VA = "0x502D2D0")]
	internal static extern bool IsComObject(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001009")]
	[Address(RVA = "0x502D2E0", Offset = "0x502D2E0", VA = "0x502D2E0")]
	internal static extern bool IsInstanceOfType(System.RuntimeType type, object o);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600100A")]
	[Address(RVA = "0x502D2F0", Offset = "0x502D2F0", VA = "0x502D2F0")]
	internal static extern bool HasReferences(System.RuntimeType type);

	[Token(Token = "0x600100B")]
	[Address(RVA = "0x502D300", Offset = "0x502D300", VA = "0x502D300")]
	internal static bool IsComObject(System.RuntimeType type, bool isGenericCOM)
	{
		return default(bool);
	}

	[Token(Token = "0x600100C")]
	[Address(RVA = "0x502D310", Offset = "0x502D310", VA = "0x502D310")]
	internal static bool IsContextful(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600100D")]
	[Address(RVA = "0x502D390", Offset = "0x502D390", VA = "0x502D390")]
	internal static bool IsEquivalentTo(System.RuntimeType rtType1, System.RuntimeType rtType2)
	{
		return default(bool);
	}

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x502D3A0", Offset = "0x502D3A0", VA = "0x502D3A0")]
	internal static bool IsInterface(System.RuntimeType type)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600100F")]
	[Address(RVA = "0x502D3C0", Offset = "0x502D3C0", VA = "0x502D3C0")]
	internal static extern int GetArrayRank(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001010")]
	[Address(RVA = "0x502D3D0", Offset = "0x502D3D0", VA = "0x502D3D0")]
	internal static extern System.Reflection.RuntimeAssembly GetAssembly(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001011")]
	[Address(RVA = "0x502D3E0", Offset = "0x502D3E0", VA = "0x502D3E0")]
	internal static extern System.RuntimeType GetElementType(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001012")]
	[Address(RVA = "0x502D3F0", Offset = "0x502D3F0", VA = "0x502D3F0")]
	internal static extern System.Reflection.RuntimeModule GetModule(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001013")]
	[Address(RVA = "0x502D400", Offset = "0x502D400", VA = "0x502D400")]
	internal static extern bool IsGenericVariable(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001014")]
	[Address(RVA = "0x502D410", Offset = "0x502D410", VA = "0x502D410")]
	internal static extern System.RuntimeType GetBaseType(System.RuntimeType type);

	[Token(Token = "0x6001015")]
	[Address(RVA = "0x502D420", Offset = "0x502D420", VA = "0x502D420")]
	internal static bool CanCastTo(System.RuntimeType type, System.RuntimeType target)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001016")]
	[Address(RVA = "0x502D430", Offset = "0x502D430", VA = "0x502D430")]
	private static extern bool type_is_assignable_from(Type a, Type b);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001017")]
	[Address(RVA = "0x502D440", Offset = "0x502D440", VA = "0x502D440")]
	internal static extern bool IsGenericTypeDefinition(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001018")]
	[Address(RVA = "0x502D450", Offset = "0x502D450", VA = "0x502D450")]
	internal static extern IntPtr GetGenericParameterInfo(System.RuntimeType type);

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x502D460", Offset = "0x502D460", VA = "0x502D460")]
	internal static bool IsSubclassOf(System.RuntimeType childType, System.RuntimeType baseType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600101A")]
	[Address(RVA = "0x502D480", Offset = "0x502D480", VA = "0x502D480")]
	internal static extern bool is_subclass_of(IntPtr childType, IntPtr baseType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600101B")]
	[Address(RVA = "0x502D490", Offset = "0x502D490", VA = "0x502D490")]
	internal static extern bool IsByRefLike(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600101C")]
	[Address(RVA = "0x502D4A0", Offset = "0x502D4A0", VA = "0x502D4A0")]
	private static extern System.RuntimeType internal_from_name(string name, ref System.Threading.StackCrawlMark stackMark, Assembly callerAssembly, bool throwOnError, bool ignoreCase, bool reflectionOnly);

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x502D4B0", Offset = "0x502D4B0", VA = "0x502D4B0")]
	internal static System.RuntimeType GetTypeByName(string typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ref System.Threading.StackCrawlMark stackMark, bool loadTypeFromPartialName)
	{
		return null;
	}
}
