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
[Token(Token = "0x20001C8")]
[ComVisible(true)]
public struct RuntimeTypeHandle : ISerializable
{
	[Token(Token = "0x4000728")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr value;

	[Token(Token = "0x17000175")]
	public IntPtr Value
	{
		[Token(Token = "0x600104D")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x600104A")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	internal RuntimeTypeHandle(IntPtr val)
	{
	}

	[Token(Token = "0x600104B")]
	[Address(RVA = "0x1B89FE0", Offset = "0x1B885E0", VA = "0x181B89FE0")]
	internal RuntimeTypeHandle(System.RuntimeType type)
	{
	}

	[Token(Token = "0x600104C")]
	[Address(RVA = "0x1B89E40", Offset = "0x1B88440", VA = "0x181B89E40")]
	private RuntimeTypeHandle(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600104E")]
	[Address(RVA = "0x1B89770", Offset = "0x1B87D70", VA = "0x181B89770", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600104F")]
	[Address(RVA = "0x1B895E0", Offset = "0x1B87BE0", VA = "0x181B895E0", Slot = "0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001050")]
	[Address(RVA = "0x187DED0", Offset = "0x187C4D0", VA = "0x18187DED0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public bool Equals(RuntimeTypeHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001051")]
	[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001052")]
	[Address(RVA = "0x1B896F0", Offset = "0x1B87CF0", VA = "0x181B896F0")]
	internal static extern TypeAttributes GetAttributes(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001053")]
	[Address(RVA = "0x1B89750", Offset = "0x1B87D50", VA = "0x181B89750")]
	private static extern int GetMetadataToken(System.RuntimeType type);

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x1B89750", Offset = "0x1B87D50", VA = "0x181B89750")]
	internal static int GetToken(System.RuntimeType type)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001055")]
	[Address(RVA = "0x1B89740", Offset = "0x1B87D40", VA = "0x181B89740")]
	private static extern Type GetGenericTypeDefinition_impl(System.RuntimeType type);

	[Token(Token = "0x6001056")]
	[Address(RVA = "0x1B89740", Offset = "0x1B87D40", VA = "0x181B89740")]
	internal static Type GetGenericTypeDefinition(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001057")]
	[Address(RVA = "0x1B89DC0", Offset = "0x1B883C0", VA = "0x181B89DC0")]
	internal static bool IsPrimitive(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001058")]
	[Address(RVA = "0x1B89CA0", Offset = "0x1B882A0", VA = "0x181B89CA0")]
	internal static bool IsByRef(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001059")]
	[Address(RVA = "0x1B89DA0", Offset = "0x1B883A0", VA = "0x181B89DA0")]
	internal static bool IsPointer(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600105A")]
	[Address(RVA = "0x1B89C70", Offset = "0x1B88270", VA = "0x181B89C70")]
	internal static bool IsArray(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600105B")]
	[Address(RVA = "0x1B89E20", Offset = "0x1B88420", VA = "0x181B89E20")]
	internal static bool IsSzArray(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600105C")]
	[Address(RVA = "0x1B89C20", Offset = "0x1B88220", VA = "0x181B89C20")]
	internal static bool HasElementType(System.RuntimeType type)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600105D")]
	[Address(RVA = "0x1B89710", Offset = "0x1B87D10", VA = "0x181B89710")]
	internal static extern System.Reflection.CorElementType GetCorElementType(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600105E")]
	[Address(RVA = "0x1B89C50", Offset = "0x1B88250", VA = "0x181B89C50")]
	internal static extern bool HasInstantiation(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600105F")]
	[Address(RVA = "0x1948290", Offset = "0x1946890", VA = "0x181948290")]
	internal static extern bool IsComObject(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001060")]
	[Address(RVA = "0x1B89D70", Offset = "0x1B88370", VA = "0x181B89D70")]
	internal static extern bool IsInstanceOfType(System.RuntimeType type, object o);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001061")]
	[Address(RVA = "0x1B89C60", Offset = "0x1B88260", VA = "0x181B89C60")]
	internal static extern bool HasReferences(System.RuntimeType type);

	[Token(Token = "0x6001062")]
	[Address(RVA = "0x1B89CC0", Offset = "0x1B882C0", VA = "0x181B89CC0")]
	internal static bool IsComObject(System.RuntimeType type, bool isGenericCOM)
	{
		return default(bool);
	}

	[Token(Token = "0x6001063")]
	[Address(RVA = "0x1B89CD0", Offset = "0x1B882D0", VA = "0x181B89CD0")]
	internal static bool IsContextful(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001064")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	internal static bool IsEquivalentTo(System.RuntimeType rtType1, System.RuntimeType rtType2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001065")]
	[Address(RVA = "0x1B89D80", Offset = "0x1B88380", VA = "0x181B89D80")]
	internal static bool IsInterface(System.RuntimeType type)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001066")]
	[Address(RVA = "0x1B896D0", Offset = "0x1B87CD0", VA = "0x181B896D0")]
	internal static extern int GetArrayRank(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001067")]
	[Address(RVA = "0x1B896E0", Offset = "0x1B87CE0", VA = "0x181B896E0")]
	internal static extern System.Reflection.RuntimeAssembly GetAssembly(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001068")]
	[Address(RVA = "0x1B89720", Offset = "0x1B87D20", VA = "0x181B89720")]
	internal static extern System.RuntimeType GetElementType(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001069")]
	[Address(RVA = "0x1B89760", Offset = "0x1B87D60", VA = "0x181B89760")]
	internal static extern System.Reflection.RuntimeModule GetModule(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600106A")]
	[Address(RVA = "0x1B89D60", Offset = "0x1B88360", VA = "0x181B89D60")]
	internal static extern bool IsGenericVariable(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600106B")]
	[Address(RVA = "0x1B89700", Offset = "0x1B87D00", VA = "0x181B89700")]
	internal static extern System.RuntimeType GetBaseType(System.RuntimeType type);

	[Token(Token = "0x600106C")]
	[Address(RVA = "0x1B895D0", Offset = "0x1B87BD0", VA = "0x181B895D0")]
	internal static bool CanCastTo(System.RuntimeType type, System.RuntimeType target)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600106D")]
	[Address(RVA = "0x1B8A030", Offset = "0x1B88630", VA = "0x181B8A030")]
	private static extern bool type_is_assignable_from(Type a, Type b);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600106E")]
	[Address(RVA = "0x1B89D50", Offset = "0x1B88350", VA = "0x181B89D50")]
	internal static extern bool IsGenericTypeDefinition(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600106F")]
	[Address(RVA = "0x1B89730", Offset = "0x1B87D30", VA = "0x181B89730")]
	internal static extern IntPtr GetGenericParameterInfo(System.RuntimeType type);

	[Token(Token = "0x6001070")]
	[Address(RVA = "0x1B89DF0", Offset = "0x1B883F0", VA = "0x181B89DF0")]
	internal static bool IsSubclassOf(System.RuntimeType childType, System.RuntimeType baseType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001071")]
	[Address(RVA = "0x1B8A020", Offset = "0x1B88620", VA = "0x181B8A020")]
	internal static extern bool is_subclass_of(IntPtr childType, IntPtr baseType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001072")]
	[Address(RVA = "0x1B89C90", Offset = "0x1B88290", VA = "0x181B89C90")]
	internal static extern bool IsByRefLike(System.RuntimeType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001073")]
	[Address(RVA = "0x1B8A000", Offset = "0x1B88600", VA = "0x181B8A000")]
	private static extern System.RuntimeType internal_from_name(string name, ref System.Threading.StackCrawlMark stackMark, Assembly callerAssembly, bool throwOnError, bool ignoreCase, bool reflectionOnly);

	[Token(Token = "0x6001074")]
	[Address(RVA = "0x1B898F0", Offset = "0x1B87EF0", VA = "0x181B898F0")]
	internal static System.RuntimeType GetTypeByName(string typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ref System.Threading.StackCrawlMark stackMark, bool loadTypeFromPartialName)
	{
		return null;
	}
}
