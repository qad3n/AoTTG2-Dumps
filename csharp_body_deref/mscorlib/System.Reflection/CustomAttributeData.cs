using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x200050C")]
[ComVisible(true)]
public class CustomAttributeData
{
	[Token(Token = "0x200050D")]
	private class LazyCAttrData
	{
		[Token(Token = "0x4001513")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal Assembly assembly;

		[Token(Token = "0x4001514")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal IntPtr data;

		[Token(Token = "0x4001515")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal uint data_length;

		[Token(Token = "0x6002618")]
		[Address(RVA = "0x4EF7FD0", Offset = "0x4EF7FD0", VA = "0x4EF7FD0")]
		public LazyCAttrData()
		{
		}
	}

	[Token(Token = "0x400150F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private ConstructorInfo ctorInfo;

	[Token(Token = "0x4001510")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IList<CustomAttributeTypedArgument> ctorArgs;

	[Token(Token = "0x4001511")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private IList<CustomAttributeNamedArgument> namedArgs;

	[Token(Token = "0x4001512")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private LazyCAttrData lazyData;

	[Token(Token = "0x17000549")]
	[ComVisible(true)]
	public virtual ConstructorInfo Constructor
	{
		[Token(Token = "0x600260B")]
		[Address(RVA = "0x4EF8280", Offset = "0x4EF8280", VA = "0x4EF8280", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700054A")]
	[ComVisible(true)]
	public virtual IList<CustomAttributeTypedArgument> ConstructorArguments
	{
		[Token(Token = "0x600260C")]
		[Address(RVA = "0x4EF8290", Offset = "0x4EF8290", VA = "0x4EF8290", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700054B")]
	public virtual IList<CustomAttributeNamedArgument> NamedArguments
	{
		[Token(Token = "0x600260D")]
		[Address(RVA = "0x4EF82A0", Offset = "0x4EF82A0", VA = "0x4EF82A0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700054C")]
	public Type AttributeType
	{
		[Token(Token = "0x6002613")]
		[Address(RVA = "0x4EF8440", Offset = "0x4EF8440", VA = "0x4EF8440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002605")]
	[Address(RVA = "0x4EF7F00", Offset = "0x4EF7F00", VA = "0x4EF7F00")]
	protected CustomAttributeData()
	{
	}

	[Token(Token = "0x6002606")]
	[Address(RVA = "0x4EF7F10", Offset = "0x4EF7F10", VA = "0x4EF7F10")]
	internal CustomAttributeData(ConstructorInfo ctorInfo, Assembly assembly, IntPtr data, uint data_length)
	{
	}

	[Token(Token = "0x6002607")]
	[Address(RVA = "0x4EEBF50", Offset = "0x4EEBF50", VA = "0x4EEBF50")]
	internal CustomAttributeData(ConstructorInfo ctorInfo)
	{
	}

	[Token(Token = "0x6002608")]
	[Address(RVA = "0x4EEC3F0", Offset = "0x4EEC3F0", VA = "0x4EEC3F0")]
	internal CustomAttributeData(ConstructorInfo ctorInfo, IList<CustomAttributeTypedArgument> ctorArgs, IList<CustomAttributeNamedArgument> namedArgs)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002609")]
	[Address(RVA = "0x4EF7FE0", Offset = "0x4EF7FE0", VA = "0x4EF7FE0")]
	private static extern void ResolveArgumentsInternal(ConstructorInfo ctor, Assembly assembly, IntPtr data, uint data_length, out object[] ctorArgs, out object[] namedArgs);

	[Token(Token = "0x600260A")]
	[Address(RVA = "0x4EF7FF0", Offset = "0x4EF7FF0", VA = "0x4EF7FF0")]
	private void ResolveArguments()
	{
	}

	[Token(Token = "0x600260E")]
	[Address(RVA = "0x4EF82B0", Offset = "0x4EF82B0", VA = "0x4EF82B0")]
	public static IList<CustomAttributeData> GetCustomAttributes(Assembly target)
	{
		return null;
	}

	[Token(Token = "0x600260F")]
	[Address(RVA = "0x4EF8300", Offset = "0x4EF8300", VA = "0x4EF8300")]
	public static IList<CustomAttributeData> GetCustomAttributes(MemberInfo target)
	{
		return null;
	}

	[Token(Token = "0x6002610")]
	[Address(RVA = "0x4EF8350", Offset = "0x4EF8350", VA = "0x4EF8350")]
	internal static IList<CustomAttributeData> GetCustomAttributesInternal(System.RuntimeType target)
	{
		return null;
	}

	[Token(Token = "0x6002611")]
	[Address(RVA = "0x4EF83A0", Offset = "0x4EF83A0", VA = "0x4EF83A0")]
	public static IList<CustomAttributeData> GetCustomAttributes(Module target)
	{
		return null;
	}

	[Token(Token = "0x6002612")]
	[Address(RVA = "0x4EF83F0", Offset = "0x4EF83F0", VA = "0x4EF83F0")]
	public static IList<CustomAttributeData> GetCustomAttributes(ParameterInfo target)
	{
		return null;
	}

	[Token(Token = "0x6002614")]
	[Address(RVA = "0x4EF8470", Offset = "0x4EF8470", VA = "0x4EF8470", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002615")]
	private static T[] UnboxValues<T>(object[] values)
	{
		return null;
	}

	[Token(Token = "0x6002616")]
	[Address(RVA = "0x4EF8AC0", Offset = "0x4EF8AC0", VA = "0x4EF8AC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002617")]
	[Address(RVA = "0x4EF9310", Offset = "0x4EF9310", VA = "0x4EF9310", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
