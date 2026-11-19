// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.CustomAttributeData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x2000515")]
[ComVisible(true)]
public class CustomAttributeData
{
	[Token(Token = "0x2000516")]
	private class LazyCAttrData
	{
		[Token(Token = "0x4001472")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal Assembly assembly;

		[Token(Token = "0x4001473")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal IntPtr data;

		[Token(Token = "0x4001474")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal uint data_length;

		[Token(Token = "0x6002669")]
		[Address(RVA = "0x53E46F0", Offset = "0x53E36F0", VA = "0x53E46F0")]
		public LazyCAttrData()
		{
		}
	}

	[Token(Token = "0x400146E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private ConstructorInfo ctorInfo;

	[Token(Token = "0x400146F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IList<CustomAttributeTypedArgument> ctorArgs;

	[Token(Token = "0x4001470")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private IList<CustomAttributeNamedArgument> namedArgs;

	[Token(Token = "0x4001471")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private LazyCAttrData lazyData;

	[Token(Token = "0x1700054B")]
	[ComVisible(true)]
	public virtual ConstructorInfo Constructor
	{
		[Token(Token = "0x600265C")]
		[Address(RVA = "0x53E49A0", Offset = "0x53E39A0", VA = "0x53E49A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700054C")]
	[ComVisible(true)]
	public virtual IList<CustomAttributeTypedArgument> ConstructorArguments
	{
		[Token(Token = "0x600265D")]
		[Address(RVA = "0x53E49B0", Offset = "0x53E39B0", VA = "0x53E49B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700054D")]
	public virtual IList<CustomAttributeNamedArgument> NamedArguments
	{
		[Token(Token = "0x600265E")]
		[Address(RVA = "0x53E49C0", Offset = "0x53E39C0", VA = "0x53E49C0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700054E")]
	public Type AttributeType
	{
		[Token(Token = "0x6002664")]
		[Address(RVA = "0x53E4B60", Offset = "0x53E3B60", VA = "0x53E4B60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002656")]
	[Address(RVA = "0x53E4620", Offset = "0x53E3620", VA = "0x53E4620")]
	protected CustomAttributeData()
	{
	}

	[Token(Token = "0x6002657")]
	[Address(RVA = "0x53E4630", Offset = "0x53E3630", VA = "0x53E4630")]
	internal CustomAttributeData(ConstructorInfo ctorInfo, Assembly assembly, IntPtr data, uint data_length)
	{
	}

	[Token(Token = "0x6002658")]
	[Address(RVA = "0x53D8CB0", Offset = "0x53D7CB0", VA = "0x53D8CB0")]
	internal CustomAttributeData(ConstructorInfo ctorInfo)
	{
	}

	[Token(Token = "0x6002659")]
	[Address(RVA = "0x53D9140", Offset = "0x53D8140", VA = "0x53D9140")]
	internal CustomAttributeData(ConstructorInfo ctorInfo, IList<CustomAttributeTypedArgument> ctorArgs, IList<CustomAttributeNamedArgument> namedArgs)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600265A")]
	[Address(RVA = "0x53E4700", Offset = "0x53E3700", VA = "0x53E4700")]
	private static extern void ResolveArgumentsInternal(ConstructorInfo ctor, Assembly assembly, IntPtr data, uint data_length, out object[] ctorArgs, out object[] namedArgs);

	[Token(Token = "0x600265B")]
	[Address(RVA = "0x53E4710", Offset = "0x53E3710", VA = "0x53E4710")]
	private void ResolveArguments()
	{
	}

	[Token(Token = "0x600265F")]
	[Address(RVA = "0x53E49D0", Offset = "0x53E39D0", VA = "0x53E49D0")]
	public static IList<CustomAttributeData> GetCustomAttributes(Assembly target)
	{
		return null;
	}

	[Token(Token = "0x6002660")]
	[Address(RVA = "0x53E4A20", Offset = "0x53E3A20", VA = "0x53E4A20")]
	public static IList<CustomAttributeData> GetCustomAttributes(MemberInfo target)
	{
		return null;
	}

	[Token(Token = "0x6002661")]
	[Address(RVA = "0x53E4A70", Offset = "0x53E3A70", VA = "0x53E4A70")]
	internal static IList<CustomAttributeData> GetCustomAttributesInternal(System.RuntimeType target)
	{
		return null;
	}

	[Token(Token = "0x6002662")]
	[Address(RVA = "0x53E4AC0", Offset = "0x53E3AC0", VA = "0x53E4AC0")]
	public static IList<CustomAttributeData> GetCustomAttributes(Module target)
	{
		return null;
	}

	[Token(Token = "0x6002663")]
	[Address(RVA = "0x53E4B10", Offset = "0x53E3B10", VA = "0x53E4B10")]
	public static IList<CustomAttributeData> GetCustomAttributes(ParameterInfo target)
	{
		return null;
	}

	[Token(Token = "0x6002665")]
	[Address(RVA = "0x53E4B90", Offset = "0x53E3B90", VA = "0x53E4B90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002666")]
	private static T[] UnboxValues<T>(object[] values)
	{
		return null;
	}

	[Token(Token = "0x6002667")]
	[Address(RVA = "0x53E51E0", Offset = "0x53E41E0", VA = "0x53E51E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002668")]
	[Address(RVA = "0x53E5A20", Offset = "0x53E4A20", VA = "0x53E5A20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
