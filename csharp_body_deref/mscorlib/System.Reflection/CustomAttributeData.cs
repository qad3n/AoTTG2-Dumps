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
[Token(Token = "0x200053C")]
[ComVisible(true)]
public class CustomAttributeData
{
	[Token(Token = "0x200053D")]
	private class LazyCAttrData
	{
		[Token(Token = "0x4001512")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal Assembly assembly;

		[Token(Token = "0x4001513")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal IntPtr data;

		[Token(Token = "0x4001514")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal uint data_length;

		[Token(Token = "0x600269B")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public LazyCAttrData()
		{
		}
	}

	[Token(Token = "0x400150E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private ConstructorInfo ctorInfo;

	[Token(Token = "0x400150F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IList<CustomAttributeTypedArgument> ctorArgs;

	[Token(Token = "0x4001510")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private IList<CustomAttributeNamedArgument> namedArgs;

	[Token(Token = "0x4001511")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private LazyCAttrData lazyData;

	[Token(Token = "0x1700054C")]
	[ComVisible(true)]
	public virtual ConstructorInfo Constructor
	{
		[Token(Token = "0x600268E")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700054D")]
	[ComVisible(true)]
	public virtual IList<CustomAttributeTypedArgument> ConstructorArguments
	{
		[Token(Token = "0x600268F")]
		[Address(RVA = "0x1A42B10", Offset = "0x1A41110", VA = "0x181A42B10", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700054E")]
	public virtual IList<CustomAttributeNamedArgument> NamedArguments
	{
		[Token(Token = "0x6002690")]
		[Address(RVA = "0x1A42B30", Offset = "0x1A41130", VA = "0x181A42B30", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700054F")]
	public Type AttributeType
	{
		[Token(Token = "0x6002696")]
		[Address(RVA = "0x1A1F330", Offset = "0x1A1D930", VA = "0x181A1F330")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002688")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected CustomAttributeData()
	{
	}

	[Token(Token = "0x6002689")]
	[Address(RVA = "0x1A429B0", Offset = "0x1A40FB0", VA = "0x181A429B0")]
	internal CustomAttributeData(ConstructorInfo ctorInfo, Assembly assembly, IntPtr data, uint data_length)
	{
	}

	[Token(Token = "0x600268A")]
	[Address(RVA = "0x1A42A70", Offset = "0x1A41070", VA = "0x181A42A70")]
	internal CustomAttributeData(ConstructorInfo ctorInfo)
	{
	}

	[Token(Token = "0x600268B")]
	[Address(RVA = "0xE56DE0", Offset = "0xE553E0", VA = "0x180E56DE0")]
	internal CustomAttributeData(ConstructorInfo ctorInfo, IList<CustomAttributeTypedArgument> ctorArgs, IList<CustomAttributeNamedArgument> namedArgs)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600268C")]
	[Address(RVA = "0x1A42270", Offset = "0x1A40870", VA = "0x181A42270")]
	private static extern void ResolveArgumentsInternal(ConstructorInfo ctor, Assembly assembly, IntPtr data, uint data_length, out object[] ctorArgs, out object[] namedArgs);

	[Token(Token = "0x600268D")]
	[Address(RVA = "0x1A42280", Offset = "0x1A40880", VA = "0x181A42280")]
	private void ResolveArguments()
	{
	}

	[Token(Token = "0x6002691")]
	[Address(RVA = "0x1A41DD0", Offset = "0x1A403D0", VA = "0x181A41DD0")]
	public static IList<CustomAttributeData> GetCustomAttributes(Assembly target)
	{
		return null;
	}

	[Token(Token = "0x6002692")]
	[Address(RVA = "0x1A41D80", Offset = "0x1A40380", VA = "0x181A41D80")]
	public static IList<CustomAttributeData> GetCustomAttributes(MemberInfo target)
	{
		return null;
	}

	[Token(Token = "0x6002693")]
	[Address(RVA = "0x1A41C90", Offset = "0x1A40290", VA = "0x181A41C90")]
	internal static IList<CustomAttributeData> GetCustomAttributesInternal(System.RuntimeType target)
	{
		return null;
	}

	[Token(Token = "0x6002694")]
	[Address(RVA = "0x1A41CE0", Offset = "0x1A402E0", VA = "0x181A41CE0")]
	public static IList<CustomAttributeData> GetCustomAttributes(Module target)
	{
		return null;
	}

	[Token(Token = "0x6002695")]
	[Address(RVA = "0x1A41D30", Offset = "0x1A40330", VA = "0x181A41D30")]
	public static IList<CustomAttributeData> GetCustomAttributes(ParameterInfo target)
	{
		return null;
	}

	[Token(Token = "0x6002697")]
	[Address(RVA = "0x1A423D0", Offset = "0x1A409D0", VA = "0x181A423D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002698")]
	private static T[] UnboxValues<T>(object[] values)
	{
		return null;
	}

	[Token(Token = "0x6002699")]
	[Address(RVA = "0x1A41730", Offset = "0x1A3FD30", VA = "0x181A41730", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600269A")]
	[Address(RVA = "0x1A41E20", Offset = "0x1A40420", VA = "0x181A41E20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
