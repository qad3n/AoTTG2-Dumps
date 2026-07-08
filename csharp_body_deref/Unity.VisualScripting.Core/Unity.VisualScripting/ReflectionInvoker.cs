using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000154")]
public class ReflectionInvoker : IOptimizedInvoker
{
	[Token(Token = "0x4000831")]
	[FieldOffset(Offset = "0x10")]
	private readonly MethodInfo methodInfo;

	[Token(Token = "0x4000832")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object[] EmptyObjects;

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x4A217B0", Offset = "0x4A217B0", VA = "0x4A217B0")]
	public ReflectionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x4A21A10", Offset = "0x4A21A10", VA = "0x4A21A10", Slot = "4")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x4A21A20", Offset = "0x4A21A20", VA = "0x4A21A20", Slot = "11")]
	public object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x4A21A40", Offset = "0x4A21A40", VA = "0x4A21A40", Slot = "5")]
	public object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x4A21AB0", Offset = "0x4A21AB0", VA = "0x4A21AB0", Slot = "6")]
	public object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x4A21B70", Offset = "0x4A21B70", VA = "0x4A21B70", Slot = "7")]
	public object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x4A21C60", Offset = "0x4A21C60", VA = "0x4A21C60", Slot = "8")]
	public object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x4A21D90", Offset = "0x4A21D90", VA = "0x4A21D90", Slot = "9")]
	public object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x4A21F00", Offset = "0x4A21F00", VA = "0x4A21F00", Slot = "10")]
	public object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x4A220C0", Offset = "0x4A220C0", VA = "0x4A220C0")]
	public Type[] GetParameterTypes()
	{
		return null;
	}
}
