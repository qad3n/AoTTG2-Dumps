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
		[Address(RVA = "0x3D12A80", Offset = "0x3D12A80", VA = "0x3D12A80")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x3D128E0", Offset = "0x3D128E0", VA = "0x3D128E0")]
	internal RuntimeTypeHandle(IntPtr val)
	{
	}

	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x3D128F0", Offset = "0x3D128F0", VA = "0x3D128F0")]
	internal RuntimeTypeHandle(System.RuntimeType type)
	{
	}

	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x3D12910", Offset = "0x3D12910", VA = "0x3D12910")]
	private RuntimeTypeHandle(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FF7")]
	[Address(RVA = "0x3D12A90", Offset = "0x3D12A90", VA = "0x3D12A90", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FF8")]
	[Address(RVA = "0x3D12BF0", Offset = "0x3D12BF0", VA = "0x3D12BF0", Slot = "0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x3D12CD0", Offset = "0x3D12CD0", VA = "0x3D12CD0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public bool Equals(RuntimeTypeHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x3D12CE0", Offset = "0x3D12CE0", VA = "0x3D12CE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x3D12CF0", Offset = "0x3D12CF0", VA = "0x3D12CF0")]
	internal static extern TypeAttributes GetAttributes(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x3D12D00", Offset = "0x3D12D00", VA = "0x3D12D00")]
	private static extern int GetMetadataToken(System.RuntimeType type);

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x3D12D10", Offset = "0x3D12D10", VA = "0x3D12D10")]
	internal static int GetToken(System.RuntimeType type)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FFE")]
	[Address(RVA = "0x3D12D20", Offset = "0x3D12D20", VA = "0x3D12D20")]
	private static extern Type GetGenericTypeDefinition_impl(System.RuntimeType type);

	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x3D12D30", Offset = "0x3D12D30", VA = "0x3D12D30")]
	internal static Type GetGenericTypeDefinition(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001000")]
	[Address(RVA = "0x3D12D40", Offset = "0x3D12D40", VA = "0x3D12D40")]
	internal static bool IsPrimitive(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001001")]
	[Address(RVA = "0x3D12D70", Offset = "0x3D12D70", VA = "0x3D12D70")]
	internal static bool IsByRef(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001002")]
	[Address(RVA = "0x3D12D80", Offset = "0x3D12D80", VA = "0x3D12D80")]
	internal static bool IsPointer(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001003")]
	[Address(RVA = "0x3D12D90", Offset = "0x3D12D90", VA = "0x3D12D90")]
	internal static bool IsArray(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001004")]
	[Address(RVA = "0x3D12DB0", Offset = "0x3D12DB0", VA = "0x3D12DB0")]
	internal static bool IsSzArray(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001005")]
	[Address(RVA = "0x3D12DC0", Offset = "0x3D12DC0", VA = "0x3D12DC0")]
	internal static bool HasElementType(System.RuntimeType type)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001006")]
	[Address(RVA = "0x3D12D60", Offset = "0x3D12D60", VA = "0x3D12D60")]
	internal static extern System.Reflection.CorElementType GetCorElementType(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001007")]
	[Address(RVA = "0x3D12DE0", Offset = "0x3D12DE0", VA = "0x3D12DE0")]
	internal static extern bool HasInstantiation(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001008")]
	[Address(RVA = "0x3D12DF0", Offset = "0x3D12DF0", VA = "0x3D12DF0")]
	internal static extern bool IsComObject(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001009")]
	[Address(RVA = "0x3D12E00", Offset = "0x3D12E00", VA = "0x3D12E00")]
	internal static extern bool IsInstanceOfType(System.RuntimeType type, object o);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600100A")]
	[Address(RVA = "0x3D12E10", Offset = "0x3D12E10", VA = "0x3D12E10")]
	internal static extern bool HasReferences(System.RuntimeType type);

	[Token(Token = "0x600100B")]
	[Address(RVA = "0x3D12E20", Offset = "0x3D12E20", VA = "0x3D12E20")]
	internal static bool IsComObject(System.RuntimeType type, bool isGenericCOM)
	{
		return default(bool);
	}

	[Token(Token = "0x600100C")]
	[Address(RVA = "0x3D12E30", Offset = "0x3D12E30", VA = "0x3D12E30")]
	internal static bool IsContextful(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600100D")]
	[Address(RVA = "0x3D12EB0", Offset = "0x3D12EB0", VA = "0x3D12EB0")]
	internal static bool IsEquivalentTo(System.RuntimeType rtType1, System.RuntimeType rtType2)
	{
		return default(bool);
	}

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x3D12EC0", Offset = "0x3D12EC0", VA = "0x3D12EC0")]
	internal static bool IsInterface(System.RuntimeType type)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600100F")]
	[Address(RVA = "0x3D12EE0", Offset = "0x3D12EE0", VA = "0x3D12EE0")]
	internal static extern int GetArrayRank(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001010")]
	[Address(RVA = "0x3D12EF0", Offset = "0x3D12EF0", VA = "0x3D12EF0")]
	internal static extern System.Reflection.RuntimeAssembly GetAssembly(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001011")]
	[Address(RVA = "0x3D12F00", Offset = "0x3D12F00", VA = "0x3D12F00")]
	internal static extern System.RuntimeType GetElementType(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001012")]
	[Address(RVA = "0x3D12F10", Offset = "0x3D12F10", VA = "0x3D12F10")]
	internal static extern System.Reflection.RuntimeModule GetModule(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001013")]
	[Address(RVA = "0x3D12F20", Offset = "0x3D12F20", VA = "0x3D12F20")]
	internal static extern bool IsGenericVariable(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001014")]
	[Address(RVA = "0x3D12F30", Offset = "0x3D12F30", VA = "0x3D12F30")]
	internal static extern System.RuntimeType GetBaseType(System.RuntimeType type);

	[Token(Token = "0x6001015")]
	[Address(RVA = "0x3D12F40", Offset = "0x3D12F40", VA = "0x3D12F40")]
	internal static bool CanCastTo(System.RuntimeType type, System.RuntimeType target)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001016")]
	[Address(RVA = "0x3D12F50", Offset = "0x3D12F50", VA = "0x3D12F50")]
	private static extern bool type_is_assignable_from(Type a, Type b);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001017")]
	[Address(RVA = "0x3D12F60", Offset = "0x3D12F60", VA = "0x3D12F60")]
	internal static extern bool IsGenericTypeDefinition(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001018")]
	[Address(RVA = "0x3D12F70", Offset = "0x3D12F70", VA = "0x3D12F70")]
	internal static extern IntPtr GetGenericParameterInfo(System.RuntimeType type);

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x3D12F80", Offset = "0x3D12F80", VA = "0x3D12F80")]
	internal static bool IsSubclassOf(System.RuntimeType childType, System.RuntimeType baseType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600101A")]
	[Address(RVA = "0x3D12FA0", Offset = "0x3D12FA0", VA = "0x3D12FA0")]
	internal static extern bool is_subclass_of(IntPtr childType, IntPtr baseType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600101B")]
	[Address(RVA = "0x3D12FB0", Offset = "0x3D12FB0", VA = "0x3D12FB0")]
	internal static extern bool IsByRefLike(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600101C")]
	[Address(RVA = "0x3D12FC0", Offset = "0x3D12FC0", VA = "0x3D12FC0")]
	private static extern System.RuntimeType internal_from_name(string name, ref System.Threading.StackCrawlMark stackMark, Assembly callerAssembly, bool throwOnError, bool ignoreCase, bool reflectionOnly);

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x3D12FD0", Offset = "0x3D12FD0", VA = "0x3D12FD0")]
	internal static System.RuntimeType GetTypeByName(string typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ref System.Threading.StackCrawlMark stackMark, bool loadTypeFromPartialName)
	{
		return null;
	}
}
