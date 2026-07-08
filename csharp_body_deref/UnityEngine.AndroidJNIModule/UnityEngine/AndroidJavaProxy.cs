using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200000A")]
public class AndroidJavaProxy
{
	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x10")]
	public readonly AndroidJavaClass javaInterface;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x18")]
	internal IntPtr proxyObject;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x0")]
	private static readonly GlobalJavaObjectRef s_JavaLangSystemClass;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x8")]
	private static readonly IntPtr s_HashCodeMethodID;

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4A72120", Offset = "0x4A72120", VA = "0x4A72120")]
	public AndroidJavaProxy(string javaInterface)
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x4A72700", Offset = "0x4A72700", VA = "0x4A72700")]
	public AndroidJavaProxy(AndroidJavaClass javaInterface)
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x4A72740", Offset = "0x4A72740", VA = "0x4A72740", Slot = "1")]
	~AndroidJavaProxy()
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x4A72800", Offset = "0x4A72800", VA = "0x4A72800", Slot = "4")]
	public virtual AndroidJavaObject Invoke(string methodName, object[] args)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4A74150", Offset = "0x4A74150", VA = "0x4A74150", Slot = "5")]
	public virtual AndroidJavaObject Invoke(string methodName, AndroidJavaObject[] javaArgs)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x4A72250", Offset = "0x4A72250", VA = "0x4A72250", Slot = "6")]
	public virtual IntPtr Invoke(string methodName, IntPtr javaArgs)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x4A75590", Offset = "0x4A75590", VA = "0x4A75590", Slot = "7")]
	public virtual bool equals(AndroidJavaObject obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x4A755F0", Offset = "0x4A755F0", VA = "0x4A755F0", Slot = "8")]
	public virtual int hashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x4A75740", Offset = "0x4A75740", VA = "0x4A75740", Slot = "9")]
	public virtual string toString()
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x4A757A0", Offset = "0x4A757A0", VA = "0x4A757A0")]
	internal AndroidJavaObject GetProxyObject()
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x4A73F80", Offset = "0x4A73F80", VA = "0x4A73F80")]
	internal IntPtr GetRawProxy()
	{
		return default(IntPtr);
	}
}
